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
// insert linked list
void insert_at_any_position(Node *head, int pos, int value)
{

    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "invalid" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
// added head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "inserted at head " << endl
         << endl;
}
// print linked list
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << "My linked list :- ";
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
    int n;
    cin >> n;
    while (n--)
    {
        int pos, value;
        cin >> pos >> value;
        if (pos == 0)
        {
            insert_at_head(head, value);
        }
        else
        {
            insert_at_any_position(head, pos, value);
        }

        print_link_list(head);
    }

    return 0;
}