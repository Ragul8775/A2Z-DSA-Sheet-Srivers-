#include <iostream>
using namespace std;
int main()
{
    int n; /* total number of element in the array */
    cin >> n;
    int arr[n]; /* create an array with given size n*/
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // lets precompute the array to hash to increase the count and save the value
    int hash[13] = {0}; // initialy the zero denotes the value of each value in array
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cin >> q; // input the query
    while (q--)
    {
        int numbers;
        cin >> numbers;
        // fetch the number from hash
        cout << hash[numbers] << endl;
    }
    return 0;
}

// to find the number of time the aumber appears in the array