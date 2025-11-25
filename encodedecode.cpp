#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string b;
        for(int i = 0; i < strs.size(); i++)
        {
            b += strs[i] + "1";

        }
        return b;
    }
    vector<string> decode(string s) {
         
        vector <string> p;
        int pos = 0;
        int l ;
        stringstream strm(s);
        string str;
        while (getline(strm,str,'1'))
        {
            p.push_back(str);
        }
        return p;
    }
};

int main()
{
    vector <string> s = {"neet","code","love","you"};
    Solution a;
   string str = a.encode(s);
   vector <string>  v = a.decode(str);
   cout << "[";
   for(int i = 0; i < v.size();i++)
   {
     cout << v[i] << "," ;
   }
   cout  << "]";
}
