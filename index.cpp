#include <bits/stdc++.h>
using namespace std;
// class Frequency
// {
// public:
//     int count;
//     char ch;
// };
 
int main(){
string s;
 string x;
 getline(cin,s);
 cin>>x;
 int c = 0;
 cout<<s.find(x);
 while(s.find(x)!=-1){
    
        c++;
    
 }
 cout<<c;


// {
//     string s;
//     int n;
//     cin>>n;
//     int b;
//     while (n--)
//     {
//         cin>>b;
//         cin >> s;
//     Frequency freq[100];
//     for (int i = 0; i < 26; i++)
//     {
//         freq[i].ch = char(i + 'A');
//         freq[i].count = 0;
//     }
//     for (char c : s)
//     {
//         int ascci = int(c - 'A');
//         freq[ascci].count++;
//     }
//     int c = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i].count != 0)
//         {
//              if(freq[i].count==1){
//                 c+=2;
//              }
//              else if(freq[i].count>1){
//                 c+=freq[i].count+1;
//              }
//         }
//     }
//     cout<<c<<endl;
//     }
    
   
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
    
//  int n;
//  cin>>n;
//     while(n--){
//        cin>>s;
//        int sum=0,sum1=0;
//        sum+=s[0]-'0'+s[1]-'0'+s[2]-'0';
//        sum1+=s[3]-'0'+s[4]-'0'+s[5]-'0';
//        if(sum==sum1){
//         cout<<"YES";
//        }else{
//         cout<<"NO";
//        }
//        cout<<endl;
//     }
   
//     while (ss >> b)
//     {
       
//         if (b.length())
//         {
//             for (int i = b.length() - 1; i >= 0; i--)
//             {
//                 cout << b[i];
//             }
//             cout << " ";
//         }
//     }
  
    return 0;
}