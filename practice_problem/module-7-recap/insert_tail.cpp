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
void insert_at_tail(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL&&tail==NULL){
        head= newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    // tmp->next = newNode;
}
void insert_at_any_position(Node *&head, int pos, int val)
{
    Node *tmp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head(Node *&head, int val)
{ 
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print_all_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int num;
     
       while (1)
       {
        cin>>num;
        insert_at_tail(head, tail,num);
        /* code */
        
    print_all_linked_list(head);
       }
       
    
    while (true)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == -1)
        {
            break;
        }
        if (pos > size(head))
        {
            cout << "invalid ";
        }
        else if (pos == 0)
        {
            // insert_head(head, val);
        }
        else if (pos >= 1)
        {
            // insert_at_any_position(head, pos, val);
        }

        print_all_linked_list(head);
    }

    return 0;
}