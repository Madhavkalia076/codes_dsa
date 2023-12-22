// #include<iostream>
// using namespace std;
// int lpartition(int arr[],int l,int h){
//     int pivot=arr[h];
//     int i=l-1;
//     for(int j=l;j<=h-1;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[h]);
//     return (i+1);
// }
// void qsort(int arr[],int l,int h){
//     if(l<h){
//         int p=lpartition(arr,l,h);
//         qsort(arr,l,p-1);
//         qsort(arr,p+1,h);
//     }
// }
// int main(){
//     int arr[]={8,4,7,9,3,10,5};
//     int n=sizeof(arr)/sizeof(int);
//     qsort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         std::cout<<arr[i]<<" ";
    
//     }
//     return 0;
// }

///HOARSE //partition:

#include<iostream>
using namespace std;
int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }
        while(arr[i]<pivot);
        do{
            j--;
        }
        while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
void qsort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qsort(arr,l,p);
        qsort(arr,p+1,h);
    }
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(int);
    qsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
