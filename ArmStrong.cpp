#include <iostream>
#include <cmath>
using namespace std;
bool armstrong(int n)
{
    int count = log10(n) + 1;

    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int rev = n % 10;
        sum = (sum + pow(rev, count));
        n = n / 10;
    }
    return (temp == sum);
}
int main()
{
    int n;
    cin >> n;

    armstrong(n);
    return 0;
}