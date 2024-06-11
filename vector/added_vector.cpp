#include <bits/stdc++.h>
using namespace std;

int main() { 
    vector<int>v;
    vector<int>v1;
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        v.push_back(x[i]);
    }
     for(int i=0;i<n;i++){
        cin>>x[i];
        v1.push_back(x[i]);
    }
    v1.insert(v1.end(),v.begin(),v.end());
    for (int x:v1)
    {
        cout<<x<<" ";
        /* code */
    }
    
    return 0;
}