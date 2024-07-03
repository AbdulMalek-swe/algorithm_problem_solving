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
void insert_at_tail(Node *&head, int value)
{
    cout<<endl;
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
         cout<<"head inserted successfully"<<endl<<endl;
        return;
    }
     Node *tmp = head;
    while (tmp->next!=NULL)
    {
        tmp  =tmp->next;
    }
    tmp->next=newNode;
    cout<<"tail inserted successfully"<<endl<<endl;
    
}
// insert any position 
void inserted_at_position(Node *head,int pos,int value){
     Node* newNode = new Node(value);
     Node *tmp = head;
     for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
     }
      newNode->next=tmp->next;
          tmp->next = newNode;
           
     cout<<"successfully inserted position "<<pos<<endl;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "printed linked list :- "<<endl;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int op;
        cout << "click 1 to insert value - "<<endl;
        cout << "click 2 to print value - "<<endl;
        cout << "click 3 to insert value in position - "<<endl;
        cout << "click 4 terminated - "<<endl;
        cin >> op;
        if (op == 1)
        {
            int value;
            cout << "insert number in link list - ";
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op==3){
            int value,pos;
            cout<<"Inser position :-";
            cin>>pos;
            cout<<"Insert value in position :-";
            cin>>value;
            inserted_at_position(head,pos,value);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}