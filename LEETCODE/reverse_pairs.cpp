// Given an integer array nums, return the number of reverse pairs in the array.

// A reverse pair is a pair (i, j) where:

// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].



#include<iostream>
#include<vector>
using namespace std;

    void merge(vector<int>& arr, int start, int end, int& count, vector<int>& temp){
        int mid = start + (end-start)/2;
        int i = start, j = mid+1, k = start;

        while(i <= mid && j <= end){
            if(arr[i] > (long long)2 * arr[j]){
                count += (mid - i + 1);
                j++;
            }
            else{
                i++;
            }
        }

        i = start; j = mid + 1;

        while(i <= mid && j <= end){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
            }
        }

        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= end){
            temp[k++] = arr[j++];
        }

        while(start <= end){
            arr[start] = temp[start];
            start++;
        }
    }


    void mergesort(vector<int>& nums, int start, int end, int& count, vector<int>& temp){
        //base case
        if(start >= end){
            return;
        }

        int mid = start + (end-start)/2;
        mergesort(nums, start, mid, count, temp);
        mergesort(nums, mid+1, end, count, temp);
        merge(nums, start, end, count, temp);
    }


    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0, start = 0, end = n-1;
        vector<int> temp(n);
        mergesort(nums, start, end, count, temp);
        return count;
    }
int main(){
    vector<int> a = {2,4,3,5,1};
    int n = 5;
    int cnt = reversePairs(a);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}