// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 3, 5, 9, 12};
    int target = 1;
    int ans = search(nums, target);
    cout << "target is present at the index: " << ans << endl;
    return 0;
}
