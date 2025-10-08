#include <vector>
#include <iostream>
#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        for(int i = 0;i < nums.size();i++)
        {
            if (seen.count(nums[i]))
                return true;
            seen.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    Solution a;
    std::vector<int> nums = {1,2,3,3};
    if (a.hasDuplicate(nums))
        std::cout << "True";
    else
        std::cout << "false";
}