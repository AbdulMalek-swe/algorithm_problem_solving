#include <bits/stdc++.h>
using namespace std;
class Frequency
{
public:
    int count;
    char ch;
};
bool cmp(Frequency a, Frequency b)
{
    if (a.count == b.count)
    {
        return a.ch < b.ch;
    }
    else
        return a.count > b.count;
}
int main()
{
    string s;
    cin >> s;
    Frequency freq[100];
    for (int i = 0; i < 26; i++)
    {
        freq[i].ch = char(i + 'a');
        freq[i].count = 0;
    }
    for (char c : s)
    {
        int ascci = int(c - 'a');
        freq[ascci].count++;
    }
    sort(freq, freq + 24, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (freq[i].count != 0)
        {
            for (int j = 0; j < freq[i].count; j++)
            {
                cout << freq[i].ch;
            }
        }
    }
    return 0;
}