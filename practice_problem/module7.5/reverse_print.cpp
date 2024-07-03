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
    if(tmp==NULL){
        return;
    }
     print_all_linked_list(tmp->next);
        cout << tmp->value << " ";
    cout << endl;
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
    // remove_duplicate(head);
    print_all_linked_list(head);
    return 0;
}