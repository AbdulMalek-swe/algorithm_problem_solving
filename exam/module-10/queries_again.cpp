#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value){
        this->value=value;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
     Node *newNode = new Node(val);
    if (tail == NULL)
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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
     

}
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
    // cout << endl;
}
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
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
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;
     int n ;
     cin>>n;
     while (n--)
     { 
        int val,pos;
        cin>>pos>>val;
        cout<<size(head)<<" -> "<<endl;
        if(size(head)<pos){
          cout<<"Invalid"<<endl;
        }
        else if(size(head)==pos){
            insert_at_tail(head,tail,val);
        }
        else if(pos==0){
            insert_at_head(head,tail,val);
        }
        else{
            insert_at_any_position(head,tail,pos,val);
        }
     }
     print_link_list(head);
     print_link_list_reverse_way(tail);
   
    return 0;
}