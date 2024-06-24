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
     pre[i] = pre[i-1]+v[i];       
    }
   
    int left = 0;
    int right = n1;
    int mid;
     mid = (left + right) / 2;
      while (1)
        {
             if(pre[mid-1]==(pre[n1-1]-pre[mid])){
                cout<<"yes ";
                break;
             }
            else if (pre[mid-1]<(pre[n1-1]-pre[mid]))
            {
                mid++;
            }
            else
            {
                mid--;
            }
        }
        cout<<mid;
   return 0;
}



 