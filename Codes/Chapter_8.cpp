#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1; // target not found.
}

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    if (size%2 == 0)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    } else if (size%2 != 0)
    {
        while (start != end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    // Initialization:
    int marks[5] = {91, 52, 87, 71, 69};

    double price[] = {98.99, 105.67, 30.33};

    // To find the size of an array:
    int size = sizeof(marks) / sizeof(marks[0]);

    // Access:
    for (int i = 0; i < size; i++) // Loops are generally used for arrays.
    {
        cout << marks[i] << endl;
    }

    // finding minimum/highest element in an array.

    // for minimum:
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < minimum)
        {
            minimum = marks[i];
        }
    }

    cout << "The minimum marks is: " << minimum << endl;

    // for highest:
    int highest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
            cout << "The index of highest marks is: " << i << endl;
        }
        // Another way:
        // max(marks[i], highest);
    }

    cout << "The highest marks is: " << highest << endl;

    // Pass by reference:

    int arr[] = {32, 43, 11, 82};

    cout << "Before change: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "After function call: " << endl;

    changeArr(arr, (sizeof(arr) / sizeof(int)));
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    // Linear search:

    int arr1[] = {4, 7, 8, 1, 5};
    int target1 = 2;

    if (linearSearch(arr1, (sizeof(arr1) / sizeof(int)), target1) == -1)
    {
        cout << "Target NOT FOUND!" << endl;
    }
    else
    {
        cout << target1 << " is at the index: " << linearSearch(arr1, (sizeof(arr1) / sizeof(int)), target1) << endl;
    }

    int arr2[] = {4, 7, 8, 1, 2, 5};
    int target = 2;

    if (linearSearch(arr2, (sizeof(arr2) / sizeof(int)), target) == -1)
    {
        cout << "Target NOT FOUND!" << endl;
    }
    else
    {
        cout << target << " is at the index: " << linearSearch(arr2, (sizeof(arr2) / sizeof(int)), target) << endl;
    }

    // Reverse an Array:

    int arr3[] = {4, 2, 5, 6, 3, 11, 52};

    cout << "Before reversing: " << endl;
    for (int i = 0; i < (sizeof(arr3)/sizeof(int)); i++)
    {
        cout << arr3[i] << endl;
    }

    reverseArray(arr3, (sizeof(arr3)/sizeof(int)));
    cout << "After reversing: " << endl;
    for (int i = 0; i < (sizeof(arr3)/sizeof(int)); i++)
    {
        cout << arr3[i] << endl;
    }

    return 0;
}
