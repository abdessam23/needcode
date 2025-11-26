#include <iostream> 
#include <set>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> p;
        vector<int> count;
        vector<int> v;
        int n = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
           p.insert(nums[i]);
        }    
        for (auto x= p.begin(); x != p.end() ;x++)
        {
            count.push_back(*x);
        }
       
        for (size_t i = 0; i < count.size(); i++)
        {
          if ((i + 1 <count.size()) && count[i + 1] - count[i] > 1)
          {
                v.push_back(n);
                n = 0;    
          }
          n++;
        }
        int max = *max_element(v.begin(),v.end());
        
        return max;
    }
};


int main()
{
    vector <int> s = {1,1,2,4,5,6,3,55,66,77};
    Solution a;

    cout << a.longestConsecutive(s);
   

}