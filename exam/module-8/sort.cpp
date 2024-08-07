#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_from_node(Node *head)
{
    Node *tmp = head;
    while(tmp){
        Node *saveNode = tmp;
        while(saveNode->next){
            if(saveNode->next->val==tmp->val){
                Node *dlt = saveNode->next;
                saveNode->next = saveNode->next->next;
                delete dlt;
            }else{
                saveNode=saveNode->next;
            }
        }
        tmp=tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
     
    delete_from_node(head);
    print_linekd_list(head);
    return 0;
}