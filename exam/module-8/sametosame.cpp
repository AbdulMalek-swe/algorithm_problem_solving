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
void insert_in_tail(Node *&head,int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next!=NULL)
    {
         tmp = tmp->next;
    }
    tmp->next=newNode;
}
int get_count(Node *head)
{
    Node *tmp = head;
    // cout << "My linked list :- ";
    int count = 0;
    while (tmp != NULL)
    { 
         
        tmp=tmp->next;
        count++;
    }
   return count;
}
bool  print_all_linked_lists(Node* head2,Node* head1)
{
    Node *tmp = head2;
    Node *tm = head1;
    while (tmp != NULL && tm!=NULL)
    { 
        if(tmp->value!=tm->value){
            // break;
            cout<<"NO";
            return 0;
        }
        tmp = tmp->next;
        tm =tm->next;
    }
    cout << "YES";
    return true;
}
int main() {
    Node * head2 = NULL;
    Node* head1 = NULL;
    int c1,c2;
    while (1)
    {
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        insert_in_tail(head2,val);
       
        /* code */
    }
     while (1)
    {
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        insert_in_tail(head1,val);
     
        /* code */
    }
     c1 = get_count(head2);
          c2 = get_count(head1);
    cout<<c1<<" "<<c2<<" ";
    if(c1!=c2){
        cout<<"NO";
    }else{
       print_all_linked_lists(head2, head1);
      
    }
    return 0;
}