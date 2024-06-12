#include <bits/stdc++.h>
using namespace std;

int main() { 
  long long  int n1,n2;
    cin>>n1>>n2;
    long long v[n1];
    for(  int i=0;i<n1;i++){
        cin>>v[i];
    }
    long long int pre[n1];
    pre[0]=v[0];
    for (int i = 1; i < n1; i++)
    {
      pre[i] = v[i]+pre[i-1];
      // cout<<pre[i]<<" =>sum";
      /* code */
    }
    
    while(n2--){
      long long int a,b;
      long long int sum = 0;
      cin>>a>>b;
      if(a==1){
        cout<<pre[--b]<<endl;
      }else{
        --a;
       sum = pre[--b]-pre[--a];
       cout<<sum<<"\n";
      }
      
      
    }
    return 0;
}

 