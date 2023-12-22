#include<iostream>
#include<cmath>
using namespace std;
// void selection(int arr[],int n){
//     int temp[n];
//     for(int i=0;i<n;i++){
//         int z=0;
//         for(int j=1;j<n;j++){
//             if(arr[j]<arr[z]){
//                 z=j;
//             }
//         }
//         temp[i]=arr[z];
//         arr[z]=INFINITY;
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//     }
// }

//optimized
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int z=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[z]){
                z=j;
            }
        }
        swap(arr[z],arr[i]);
    }
}
int main(){
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(n);
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}