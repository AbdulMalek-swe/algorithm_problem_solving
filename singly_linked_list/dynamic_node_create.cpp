#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(32);
    Node* newNode = new Node(45);
    head->next = newNode;
    cout<<head->value;
    // cout<<(*(*head).next).value; we not use it becuase it face lot of proble and critical to memorize it 
    return 0;
}