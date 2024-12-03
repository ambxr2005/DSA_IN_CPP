#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum1(vector<int> nums, int target)  // Using Brute Force approach
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                return result;
            }
        }
    }
    return result;
}

vector<int> pairSum2(vector<int> nums, int target)  // Using Optimal approach
{
    vector<int> result;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        } else if (pairSum < target)
        {
            i++;
        } else {
            result.push_back(i);
            result.push_back(j);
            return result;
        }       
    }
    
    return result;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    vector<int> ans1 = pairSum1(nums, target);
    vector<int> ans2 = pairSum2(nums, target);

    cout << "Indices are: " << ans1[0] << ", " << ans1[1] << endl;
    cout << "Indices are: " << ans2[0] << ", " << ans2[1] << endl;

    return 0;
}
