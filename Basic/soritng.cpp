// #include<iostream>
// using namespace std;
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={2,10,8,7};
//     int n=sizeof(arr)/sizeof(int);
//     bubblesort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
    if(swapped==false){
        break;
    }
    }
}
int main(){
    int arr[]={2,10,8,7};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}