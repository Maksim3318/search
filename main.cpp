#include <fstream>
#include "test.h"
#include "parse.h"
#include "test_runner.h"
#include "search_server.h"
#include "profile.h"

using namespace std;

int main() {
    FinalTest();
    vector<string> docs;
    bool isReady = false;
    while (!isReady) {
        std::string filename;
        cin >> filename;
        ifstream file;
        file.open(filename);
        if (!file.is_open()) {
            std::cout << "Error. Enter file path again.";
            continue;
        }
        isReady = true;
        while (!file.eof()) {
            string s;
            getline(file, s);
            docs.emplace_back(move(s));
        }
    }
    std::istringstream docs_input(Join('\n', docs));
    server::SearchServer srv(docs_input);
    docs.clear();
    string command;
    while (command != "CLOSE") {
        getline(cin, command);
        istringstream queries_input(command);
        srv.AddQueriesStream(queries_input, cout);
    }

    return 0;
}
