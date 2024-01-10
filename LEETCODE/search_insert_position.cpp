// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size();
        if(target>nums[high-1]){
            return high;
        }
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    int main(){
        vector<int>nums={1,2,3,6,7,8};
        int target=7;
        int ans=searchInsert(nums,target);
        cout<<ans<<endl;
        return 0;
    }