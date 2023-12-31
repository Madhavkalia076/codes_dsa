// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.


#include<iostream>
#include<vector>
using namespace std;

 int firstoccurence(vector<int>&nums,int target){
       int first=-1;
       int low=0,high=nums.size()-1,mid;
       while(low<=high){
         mid=low+(high-low)/2;
         if(nums[mid]==target){
             first=mid;
             high=mid-1;
         }
         else if(nums[mid] < target){
               low=mid+1;
         }
         else{
             high=mid-1;
         }
       }
       return first;
   }
   int lastoccurence(vector<int>&nums,int target){
       int last=-1;
       int low=0,mid,high=nums.size()-1;
       while(low<=high){
           mid=low+(high-low)/2;
           if(nums[mid]==target){
               last=mid;
               low=mid+1;
           }
           else if(nums[mid] < target){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       }
           return last;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=firstoccurence(nums,target);
        ans.push_back(first);
        int last=lastoccurence(nums,target);
        ans.push_back(last);

        return ans;
    }
    int main(){
        vector<int>nums={5,7,7,8,8,10};
        int target;
        cout<<"enter the target: ";
        cin>>target;
        vector<int>ans=searchRange(nums,target);
        cout<<endl<<"first and last occurence of the target in the array is "<<ans[0]<<","<<ans[1]<<" respectively";
        return 0;
        
    }