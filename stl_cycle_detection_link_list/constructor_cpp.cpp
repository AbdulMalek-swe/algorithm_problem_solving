#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> list1 = {1,2,3};
   list<int> my_list(list1);
   my_list.push_front(123);
//    loop for list 
  for(auto it = my_list.begin();it!=my_list.end();it++){
    cout<<*it<< " ";
  }
//    print frontend 
//    cout<<my_list.front();
//    size decalre 
//    cout<<my_list.size();
   
    return 0;
}