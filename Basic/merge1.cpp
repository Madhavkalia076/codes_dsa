// #include<iostream>
// using namespace std;
// // void intersection(int a[],int b[],int m,int n){
// //     for(int i=0;i<m;i++){
// //         if(i>0 && a[i]==a[i-1]){
            
// //             continue;
// //         }
// //         for(int j=0;j<n;j++){
// //             if(a[i]==b[j]){
// //                 cout<<a[i]<<" ";
// //                 break;
// //             }
// //         }
// //     }
// // }

// void intersection(int a[],int b[],int m,int n){
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(i>0 && a[i]==a[i-1]){
//             i++;
//             continue;
//         }
//         else if(a[i]<b[j]){
//             i++;
//         }
//         else if(a[i]>b[j]){
//             j++;
//         }
//         else{
//             cout<<a[i]<<" ";
//             i++;j++;
//         }
//     }
// }
// int main(){
//     int a[]={1,1,3,3,3};
//     int b[]={1,1,1,1,3,5,7};
//     int m=sizeof(a)/sizeof(int);
//     int n=sizeof(b)/sizeof(int);
//     intersection(a,b,m,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // int count(int arr[],int n){
// //     int res=0;
// //     for(int i=0;i<(n-1);i++){
// //         for(int j=i+1;j<n;j++){
// //             if(arr[i]>arr[j]){
// //                 res++;
// //             }
// //         }
// //     }
// //     return res;
// // }
// int countandmerge(int arr[],int l,int m,int r){
//     int n1=m-l+1,n2=r-m;
//     int left[n1],right[n2];
//     for(int i=0;i<n1;i++){
//         left[i]=arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         right[i]=arr[m+1+i];
//     }
//     int res=0,i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(left[i]<=right[j]){
//             arr[k]=left[i];
//         }
//         else{
//             arr[k]=right[j];
//             j++;
//             res=res+(n1-i);

//         }
//         k++;
//     }
//     while(i<n1){
//         arr[k]=left[i];
//         i++;
//         k++;
//     }
//     while(j<n2){
//         arr[k]=right[j];
//         j++;
//         k++;
//     }
//     return res;
// }
// int count(int arr[],int l,int r){
//      int res=0;
//      if(l<r){
//         int m=l+(r-l)/2;
//         res+=count(arr,l,m);
//         res+=count(arr,m+1,r);
//         res+=countandmerge(arr,l,m,r);
//      }
//      return res;
// }
// int main(){
//     int arr[]={2,4,1,3,5};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<count(arr,0,n-1);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void partition(int arr[],int l,int h,int p){
//     int temp[h-l+1],index=0;
//     for(int i=l;i<=h;i++){
//         if(arr[i]<=arr[p]){
//             temp[index]=arr[i];
//             index++;
//         }
//     }
//     for(int i=l;i<=h;i++){
//         if(arr[i]>=arr[p]){
//             temp[index]=arr[i];
//             index++;
//         }
//     }
//     for(int i=l;i<=h;i++){
//         arr[i]=temp[i-l];
//     }
// }
// int main(){
//     int arr[]={3,5,6,12,10,7};
//     int n=sizeof(arr)/sizeof(int);
//     partition(arr,0,n-1,5);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
    
// }

#include<iostream>
using namespace std;
void lpartition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
}
int main(){
    int arr[]={10,80,30,90,40,50,70};
    int n=sizeof(arr)/sizeof(int);
    lpartition(arr,0,n-1);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
