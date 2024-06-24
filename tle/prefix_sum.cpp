#include <bits/stdc++.h>
using namespace std;

int main() { 
  long long  int n1,n2;
    cin>>n1;
    long long int v[n1];
    for(  int i=0;i<n1;i++){
        cin>>v[i];
    }
    long long int pre[n1];
    pre[0]=v[0];
    for (int i = 1; i < n1; i++)
    {
      pre[i] = v[i]+pre[i-1];
       
    }
     for (int i = 0; i < n1; i++)
    {
      cout<<pre[i]<<" ";
       
    }
    
   return 0;
}

 