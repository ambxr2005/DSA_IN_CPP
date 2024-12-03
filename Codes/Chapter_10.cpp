#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
        Subarray: Subarray is a continuous part of a given array.

        Number of subarray of an array = (n * (n + 1))/2
    */

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // Code to find Maximum Subarray Possible:
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    // Maximum Subarray Sum:

    // 1. Brute Force Approach:

    int arr1[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum1 = INT_MIN;

    for (int st = 0; st < (sizeof(arr1) / sizeof(int)); st++)
    {
        int currSum1 = 0;
        for (int end = st; end < (sizeof(arr1) / sizeof(int)); end++)
        {
            currSum1 += arr1[end];
            maxSum1 = max(currSum1, maxSum1);
        }
    }

    cout << "Maximum Subarray Sum is: " << maxSum1 << endl;

    // 2. Kadane's Algorithm (most optimized): If the sum of currSum < 0 then update currSum = 0;

    int currSum2 = 0;
    int maxSum2 = INT_MIN;

    for (int i = 0; i < (sizeof(arr1) / sizeof(int)); i++)
    {
        currSum2 += arr1[i];
        maxSum2 = max(currSum2, maxSum2);
        if (currSum2 < 0)
        {
            currSum2 = 0;
        }
    }

    cout << "The Maximum Subarray sum using Kadane's Algorithm is: " << maxSum2 << endl;

    return 0;
}
