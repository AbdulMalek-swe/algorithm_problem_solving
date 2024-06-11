#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    vector<int>n;
    for (int i = 0; i < num; i++)
    {
        n.push_back(i+1);
    }
     for (int i = 0; i < num; i++)
    {
       cout<<n[i]<<" ";
    }
    
    
    return 0;
}