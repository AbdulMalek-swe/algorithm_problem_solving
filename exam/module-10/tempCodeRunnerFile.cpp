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
void update_cur(Node *&current,string num){
    
    while (current->value!=num)
    {
        current=current->prev;
    }
    cout<<current->value;
    
}
 void print_prev(Node *&current){
     if(current && current->prev){
       
        current=current->prev;
         cout<<current->value;
     }else{
        cout<<"Not Available";
     }
      cout<<"endl";
 }
 void print_next(Node *&current){
     if(current && current->next){
        current=current->next;
         cout<<current->value;
     }else{
        cout<<"Not Available";
     }
     cout<<"endl";
 }
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string num;
   
     while (true)
     {
        /* code */
        cin>>num;
        if(num=="end"){
            break;
        }
         insert_at_tail(head, tail, num);
     }
     Node *current = tail;
     int n;
     cin>>n;
     cin.ignore();
     string str;
     while (n--)
     {
       
         getline(cin,str);
         string word = str.substr(6);
         if(str.substr(0,5)=="visit"){
            update_cur(current,word);
         }
     }
  
    return 0;
}