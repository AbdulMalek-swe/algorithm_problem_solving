#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string st;
 
    while (n--)
    {
           stack<char> s;
        cin >> st;
        for (char c : st)
        { 
           
            if (s.empty())
            {
                s.push(c);
               
            }
            else
            {
             
                if (c =='1' && s.top() == '0' )
                {

                    s.pop();
              
                     
                }
                else if (c == '0' && s.top() == '1')
                {
                    s.pop();
                }
                else
                {
                    s.push(c);
                }
                    
            }
        }
        // cout << s.empty();
        if (!s.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}