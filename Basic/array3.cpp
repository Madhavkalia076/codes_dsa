//leader in an array:

// #include<iostream>
// using namespace std;
// void leader(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool flag=false;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<=arr[j]){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==false){
//         cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={7,10,4,3,6,5,2};
//     int n=sizeof(arr)/sizeof(int);
//     leader(arr,n);
//     return 0;
// }

//EFFIECENT SOLUTION:
// #include<iostream>
// using namespace std;
// void leader(int arr[],int n){
//     int crr=arr[n-1];
//     cout<<crr<<" ";
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]>crr){
//             crr=arr[i];
//             cout<<crr<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={7,10,4,3,6,5,2};
//     int n=sizeof(arr)/sizeof(int);
//     leader(arr,n);
//     return 0;
// }

//MAXIMUM DIFFERENCE:
    #include<iostream>
    using namespace std;
    int maximum(int arr[],int n){
        int res=(arr[1]-arr[0]);
        int minval=arr[0];
        for(int j=0;j<n;j++){
            res=max(res,(arr[j]-minval));
            minval=min(minval,arr[j]);
        }
        return res;
    }
    int main(){
        int arr[]={2,3,10,6,4,8,1};
        int n=sizeof(arr)/sizeof(int);
        int y=maximum(arr,n);
        cout<<y;
        return 0;
    }