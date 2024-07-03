#include <bits/stdc++.h>
#include <climits> 
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node( int value){
        this->value=value;
        this->next=NULL;
    }
};
void insert_in_tail(Node *&head,Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
         tail = newNode;
        return;
    }
     tail->next = newNode;
            tail = newNode;
}
int print_all_linked_list(Node *head)
{
    if(head==NULL){
       
        return 0;
    }
    
     int min = head->value;
    int max = head->value;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(min>tmp->value){
            min=tmp->value;
        }
        if(max<tmp->value){
            max=tmp->value;
        }
        tmp = tmp->next;
    }
 int dif = max-min;
    return dif;
}
 
int main() {
         Node *head = NULL;
         Node *tail = NULL;
          int val;
            cin>>val;
         while(val!=-1){
                insert_in_tail(head,tail,val);
               cin>>val;
         }
      cout<<print_all_linked_list(head);
      
    
    return 0;
}