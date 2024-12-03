#include <iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int> &vec, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = vec[i];
        vec[i] = vec[size - i - 1];
        vec[size - i - 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    // Q1.  WAP to perform linear search on a vector.
    vector<int> vec = {1, 2, 3, 4, 5, 9};
    int target = 3;
    int index = -1;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            index = i;
        }
    }
    cout << "Target found at index: " << index << endl;
    // Q2.  WAF to reverse a vector.
    reverseVector(vec, vec.size());

    cout << "The reverse of the vector is: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
