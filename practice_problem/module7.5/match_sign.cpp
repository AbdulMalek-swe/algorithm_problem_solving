#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st = "([{)]}";
    stack<char> name;
    for (char s : st)
    {
        if (s == '{' || s == '[' || s == '(')
        {
            name.push(s);
        }
        else
        {
            // if (name.empty())
            // {
            //     break;
            // }
            if (name.top() == '(' && s == ')')
            {
                cout<<"hite me"<<endl;
                name.pop();
            }
            else if (name.top() == '{' && s == '}')
            {
                    cout<<"hite me -2"<<endl;
                name.pop();
            }
            else if (name.top() == '[' && s == ']')
            {
                    cout<<"hite me -3"<<endl;
                name.pop();
            }
        }
    }
    cout << name.size();
    return 0;
}