#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    int number;
    cin>>number;
    for (int i = 0; i < number; i++)
    {
        int x;
        cin>>x;
         v.push_back(x);
    }
     int target_value;
     cin>>target_value;
    int replace_value;
    cin>>replace_value;
    replace(v.begin(),v.end(),target_value,replace_value);
    for (int value:v)
    {
        /* code */
        cout<<value<<" ";
    }
   
    int match_value;
    cin>>match_value;
    auto it = find(v.begin(),v.end(),match_value);
    if(it==v.end()){
        cout<<"Not Found";
    }else{
        int index =  distance(v.begin(), it);
        cout << "Match found at index: " << index;
    }
    return 0;
}