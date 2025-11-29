#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
        set<int> p;
        vector<int> str;
        vector<vector<int>> arr;
        for (size_t i = 0; i < nums.size(); i++)
        {
           p.insert(nums[i]);
        }
        for (int* x: p)
        {
           str.push_back(*x);
        }
        for (size_t i = 0; i < str.size(); i++)
        {
            if (i+2 < str.size() &&  (str[i] + str[i+ 1] + str[i +2]) == 0)
            {
                arr[i].push_back(str[i]);
                arr[i].push_back(str[i + 1]);
                arr[i].push_back(str[i + 2]);
            }
        }
            return arr;
        }
};


int main()
{
    Solution a;
    vector<int> nums= {-1,0,1,2,-1,-4};
    vector<vector<int>> p = a.threeSum(nums);
    for (size_t i = 0; i < p.size(); i++)
    {
        for (size_t j = 0;j < p[i].size(); j++)
        {
           cout << p[i][j] << "," ;
        }
        
    }
    
}