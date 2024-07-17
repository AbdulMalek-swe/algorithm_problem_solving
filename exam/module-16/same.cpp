#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myStack
{
public:
     Node *head = NULL;
     Node *tail = NULL;
     int sz = 0;
    void push(int val)
    {
    //    insert_at_tail(head,tail,val); 
    sz++;
      Node *newNode = new Node(val);
      if(head==NULL && tail ==NULL){
        head =newNode;
        tail=newNode;
        return;
      }
       tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
    }
    void pop()
    {
        sz--;
       Node *deleteNode = tail;
    tail=tail->prev;
    if(tail==NULL) head = NULL;
    return;
    delete deleteNode;
    tail->next=NULL;
    }
    int top()
    {
        return tail->value;
    }
    
    bool empty()
    {
        if (sz== 0)
            return true;
        else
            return false;
    }
};
 
int main()
{
    myQueue q;
    myStack s;
    int n,n1;
     cin>>n>>n1;
     int x,y;
     for (int i = 0; i < n; i++)
     {
        cin>>x;
         s.push(x);
     }
     for (int i = 0; i < n1; i++)
     {
        cin>>y;
         q.push(y);
     }
     
     if(n!=n1){
        cout<<"NO\n";
     }else{
        int flag = 0;
        while (!s.empty())
        {
            if(s.top()==q.front()){
                flag = 1;
                s.pop();
                q.pop();
            }else{
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
     }
    return 0;
}