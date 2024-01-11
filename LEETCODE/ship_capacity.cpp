// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

#include<iostream>
#include<vector>
using namespace std;

int sums(vector<int>&weights){
    int total=0;
    for(int i=0;i<weights.size();i++){
        total=total+weights[i];
    }
    return total;
}
int maximum(vector<int>weights){
    int maxi=INT8_MIN;
    for(int i=0;i<weights.size();i++){
        maxi=max(maxi,weights[i]);
    }
    return maxi;
}

int solve(vector<int>weights,int mid){
    int load=0;
    int count=1;
    for(int i=0;i<weights.size();i++){
       if(load+weights[i] > mid){
           count++;
           load=weights[i];
       }
       else{
           load=load+weights[i];
       }
    }
    return count;
}

    int shipWithinDays(vector<int>& weights, int days) {
      int low=maximum(weights),high=sums(weights);
      int ans;
      while(low<=high){
          int mid=(low+high)/2;
          int x=solve(weights,mid);
          if( x <= days){
              high=mid-1;
             
          }
          
          else{
              low=mid+1;
          }
      }
      return low;
    }
int main(){
    vector<int>weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    int ans=shipWithinDays(weights,days);
    cout<<"least weight capacity of the ship that will result in all the package of conveyor belt being shipped within the given days: "<<ans;
    return 0;
}