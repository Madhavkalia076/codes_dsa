// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> answer;

    if (nums.size() < 3)
    {
        return answer;
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
        {
            break;
        }

        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int low = i + 1, high = nums.size() - 1;

        while (low < high)
        {
            int sum = nums[i] + nums[low] + nums[high];
            if (sum > 0)
            {
                high--;
            }
            else if (sum < 0)
            {
                low++;
            }
            else
            {
                answer.push_back({nums[i], nums[low], nums[high]});
                int last_low_occurrence = nums[low], last_high_occurrence = nums[high];

                while (low < high && nums[low] == last_low_occurrence)
                {
                    low++;
                }

                while (low < high && nums[high] == last_high_occurrence)
                {
                    high--;
                }
            }
        }
    }

    return answer;
}
int main()
{
    vector<int> nums = {0, 1, 1, 3, 4};
    vector<vector<int>> ans;
    ans = threeSum(nums);
    cout << "3sum= " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j > 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << " , ";
    }
    return 0;
}