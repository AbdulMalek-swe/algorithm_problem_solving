#include <bits/stdc++.h>
using namespace std;

int main() {
     queue<string>q;
     int n ;
     cin>>n;
     string x;
     for (int i = 0; i < n; i++)
     {
        int v;
        cin>>v;
        if(v==0){
          cin>>x;
          s.push(x);
        }else{
            if(q.empty()){
                cout<<"Invalid";
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        
     }
     
      
    return 0;
}