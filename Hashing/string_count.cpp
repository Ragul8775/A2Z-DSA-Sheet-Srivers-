#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void calculateString(string s, int q)
{
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
}
int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    calculateString(s, q);

    return 0;
}