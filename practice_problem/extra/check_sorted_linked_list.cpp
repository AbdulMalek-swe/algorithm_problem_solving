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
        /* code */
    }
    tmp->next = newNode;
}
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << "My linked list :- ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
        /* code */
    }
    cout << endl
         << endl;
}
int check_sorting(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->value <= tmp->next->value)
        {
        }
        else
        {
            return 0;
        }
        tmp = tmp->next;
    }
    return 1;
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
    print_link_list(head);
    int isSort = check_sorting(head);
    if (isSort)
    {
        cout << "Yes this is sorting order";
    }
    else
    {
        cout << "No this is not sorting order";
    }
    return 0;
}