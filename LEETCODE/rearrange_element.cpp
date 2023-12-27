// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should rearrange the elements of nums such that the modified array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include<iostream>
#include<vector>
using namespace std;
 vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        int size=positive.size()+negative.size();
        for(int i=0;i<size;i++){
            if(i%2==0){
                ans.push_back(positive[i/2]);
            }
            else{
                ans.push_back(negative[i/2]);
            }
        }
        return ans;
    }
    int main(){
        vector<int>nums={3,1,-2,-5,2,-4};
        vector<int>ans;
        cout<<"before rearranging: "<<endl;
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
     cout<<endl<<"after rearranging:"<<endl;
     ans=rearrangeArray(nums);
      for(int i=0;i<nums.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;

    }

