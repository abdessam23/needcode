#include <iostream>

#include<vector>

using namespace std;


class Solution {
public:
       vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> left(nums.size(),1);
        for (int i = 1; i < nums.size();i++)
        {
            left[i] = left[i - 1] * nums[i - 1];
        }
        int posfix = 1;
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            left[i] *= posfix;
            posfix *= nums[i]; 
        }
        return left;
    }
};


int main()
{
    Solution a;
    vector <int> nums = {1,2,4,6};
    vector <int> f =  a.productExceptSelf(nums);
    for(int i = 0; i < f.size();i++)
    {
        cout << f[i] << ",";
    }
    return 0;
}