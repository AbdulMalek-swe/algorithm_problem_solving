#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next;
    Node *prev;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
// insert at tail
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << "print linked list ->";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void update_cur(Node *&current, Node *&tail, string num)
{
  Node *tmp = tail;
    while ( tmp!=NULL && tmp->value != num)
    {
        
        tmp = tmp->prev;
    }
    if ( tmp!=NULL  && tmp->value == num)
    {
        current = tmp;
        cout << tmp->value;
    }
    else
    {
        cout << "Not Available";
    }

    cout << endl;
}
void print_prev(Node *&current)
{
    if (current && current->prev)
    {

        current = current->prev;
        cout << current->value;
    }
    else
    {
        cout << "Not Available";
    }
    cout << endl;
}
void print_next(Node *&current)
{
    if (current && current->next)
    {
        current = current->next;
        cout << current->value;
    }
    else
    {
        cout << "Not Available";
    }
    cout << endl;
}
 
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string num;

    while (true)
    {
        /* code */
        cin >> num;
        if (num == "end")
        {
            break;
        }
        insert_at_tail(head, tail, num);
    }
    Node *current;
    int n;
    cin >> n;
    cin.ignore();
    string str;
    while (n--)
    {

        getline(cin, str);

        if (str.substr(0, 5) == "visit")
        {
            string word = str.substr(6);

            update_cur(current, tail, word);
        }
        else if (str == "prev")
        {
            print_prev(current);
        }
        else if (str == "next")
        {
            print_next(current);
        }
    }

    return 0;
}