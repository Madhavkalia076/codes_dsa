// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int maxsubarray_sum(vector<int>nums){
    //KADENE'S ALGORITHM: 

    int sum=0;
    int maxi=INT8_MIN;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }

    }
    return maxi;
}
int main(){
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    int ans=maxsubarray_sum(nums);
    cout<<"maximum subarray sum: "<<ans<<endl;
    return 0;
}