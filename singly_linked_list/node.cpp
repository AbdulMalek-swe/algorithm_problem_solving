#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};
int main()
{
  Node a,b;
  a.value = 12;
  b.value = 123;
  b.next = NULL;
  a.next = &b;
  cout<<a.value<<endl<<a.next->value;
    return 0;
}