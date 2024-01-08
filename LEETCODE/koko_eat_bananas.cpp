// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

#include<iostream>
#include<vector>
using namespace std;


int maximum(vector<int>&piles){
        int maxi=INT8_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(piles[i],maxi);
        }
        return maxi;
    }
    int hours(vector<int>&piles,int perhour){
        long long  total=0;
        for(int i=0;i<piles.size();i++){
           total=total+(piles[i]/perhour + (piles[i]%perhour !=0));
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
         int ans=0;
        
        long long  low=1,mid;
       
        long long  high=maximum(piles);
        while(low<=high){
            mid=low+(high-low)/2;
            long long  total_hours=hours(piles,mid);
            if(h>=total_hours){
                ans=mid;
              high=mid-1;
            }
            
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int main(){
        vector<int>piles={3,6,7,11};
        int hours=8;
        cout<<"minimum rate of eating banana to eat all the bananas in the given hours : "<<minEatingSpeed(piles,hours)<<" bananas per hour"<<endl;
        return 0;
    }