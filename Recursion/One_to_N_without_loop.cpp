#include <iostream>
#include <vector>
using namespace std;

// Helper function to fill numbers into vector
void fillNos(vector<int> &vec, unsigned int n)
{
    if (n <= 0)
        return;          // Base case: if n is 0, stop the recursion
    fillNos(vec, n - 1); // Recursively fill numbers up to n-1
    vec.push_back(n);    // Add current number to the vector
}

// Function that initializes the vector and calls the helper function
vector<int> printNos(int x)
{
    vector<int> numbers; // Vector to store numbers
    fillNos(numbers, x); // Fill the vector with numbers from 1 to n
    return numbers;      // Return the filled vector
}

// Driver code
int main()
{
    unsigned int n = 10;
    vector<int> numbers = printNos(n); // Get numbers in a vector

    // Print the numbers stored in the vector
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
