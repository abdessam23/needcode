#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>


using namespace std;
string  reverse(s)
{
    
}
class Solution {
public:
    bool isPalindrome(std::string s) {
        // transform(s.begin(),s.end(),s.begin(),::tolower);
        for(auto& a: s)
        {
            a = tolower(a);
        }

        string str = s;
        cout << str <<endl;
        reverse(s.begin(), s.end());
        cout << s <<endl;
        if (s == str)
            return true;
        return false;
    }
};

int main()
{
    Solution a;
    if (a.isPalindrome("Was it a car or a cat I saw"))
        cout << "true";
    else
        cout << "false";
    
}
// #include <iostream>
// #include <algorithm>

// class Solution {
// public:
//     bool isPalindrome(std::string s) {
//         std::string str;
//         int l = s.length();
//         for(int i = l - 1 ;i>= 0; i--)
//         {
//             str[i] = s[i];
//         }

//     }
// };
