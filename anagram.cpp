#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string,vector<string>> p;
        string key;
        for(int i = 0; i < strs.size();i++)
        {
            key = strs[i];
            sort(key.begin(),key.end());
            p[key].push_back(strs[i]);
        }
        for (auto& s:p)
        {
           ret.push_back(s.second);
        }
        return ret;
    }
};


int main() {
    Solution sol;

    // Example input
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    // Call function
    vector<vector<string>> result = sol.groupAnagrams(strs);

    // Print the result
    cout << "Grouped Anagrams:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
