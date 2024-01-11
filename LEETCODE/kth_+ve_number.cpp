// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

 
#include<iostream>
#include<vector>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
     for(int i=0;i<arr.size();i++){
         if(arr[i]<= k){
             k++;
         }
         else
         {
             break;
         }
     }   
     return k;
    }
int main(){
    vector<int>arr={1,2,3,4};
    int ans;
    ans=findKthPositive(arr,2);
    cout<<"kth missing number: "<<ans;
    return 0;
}