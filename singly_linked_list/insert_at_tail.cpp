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
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
     Node *tmp = head;
    while (tmp->next!=NULL)
    {
        tmp  =tmp->next;

        /* code */
    }
    tmp->next=newNode;
    
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
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int op;
        cout << "click 1 to insert value - "<<endl;
        cout << "click 2 to print value - "<<endl;
        cout << "click 3 to stop insert in linked list value - "<<endl;
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
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}