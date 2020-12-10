#include <vector>
#include <string>

void TestFunctionality(
        const std::vector<std::string>& docs,
        const std::vector<std::string>& queries,
        const std::vector<std::string>& expected
        );
void TestSerpFormat();
void TestTop5();
void TestHitcount();
void TestRanking();
void TestBasicSearch();
void FinalTest();
