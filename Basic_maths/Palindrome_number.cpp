#include <iostream>

using namespace std;

void checkPalindrome(int n)
{
    int rev;
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        rev = n % 10;
        sum = sum * 10 + rev;
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
int main()
{
    int n;
    cin >> n;
    checkPalindrome(n);
    return 0;
}
