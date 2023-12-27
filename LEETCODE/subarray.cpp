// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include<iostream>
#include<vector>
#include<map>

using namespace std;
int subarraySum(vector<int>& nums, int k) {
        map<long long, int> prevSum;
        long long sum=0;int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k)ans++;
            long long rem=sum-k;
            if(prevSum.find(rem)!=prevSum.end()){
                ans+=prevSum[rem];
            }
            prevSum[sum]++;
            // if(prevSum.find(sum)==prevSum.end()){
            //     prevSum[sum]=i;
            // }
        }
        return ans;
    }
    int main(){
        vector<int>nums={1,1,1};
        int ans=subarraySum(nums,2);
        cout<<"total number of subarray whose sum equals to 2 is: "<<ans<<endl;
        return 0;
    }

