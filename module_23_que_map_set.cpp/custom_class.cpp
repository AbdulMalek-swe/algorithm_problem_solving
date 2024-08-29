#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int roll;
  int mark;
  
  string name;
  Student( string name ,int id,int mark){
    this->roll=id;
    this->mark=mark;
    this->name=name;
  }
};
class cmp
{
 
public:
     bool operator()(Student a,Student b){
         return a.mark>=b.mark?true:false;
     }
};

 

int main() {
    int n;cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++){
        int mark,roll;
        string name;
        cin>>name>>roll>>mark;
        Student obj(name,roll,mark);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout<<pq.top().mark<<" "<<endl;
        pq.pop();  
    }
    
   
    return 0;
}