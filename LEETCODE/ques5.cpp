// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>&nums){
    //USING COUNTING SORT:
    vector<int>count(3,0) ; //this will make a vector of size 3 and each element is 0
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
        
    }
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<count[i];j++){
            nums[k]=i;
            k++;
        }
    }

}
int main(){
    vector<int>nums={2,0,2,1,1,0};
    cout<<"before sorting: "<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    sort(nums);
    cout<<endl<<"after sorting: "<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

