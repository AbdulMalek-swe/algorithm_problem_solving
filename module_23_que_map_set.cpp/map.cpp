#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int>identity;
    identity["malek"];
    identity["malekss"] = 21;
    identity["maleks"] = 21;
    identity.insert({"aziz",66});
    for (auto obj:identity)
    {
        cout<<obj.first<<" "<<obj.second<<endl;
        // if(obj.first)
        /* code */
    }
    
    return 0;
}