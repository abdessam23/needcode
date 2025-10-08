#include <vector>
#include <iostream>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) 
        {
           
        for (int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1 ; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                 
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int  main()
{
    Solution a;
    std::vector<int> arr = {3,4,5,6};
    std::vector<int> p = a.twoSum(arr,7);
    for (int i = 0 ;i < p.size(); i++)
    {
        std::cout << p[i] ;
    }
}