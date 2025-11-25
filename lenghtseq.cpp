#include <iostream> 
#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution {
public:
    void longestConsecutive(vector<int>& nums) {
     
        unordered_set<int> s(nums.begin(),nums.end());
        for (auto x: s)
        {
            std::cout << x << " ";
        }
        // for(int i = 0; i < nums.size();i++)
        // {
        //     if (i < nums.size() - 1)
        //     {
        //         if (nums.size() > 1 && (nums[i] == nums[i + 1] ||  (nums[i + 1] - nums[i]) > 1))
        //             continue;
        //     }
        //     flag++;
        // }
        // return flag;
    }
};


int main()
{
    vector <int> s = {2,20,4,10,3,4,5};
    Solution a;

    a.longestConsecutive(s);
   

}