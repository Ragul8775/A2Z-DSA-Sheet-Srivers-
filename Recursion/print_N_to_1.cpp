#include <iostream>
#include <vector>
using namespace std;

void fillNto1(vector<int> &num, int n)
{
    if (n <= 0)
    {
        return;
    }
    num.push_back(n);
    fillNto1(num, n - 1);
}
vector<int> printNto1(int x)
{
    vector<int> number;
    fillNto1(number, x);
    return number;
}
int main()
{
    int n = 5;
    vector<int> num = printNto1(n);
    for (int number : num)
    {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}
