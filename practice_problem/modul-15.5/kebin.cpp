#include <bits/stdc++.h> 
using namespace std;

string kevinStackProblem(const string &s)
{
    cout << s;
    stack<char> st;
    for (char b : s) {
        st.push(b);
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    return s; // Returning the original string (can be modified as per your requirements)
}

int main() {
    string str = "welcome";
    kevinStackProblem(str);
    return 0;
}
