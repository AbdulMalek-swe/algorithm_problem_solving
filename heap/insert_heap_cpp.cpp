#include <bits/stdc++.h>
using namespace std;

int main() {
     vector<int>v={50,45,40,35,30,25,20,15};
     int x;cin>>x;
     v.push_back(x);
     int crn_idx=v.size()-1;
     while (crn_idx!=0)
     {
        int prnt_idx = (crn_idx-1)/2;
        if(v[crn_idx]>v[prnt_idx]) swap(v[crn_idx],v[prnt_idx]);
        else break;
        crn_idx=prnt_idx;
        /* code */
     }
     for(int val:v) cout<<val<<" ";
     
    return 0;
}