// #include<iostream>
// using namespace std;
// int sqroot(int x){
//     int i=1;
//     while(i*i<=x){
//         i++;
//     }
//     return i-1;
// }
// int main(){
//     cout<<sqroot(10);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sqroot(int x){
//     int low=1,high=x,ans=-1;
//     while(low<=high){
//         int mid=(high+low)/2;
//         int msq=mid*mid;
//         if(msq==x){
//             return mid;
//         }
//         else if(msq>x){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//             ans=mid;
//         }

//     }
//     return ans;
// }
// int main(){
//     cout<<sqroot(26);
//     return 0;
// }

#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[low]<arr[mid]){
            if(x>=arr[low] && x<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(x>arr[mid] && x<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,8,9};
    int n=sizeof(arr)/sizeof(int);
    int y=search(arr,n,30);
    cout<<y<<endl;
    return 0;
}