#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[] = {3, -4, 5, 4, -1, 7, -8};

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
