// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        map<int,int>frequency;
        for(int i=0;i<nums.size();i++){
            if(frequency.find(nums[i])==frequency.end()){
                   frequency[nums[i]]=1;
            }
            else{
                frequency[nums[i]]++;
            }
        }
       
       
        vector<int> result;
        for(auto&pair:frequency){
            if( pair.second>(nums.size()/3)){
                
                result.push_back(pair.first);
            }
        }
        return result;
    }
int main(){
  vector<int>nums={3,4,5,1,9,5,5};
  vector<int>ans;
  ans=majorityElement(nums);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  return 0;

}