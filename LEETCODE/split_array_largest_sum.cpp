// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int maximum(vector<int> &nums)
{
    int maxi = INT8_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
    }
    return maxi;
}
int sums(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
    }
    return sum;
}
int solve(vector<int> &nums, int number)
{
    int ans = 1;
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (x + nums[i] <= number)
        {
            x = x + nums[i];
        }
        else
        {
            ans = ans + 1;
            x = nums[i];
        }
    }
    return ans;
}
int splitArray(vector<int> &nums, int k)
{
    int low = maximum(nums);
    int high = sums(nums);
    if (k > nums.size())
    {
        return -1;
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int check = solve(nums, mid);
        if (check > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;
    cout << "minimized largest sum of the split: " << splitArray(nums, k);
    return 0;
}