#include <iostream>
using namespace std;

// Helper function for the actual recursive checks
bool isPalindromeHelper(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return isPalindromeHelper(str, start + 1, end - 1);
}

// Wrapper function that the user calls
bool isPalindrome(string &str)
{
    return isPalindromeHelper(str, 0, str.length() - 1);
}

int main()
{
    string str;
    cin >> str;
    if (isPalindrome(str))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
