#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
 
int main() {
     list<int>myList;
    while (1 )
    { 
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        myList.push_back(val);
    }
     myList.sort();
     myList.unique();
     for (auto  v:myList)
     {
        cout<<v<<" ";
     }
     
    return 0;
}