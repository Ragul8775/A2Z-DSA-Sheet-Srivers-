#include <iostream>
using namespace std;

long long sumofN(long long n)
{

    if (n <= 0)
    {
        return 0;
    }
    return n + sumofN(n - 1);
}
int main()
{
    int n = 5;
    cout << "Sum of first " << n << " natural numbers is: " << sumofN(n) << endl;
    return 0;
}