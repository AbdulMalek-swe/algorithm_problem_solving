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
void inser_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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
void remove_duplicate(Node *&head)
{
    //   int pos = 2;
    //   Node* tmp = head;
    //   for(int i=1;i<pos;i++){
    //     tmp = tmp->next;
    //   }
    //   Node *deleteNode = tmp->next;
    //   tmp->next = tmp->next->next;
    //   delete deleteNode;
    Node *i = head;
    for (  ;i->next != NULL;)
    {
        Node *dltNode = i;
        while (dltNode->next)
        {
            if (dltNode->next->value == i->value)
            {
                Node *dltNodes = dltNode->next;
                dltNode->next = dltNode->next->next;
                delete dltNodes;
            }
            else
            {
                dltNode = dltNode->next;
            }
        }
         i = i->next;
    }
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            break;
        }
        else
        {
            inser_at_tail(head, num);
        }
    }
    remove_duplicate(head);
    print_all_linked_list(head);
    return 0;
}