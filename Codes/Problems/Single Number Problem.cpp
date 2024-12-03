#include <iostream>
#include <vector>
using namespace std;

// Concept used : Bitwise Operators (Chapter 6)

int singleNumber (vector<int>& nums) {
    int ans = 0;

    for (int i : nums)
    {
        ans ^= i;
    }
    
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {3, 92, 21, 54, 54, 67, 3, 21, 92};

    cout << "The element which is single in the array is: " << singleNumber(nums);
    return 0;
}
