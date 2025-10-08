#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> p;
//        vector<int> ret;
//        vector<int> m;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             p[nums[i]]++;
//         }
//         for(auto& h: p){
//             m.push_back(h.second);
//         }
//         sort(m.begin(), m.end());
//         for (int i = m.size() - 1 ; i > 0; --i) {
//             cout << p[m[i]] << endl;
//              ret.push_back(p[m[i]]);
//             if (ret.size() == k)
//             {
//                return ret;
//             }
//         }
      
//     return ret;
//     }
// };
bool compare(pair<int,int> a, pair<int,int> b)
{
    return (a > b);
}
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;

    vector<pair<int, int>> vec(freq.begin(), freq.end());
 
    sort(vec.begin(), vec.end(),compare);

    vector<int> ret;
    for (int i = 0; i < k; i++) {
        ret.push_back(vec[i].first); 
    }
    return ret;
}   
int main()
{

    vector<int> y;
    vector<int> t = {1,2};
    y = topKFrequent(t,2);
    for (auto& i:y)
    {
        cout << i<< endl;
    }
}