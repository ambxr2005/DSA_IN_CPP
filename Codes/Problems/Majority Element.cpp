#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int majorityElement1(vector<int> &nums) // Using Brute Force approach
{
    for (int val : nums)
    {
        int frequency = 0;
        for (int num : nums)
        {
            if (num == val)
            {
                frequency++;
            }
        }
        if (frequency > (nums.size() / 2))
        {
            return val;
        }
    }
    return -1;
}

int majorityElement2(vector<int> &nums) // Using sorting approach
{
    int n = nums.size();

    // sorting
    sort(nums.begin(), nums.end());

    // frequency count
    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}
int majorityElement3(vector<int> &nums) // Using Moore's Voting Algorithm
{
    int freq = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (nums[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {3, 2, 3};
    cout << "Majority Element is: " << majorityElement1(nums1) << endl;

    vector<int> nums2 = {1, 2, 1, 1, 1};
    cout << "Majority Element is: " << majorityElement2(nums2) << endl;
    cout << "Majority Element is: " << majorityElement3(nums2) << endl;

    return 0;
}
