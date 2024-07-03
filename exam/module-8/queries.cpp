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
// head insert declare code here
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
// taile insert declare code here
void insert_tail(Node *&head, int val)
{
     Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
//now we delete head vth position
void delete_head_from_list(Node *&head){
     if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head=head->next;
    delete deleteNode;
}
// now we delete the vth position 
void  delete_value_from_list(Node *&head,int pos){
  if (head == NULL || pos < 0) {
        return;
    }
 if (pos == 0) {
        delete_head_from_list(head);
        return;
    }
    Node *tmp = head;
    for (int i = 1; i <= pos - 1 && tmp!=NULL; ++i)
    {
        tmp = tmp->next;
        
    }
if (tmp == NULL || tmp->next == NULL) {
        return;  
    }
    if (tmp->next == NULL)
    {
       
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_head(head, val);
        }
        else if (pos == 1)
        {
            insert_tail(head, val);
        }
        else if(pos==2){
            if(val==0){
                delete_head_from_list(head);
            }else{
                 delete_value_from_list(head,val);
            }
            
        }
        print_all_linked_list(head);
    }

    return 0;
}