#include <bits/stdc++.h>
using namespace std;

int main() {
    list<long long int> myList;
    int n;
    cin>>n;
    while (n--)
    {
        long long int pos,val;
        cin>>pos>>val;
         if(pos==0){
            myList.push_front(val);
        }else if(pos==1){
            myList.push_back(val);
        }
        else if(pos==2){
            if(val==0){
               if(!myList.empty()){
                 myList.pop_front();
               }
            }
            else if(myList.size()>val){
                myList.erase(next(myList.begin(),val));
            }
        }
        cout << "L -> ";
        for (long long int val : myList)
    {
        cout  <<val<<" " ;
    }
        cout<<endl;
      myList.reverse();
        cout << "R -> ";
    for (long long int val : myList)
    {
        cout   <<val <<" ";
    }
         myList.reverse();
        cout<<endl;
    }
     
    
    
    return 0;
}