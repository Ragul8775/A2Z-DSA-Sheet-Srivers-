#include <iostream>
using namespace std;

/* int sumofDivisor(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {

        int sum = 0;

        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
            {
                sum += j;
            }
        }
        total += sum;
    }
    return total;
} */
int sumofDivisor(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        // Add i itself only once if it's a perfect square
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j * j == i)
                {
                    total += j;
                }
                else
                {
                    total += j + i / j;
                }
            }
        }
    }
    return total;
}
int main()
{
    int n;
    cin >> n;
    cout << sumofDivisor(n);
    return 0;
}