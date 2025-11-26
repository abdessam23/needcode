#include <iostream>
#include <stack>

using namespace std;


int main()
{
    stack<int> p;
    p.push(12);
    p.push(14);
    p.push(1);
    p.push(3);
    p.push(5);
    stack<int> tmp(p);
    while (!tmp.empty())
    {
        cout << tmp.top() << "\n";
        tmp.pop();
    }
    
}