#include<iostream>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
 public:
  string longestCommonPrefix(vector<string>& test_str) {
    if (test_str.empty())
      return "";

    for (int i = 0; i < test_str[0].length(); ++i)
      for (int k = 1; k < test_str.size(); ++k)
        if (i == test_str[k].length() || test_str[k][i] != test_str[0][i])
          return test_str[0].substr(0, i);

    return test_str[0];
  }
};

int main(){
    Solution sol;
    vector<string> test = {"flower", "flow", "flight"};
    string lcp = sol.longestCommonPrefix(test);
    cout<<lcp;

}