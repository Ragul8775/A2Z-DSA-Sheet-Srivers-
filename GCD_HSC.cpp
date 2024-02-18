#include <iostream>
using namespace std;
int calcGcd(int n, int m)
{
    int ans;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;

    cout << calcGcd(n, m);
}