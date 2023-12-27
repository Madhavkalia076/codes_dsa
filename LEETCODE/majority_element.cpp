// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int largest(vector<int>&temp){
    int ans=temp[0];
    for(int i=0;i<temp.size();i++){
        if(temp[i]>ans){
            ans=temp[i];
        }
}
return ans;
}

int findkey(map<int,int>&freq,int n){
    int ans;
    for(auto &pair:freq){
        if(pair.second==n){
            ans=pair.first;
        }
    }
    return ans;
}

int majority(vector<int>&nums){
    map<int,int>freq;
    for(int i=0;i<nums.size();i++){
        if(freq.find(nums[i])==freq.end()){
            freq[nums[i]]=1;
        }
        else{
            freq[nums[i]]++;
        }
    }
    vector<int>temp;
    for(auto i:freq){
        temp.push_back(i.second);
    }
    int largest_index=largest(temp);
    return findkey(freq,largest_index);
}
int main(){
    vector<int>nums={2,2,1,1,1};
    int ans=majority(nums);
    cout<<"maximum occuring element: "<<ans<<endl;
    return 0;
}