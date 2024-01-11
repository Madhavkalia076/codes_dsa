// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

// The test cases are generated so that there will be an answer.

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int sums(vector<int>&nums,int k){
      int sum=0;
      for(int i=0;i<nums.size();i++){
          sum=sum+ceil((double)nums[i]/(double)k);
      }
      return sum;
  }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT8_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);

        }
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            
             int sum=sums(nums,mid);
            if(sum>threshold){
                
                low=mid+1;
            }
            
            else{
                high=mid-1;
            }

        }
        return low ;
    }
int main(){
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    int ans = smallestDivisor(nums, threshold);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}