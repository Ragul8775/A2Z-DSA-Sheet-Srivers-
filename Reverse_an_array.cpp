#include <vector>
#include <iostream>
using namespace std;

// Helper function for recursion
void reverseHelper(int start, int end, vector<int> &nums)
{
    if (start >= end)
    {
        return; // Base case: If start index is greater or equal to end index
    }
    // Swap the elements at start and end
    swap(nums[start], nums[end]);
    // Recursive call with updated indices
    reverseHelper(start + 1, end - 1, nums);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    reverseHelper(0, n - 1, nums); // Call the helper function
    return nums;                   // Return the modified vector
}

int main()
{
    // Initialize a vector with some numbers
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size(); // Size of the vector

    // Call reverseArray to reverse the vector
    reverseArray(n, nums);

    // Print the reversed vector
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}