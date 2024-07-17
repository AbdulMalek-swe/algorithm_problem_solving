#include <bits/stdc++.h>
using namespace std;

int main() {
     queue<int>q;
     stack<int>s;
     int n,n1;
     cin>>n>>n1;
     int x,y;
     for (int i = 0; i < n; i++)
     {
        cin>>x;
         s.push(x);
     }
     for (int i = 0; i < n1; i++)
     {
        cin>>y;
         q.push(y);
     }
     
     if(n!=n1){
        cout<<"NO\n";
     }else{
        int flag = 0;
        while (!s.empty())
        {
            if(s.top()==q.front()){
                flag = 1;
                s.pop();
                q.pop();
            }else{
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
     }
    return 0;
}