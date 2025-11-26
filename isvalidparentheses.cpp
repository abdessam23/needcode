#include <iostream>
#include <stack>

using namespace std;

bool fun(string& str)
{
    while (true)
    {
        size_t pos = string::npos;
        if ((pos = str.find("()")) != string::npos)
        {
            str.erase(pos,2);
            continue;
        }
        if ((pos = str.find("{}")) != string::npos)
        {
            str.erase(pos,2);
            continue;
        }
        if ((pos = str.find("[]")) != string::npos)
        {
            str.erase(pos,2);
            continue;
        }
        break;
    }
    return str.empty();
    
}
int main()
{
    string str = "{()}";
    if (fun(str))
        cout << "true" <<"\n";
    else 
        cout << "false" << "\n";
    return 0;
    
}