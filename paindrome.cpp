#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>


using namespace std;
string  ft_reverse(string s)
{
    
    int  l = s.length();
    int i = 0;
    string str(l+1,'\0');
    while (l >= 0)
    {
        str[i] = s[l];
        i++;
        l--;
    }
     str[i] = '\0';
    return str;
}

string ft_remove(string s)
{
    string res;
    for (int i = 0; i <= s.length();i++)
    {
        if (isalnum(s[i]))
            res += tolower(s[i]);
    }
    return res;
}


class Solution {
public:
    bool isPalindrome(std::string s) {
         string s1 = s;
        s1 = ft_reverse(s);
        s = ft_remove(s);
        s1 = ft_remove(s1);
        return (ft_remove(s) == ft_remove(s1));
    }
};

int main()
{
    Solution a;
    if (a.isPalindrome("tab a cat"))
        cout << "true" << endl;
    else 
        cout << "false " << endl;
    
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
