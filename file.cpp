#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <time.h>
class Finder {
public:
std::vector<int> findSubstrings(std::string s1, std::string s2);
};


using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
vector<int> result;
for(size_t i = 1; i <= s2.size(); i++) {
size_t found = s1.find(s2.substr(0, i));
if (found != string::npos) {
result.push_back(found);
cout<< found << "\n";

} else {
for (int j=i; j<=s2.size();j++){
result.push_back(-1);
cout<< -1 << "\n";
}
return result;
}
}
return result;
}

int main() {
    // Write C++ code here
    clock_t tStart = clock();
    Finder A;
    A.findSubstrings("abcabbb", "abbbbbbbbbbbbbbbbbbbbb");
 printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
