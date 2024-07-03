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
// insert value in linkedlist
void insert_value_in_linked_list(Node *&head, int value)
{
    // we use here pass by reference method
    Node *newNode = new Node(value);
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
 
// print linked list
// pass by vlaue here 
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << "My linked list :- ";
    int count[100]={0};
    while (tmp != NULL)
    {
        // cout << tmp->value << " ";
        count[tmp->value]++;
        tmp = tmp->next;
    }
    for(int i=0;i<100;i++){
        if(count[i]>1){
            cout<<"doub is ok done for";
            cout << endl
         << endl;
            return ;
        }
       
    }
    
}
// get count linked list 
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
void find_middle(Node * head,int count){
    Node *tmp = head;
   if(count%2==1){
      for(int i=1;i<count/2+1;i++){
          tmp = tmp->next;
      }
      cout<<tmp->value<<"\n";
   }else{
      for(int i=1;i<count/2;i++){
          tmp = tmp->next;
      }
      cout<<tmp->value<<" "<<tmp->next->value<<" "<<endl;
   }
}
int main()
{
    int value;
    Node *head = NULL;
    while (1)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_value_in_linked_list(head, value);
    }
    int count_value = get_count(head);
        find_middle(head,count_value);
        print_link_list(head);
     
    return 0;
}