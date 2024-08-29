#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    
     set<int>min_element;
    while (n--)
    {
        int f;
        cin>>f;
        min_element.insert(f);

        /* code */
    }
    auto it = min_element.begin();
    it++;
    if(it!=min_element.end()){
cout<< *it<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}