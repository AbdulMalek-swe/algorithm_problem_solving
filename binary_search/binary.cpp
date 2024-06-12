#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num, b;
     cin >> num >> b;
    long long int number[num];
   
    for (int i = 0; i < num; i++)
    {
        cin >> number[i];
    }
    sort(number,number+num);
    long long int mid;
    long long int targetNumber;
    while (b--)
    {
        cin >> targetNumber;
        int flag = 0;
        long long int left = 0, right = num - 1;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (number[mid] == targetNumber)
            {
                flag = 1;
                break;
            }
            else if (number[mid] < targetNumber)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (flag == 1)
        {
            cout << "found"<<endl;
        }
        else
        {
            cout << "not found"<<endl;
        }
    }

    return 0;
}