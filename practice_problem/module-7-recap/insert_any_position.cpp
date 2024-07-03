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
void inser_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void insert_at_any_position(Node *&head,int pos,int val){
    Node *tmp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
     newNode->next=tmp->next;
     tmp->next=newNode;

    
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
    int count=0;
    while (tmp != NULL)
    { 
        count++;
        tmp = tmp->next;
    }
     return count;
}
int main() {
    Node *head = NULL;
    for(int i=1;i<=5;i++){
        inser_at_tail(head,i*10);
    }
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"invalid ";
    }
   else if(pos>=1){
    insert_at_any_position(head,pos,val);
    }

    
    print_all_linked_list(head);
    return 0;
}