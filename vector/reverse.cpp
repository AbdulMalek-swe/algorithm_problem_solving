#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
     for (auto i = v.begin(); i<=v.end()-1; ++i)
     {
        /* code */
        int index = i - v.begin();
        if(v[index]<0){
            v[index] = 1;
        }
        else if(v[index]>0){
            v[index] = 2;
        }
     }
     for(int c:v){
        cout<<c<<" ";
     }
     
    return 0;
}