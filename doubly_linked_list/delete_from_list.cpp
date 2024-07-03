#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }  
    newNode->next=head;
    head->prev=newNode;
    head=head->prev;

}
// inser linked list
void insert_at_any_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    for(int i=1;i<pos;i++){
        tmp=tmp->next;
    }
     newNode->next=tmp->next;
     tmp->next=newNode;
     newNode->next->prev=newNode;
     newNode->prev=tmp;
}
//delete list from list
void delete_from_list(Node *&head,int pos){
     Node *tmp = head;
   for(int i=1;i<pos;i++){
        tmp=tmp->next;
    }
     Node *deleteNode = tmp->next;
     tmp->next=tmp->next->next;
     tmp->next->prev=tmp;
     delete deleteNode;
}
void delete_from_tail(Node *&tail){
    Node *deleteNode = tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
}
void delete_from_head(Node *&head){
    if(  head==NULL){
        head = NULL;
        cout<<"yes you delete head";
        return;
    }
   else  if(head->next==NULL  ){
        head = NULL;
        cout<<"yes you delete head";
        return;
    }
    Node *deleteNode = head;
    
    head=head->next;
    delete deleteNode;
    head->prev=NULL;
}
// print code
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << "print linked list ->";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_link_list_reverse_way(Node *tail)
{
    Node *tmp = tail;
    cout << "print linked list reverse way ->";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < 0; i++)
    {
        insert_at_tail(head, tail, i * 10);
    }
delete_from_head(head);
    while (true)
    {
        int pos, val ;
        
        cout << endl
             << "enter position -> ";
        cin >> pos;
        cout << endl
             << "enter value ->";
        cin >> val;
        if (pos == -1)
        {
            break;
        }
        else if (pos == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if(pos==2){
            delete_from_tail(tail);
        }
        else{
          delete_from_list(head,pos);
        }
         
    }
    print_link_list(head);
    print_link_list_reverse_way(tail);
    return 0;
}