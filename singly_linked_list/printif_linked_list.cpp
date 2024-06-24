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
int main()
{
    Node *head = new Node(12);
    Node *head1 = new Node(123);
    Node *head2 = new Node(1);
    Node *head3 = new Node(17);
    Node *head4 = new Node(99);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << "\n";
        tmp = tmp->next;
    }
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << "\n";
        tmp = tmp->next;
    }
    return 0;
}