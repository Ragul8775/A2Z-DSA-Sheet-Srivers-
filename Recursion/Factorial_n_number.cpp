#include <iostream>
#include <vector>
using namespace std;

void findFactorial(long long n, long long current, long long &factorial, vector<long long> &result)
{
    if (factorial > n)
    {
        return;
    }
    if (factorial <= n)
    {
        result.push_back(factorial);
    }
    factorial *= (current + 1);
    findFactorial(n, current + 1, factorial, result);
}
vector<long long> factorialNumber(long long n)
{
    vector<long long> result;
    long long factorial = 1;

    findFactorial(n, 1, factorial, result);
    return result;
}
int main()
{

    long long n = 100;
    vector<long long> result = factorialNumber(n);
    for (long num : result)
    {
        cout << num << " ";
    }

    /* int n = 7;
    long factorial = 1;
    vector<int> number; */
    /*  for (int i = 1; i <= n; i++)
     {
         factorial = 1;
         for (int j = 1; j <= i; j++)
         {
             factorial *= j;
         }
         if (factorial < n)
         {
             number.push_back(factorial);
         }
     }
     for (int num : number)
     {
         cout << num << " ";
     } */
    return 0;
}