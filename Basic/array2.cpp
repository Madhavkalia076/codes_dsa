//remove duplicates from a sorted array:

// #include<iostream>
// using namespace std;
// int remdup(int arr[],int n){
//     int res=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[res-1]){
//             arr[res]=arr[i];
//             res++;
//         }
//     }
//     return res;
// }
// int main(){
//     int arr[]={1,2,2,3,3};
//     int n=sizeof(arr)/sizeof(int);
//     n=remdup(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//moving duplicates to the end:

// #include<iostream>
// using namespace std;
// // void swap(int a,int b){
// //     int temp=b;
// //     b=a;
// //     a=temp;
    
// // }
// void movezero(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[count]);
//             count++;
//         }
//     }
    
// }

// int main(){
//     int arr[]={8,5,0,10,0,20};
//     int n=sizeof(arr)/sizeof(int);
//       movezero(arr,n);
//       for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//       }
//     //  for(int i=0;i<n;i++){
//     //  cout<<arr[i]<<" ";

//     return 0;
// }

//left rotate an array by 1:
// #include<iostream>
// using namespace std;
// int rotate(int arr[],int n){
//     int temp=arr[0];
//     for(int i=0;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=temp;
//     return n;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     n=rotate(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     n=rotate(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//         return 0;
// }

//left rotate by d;
#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high){
   while(low<high){
    swap(arr[low],arr[high]);
    low++;
    high--;
   }
}  
int leftrotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    return n;
}

   int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    n=leftrotate(arr,n,2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
   }

