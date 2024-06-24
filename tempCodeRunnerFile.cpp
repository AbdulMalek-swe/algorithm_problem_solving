#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char c = '/';
    char d = '\\';
    int f;
    //  cin>>f;
     int n = 5/2+1;
    for (i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << d;
            }
        
        }
        for (int j = n-i+1; j >1; j--)
        {
            cout << " ";
        }
         for (int j = 0; j < n; j++)
        {
           
         if (j == n - i - 1)
            {
                cout << c;
            }
        }
        
        cout << endl;
    }
    for (i = 0; i < 1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cout << " ";
        }
            cout<<" X";
        cout << endl;
    }
    
 for (i = 0; i < n; i++)
    {
        for (int k = n-i; k >1 ; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
           if (j == n - i - 1)
            {
                cout << c;
            }
        
        }
         for (int j = 0; j < i; j++)
        {
            cout << " "<<" ";
        }
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << d;
            }
        
        }
     cout << endl;
    }

    return 0;
}