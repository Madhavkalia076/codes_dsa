#include<iostream>
using namespace std;
// void bubble(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

//optimizes solution:

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        
    if(flag==false){
        break;
    }
    }
}
int main(){
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(int);
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}