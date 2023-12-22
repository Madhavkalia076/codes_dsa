// #include<iostream>
// using namespace std;
// int findodd(int arr[],int n){
//     int res=0;
//     int y;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]=arr[j])
//             count++;
//         }    
//         if(count%2!=0)
        
//          y=arr[i];
//     }
//         return y;
// };
// int main(){
//     int arr[5]={2,2,3,3,3};
//     cout<<findodd(arr,5);
//     return 0;
// }

#include<iostream>
using namespace std;
int findodd(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int arr[]={1,3,3,1,1,3,3};
    int y=findodd(arr,7);
    cout<<y;
    return 0;
}