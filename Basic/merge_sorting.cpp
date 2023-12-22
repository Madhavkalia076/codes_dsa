// #include<iostream>
// using namespace std;
//  void sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//  }
// void merge(int a[],int b[],int m,int n){
//     int c[m+n];

//     for(int  i=0;i<m;i++){
//         c[i]=a[i];
//     }
//     for(int i=0;i<n;i++){
//         c[m+i]=b[i];
//     }
//     sort(c,m+n);
//     for(int i=0;i<(m+n);i++){
//         cout<<c[i]<<" ";
//     }
    
// }
// int main(){
//     int a[]={10,15,20};
//     int b[]={5,6,6,15};
//     int m=sizeof(a)/sizeof(int);
//     int n=sizeof(b)/sizeof(int);

//     merge(a,b,m,n);
    

//     return 0;



    
// }

#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[n1+i];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
            k++;
        }
        else{
            a[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
} 
void mergesort(int arr[],int l,int r){
    if(r>l){
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    // int arr[]={10,15,20,11,30};
    // merge(arr,0,2,4);
    int arr[]={5,8,12,14,7};
    
    int n=sizeof(arr)/sizeof(int);
     mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}