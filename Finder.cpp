#include "Finder.h"

using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
vector<int> result;
for(int i = 1; i <= s2.size(); i++) {
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
