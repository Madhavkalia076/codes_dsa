// You are given an integer array bloomDay, an integer m and an integer k.

// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

#include<iostream>
#include<vector>
using namespace std;

bool possible(vector<int>&bloomDay,int day,int m,int k){
        int count=0;
        int no_of_flowersbloosom=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= day){
                count++;
            }
            else{
                no_of_flowersbloosom +=(count/k);
                count=0;
            }
        }
        no_of_flowersbloosom +=(count/k);
        return no_of_flowersbloosom >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       long long val=m*1LL * k * 1LL;
       if(val > bloomDay.size()){
           return -1;
       }
       int mini=INT8_MAX,maxi=INT8_MIN;
       for(int i=0;i<bloomDay.size();i++){
           mini=min(mini,bloomDay[i]);
           maxi=max(maxi,bloomDay[i]);

       }
       int low=mini,high=maxi;
       while(low<=high){
           int mid=(high+low)/2;
           if(possible(bloomDay,mid,m,k)){
               high=mid-1;
           }
           else{
               low=mid+1;
           }
       }
       return low;
    }
int main(){
    vector<int>bloomDay={7,7,7,7,13,11,12,7};
    int k=3,m=2;
    int ans=minDays(bloomDay,m,k);
    cout<<"minimum number of days need to wait to be able to make 2 bouquets from the garden is : "<<ans<<endl;
    return 0;
}