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
    cout << endl;
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        cout << "head inserted successfully" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "tail inserted successfully" << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "inserted at head " << endl
         << endl;
}
void inserted_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout << endl
                 << "position is not available" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "successfully inserted position " << pos << endl;
}
// delete from node
void delete_from_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "successfully delete the value in linke list" << endl
         << endl;
}
// delete head from linked list
void delete_head_from_list(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "head is not deleted" << endl
             << endl;
        return;
    }
    Node *delteHead = head;
    // Node* deleteHead = tmp;
    head = head->next;
    delete delteHead;
    cout << "successfully delete the head" << endl;
}
// print link list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "printed linked list :- ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        int op;
        cout << "Option 1: Insert at Tail" << endl;         // done
        cout << "Option 2: Print Linked List" << endl;      // done
        cout << "Option 3: Insert at any Position" << endl; // done
        cout << "Option 4: Insert at Head" << endl;         // done
        cout << "Option 5: Delete from Position" << endl;   // done
        cout << "Option 6: Delete head" << endl;            // done
        cout << "Option 7: Terminate" << endl;
        cout << "now select your choose option:-";
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
            int value, pos;
            cout << "Inser position :-";
            cin >> pos;
            cout << "Insert value in position :-";
            cin >> value;
            if (pos == 0)
            {
                insert_at_head(head, value);
            }
            else
            {
                inserted_at_position(head, pos, value);
            }
        }
        else if (op == 4)
        {
            int value;
            cout << "insert head value:-";
            cin >> value;
            insert_at_head(head, value);
        }
        else if (op == 5)
        {
            int pos;
            cout << "delete value from node position:-";
            cin >> pos;
            if (pos == 0)
            {
                delete_head_from_list(head);
            }
            else
            {
                delete_from_node(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head_from_list(head);
        }
        else if (op == 7)
        {
            cout << "terminate successfully" << endl;
            break;
        }
    }

    return 0;
}