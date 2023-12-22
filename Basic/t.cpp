#include <bits/stdc++.h>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n,x;
       int count=0;
       n=nums.size();
       if(n==1){
           x=nums[0];
       }int i=1;
       while(i<n){
           if(nums[i]!=nums[i-1]){
               count++;
           }
           else{
               i=i+2;
           }
           
       }
       if(count==0){
           x=nums[n-1];
       }
       return x;
       
        
    }
    int main(){
        vector<int>a={2,2,1};
        int y=singleNumber(a);
        cout<<y;
        return 0;
    }