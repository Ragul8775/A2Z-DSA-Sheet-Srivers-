#include <iostream>
#include <vector>
using namespace std;

// Function to generate the nth Fibonacci number
int fibonacci(int n, vector<int> &memo)
{
    // Base cases
    if (n <= 1)
        return n;

    // Check if the value has already been calculated
    if (memo[n] != -1)
        return memo[n];

    // Recursively calculate the value
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

// Function to generate the first n Fibonacci numbers
vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fibNumbers(n);
    vector<int> memo(n + 1, -1); // Create a memoization vector and initialize with -1

    // Fill the fibNumbers vector with the first n Fibonacci numbers
    for (int i = 0; i < n; ++i)
    {
        fibNumbers[i] = fibonacci(i, memo);
    }

    return fibNumbers;
}

int main()
{
    int n = 5;

    vector<int> number = generateFibonacciNumbers(n);
    for (int num : number)
    {
        cout << num << endl;
    }

    return 0;
}
