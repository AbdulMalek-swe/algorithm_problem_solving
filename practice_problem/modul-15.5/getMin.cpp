#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> stack;
    stack<int> minStack;

public:
    // Push the given number onto the stack
    void push(int num) {
        stack.push(num);
        if (minStack.empty() || num <= minStack.top()) {
            minStack.push(num);
        }
    }

    // Remove and return the top element from the stack if present, else return -1
    int pop() {
        if (stack.empty()) return -1;
        int topElement = stack.top();
        stack.pop();
        if (topElement == minStack.top()) {
            minStack.pop();
        }
        return topElement;
    }

    // Return the top element of the stack if present, else return -1
    int top() {
        if (stack.empty()) return -1;
        return stack.top();
    }

    // Return the minimum element of the stack if present, else return -1
    int getMin() {
        if (minStack.empty()) return -1;
        return minStack.top();
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        MinStack minStack;
        vector<int> results;

        for (int i = 0; i < n; ++i) {
            int operation;
            cin >> operation;
            if (operation == 1) {
                int num;
                cin >> num;
                minStack.push(num);
            } else if (operation == 2) {
                results.push_back(minStack.pop());
            } else if (operation == 3) {
                results.push_back(minStack.top());
            } else if (operation == 4) {
                results.push_back(minStack.getMin());
            }
        }

        for (int result : results) {
            cout << result << " ";
        }
        cout << endl;
    }

    return 0;
}
