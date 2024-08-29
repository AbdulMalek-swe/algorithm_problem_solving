#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin>>n;
      map<string,int>count;
      for (int i = 0; i < n; i++)
      {
        string name;
        cin>>name;
        if(count[name]==0) cout<<"ok";
        else cout<<name<<count[name]<<endl;
        count[name] = count[name]+1;
        /* code */
      }
      

    return 0;
}