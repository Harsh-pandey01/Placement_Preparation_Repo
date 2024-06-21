// we are given an array of size n+1 and we know that elements present in array are of range [1-n] only , find the
// duplicate element in an array

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            int number = -1 * nums[i];
            if (nums[number - 1] < 0)
                return number;

            nums[number - 1] = -1 * nums[number - 1];
        }
        else
        {
            if (nums[nums[i] - 1] < 0)
                return nums[i];

            nums[nums[i] - 1] = -1 * nums[nums[i] - 1];
        }
    }

    return -1;
}

int main()
{

    vector<int> nums = {1, 3, 4, 2, 2};

    cout << " Duplicate element is " << findDuplicate(nums);

    vector<int> nums2 = {3, 3, 3, 3, 3};
    cout << " Duplicate element is " << findDuplicate(nums2);

    return 0;
}