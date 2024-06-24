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
int main()
{
  Node a(289),b(12),c(33);
   
  a.next = &b;
  b.next=&c;
  cout<<a.value<<endl<<a.next->value<<endl<<a.next->next->value;
    return 0;
}