#include <iostream>
#include <vector>
using namespace std;
vector<string> printNTimes(int n)
{
    vector<string> names;
    if (n < 1)
    {
        return names;
    }
    names = printNTimes(n - 1);
    names.push_back("Coding Ninjas");
    return names;
}
int main()
{
    int n = 5;
    vector<string> v = printNTimes(5);
    for (const string &num : v)
    {
        cout << num << " ";
    }
    return 0;
}