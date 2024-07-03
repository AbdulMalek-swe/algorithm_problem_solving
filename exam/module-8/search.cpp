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
void insert_in_tail(Node *&head,Node *tail,int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
   tail->next = newNode;
            tail = newNode;
}
 
int  find_index(Node *head,int val ){
     Node *tmp = head;
     int count = 0;
     while (tmp!=NULL)
     {
        if(tmp->value==val){
          return count;
        }
        tmp = tmp->next;
        count++;
        /* code */
     }
      
      return -1;
}
void delete_head(Node *&head){
     Node *tmp = head;
     while (tmp!=NULL)
     {
        Node* tm = tmp->next;
        delete tmp;
        tmp = tm;
        /* code */
     }
     
}
int main() {
   
    int n;
    cin>>n;
    while (n--)
    {
         Node *head = NULL;
         Node *tail = NULL;
         while(1){
         int val;
            cin>>val;
            if(val==-1){
                break;
            }else{
                insert_in_tail(head,tail, val);
            }
         }
         int target;
         cin>>target;
     
       int c_value =  find_index(head,target );
       cout<<c_value<<" ";
    delete_head(head);

    }
    
    return 0;
}