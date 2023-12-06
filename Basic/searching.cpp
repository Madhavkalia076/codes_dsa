// #include<iostream>
// using namespace std;
// int search(int arr[],int n,int x){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(high+low)/2;
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]<x){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
    
//     return -1;
    
    
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     int y=search(arr,n,21);
//     cout<<y;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int search(int arr[],int low,int high,int x){
//     if(low>high)
//     return -1;
//     int mid=(low+high)/2;
//     if(arr[mid]==x)
//     return mid;
//     else if(arr[mid]>x)
//     return search(arr,low,mid-1,x);
//     else
//     return search(arr,mid+1,high,x);

// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(int);
//     int y;
//     y=search(arr,0,n-1,9);
//     cout<<y;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int first(int arr[],int n,int x){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(high+low)/2;
//         if(x<arr[mid]){
//            high=mid-1; 
//         }
//         else if(x>arr[mid]){
//             low=mid+1;
//         }
//         else{
//             if(mid==0 || arr[mid-1]!=arr[mid]){
//                 return mid;
//             }
//             else{
//                 high=mid-1;
//             }

//         }
//     }

// }
    // int main(){
    //     int arr[]={1,10,10,10,20,20,40};
    //     int n=sizeof(arr)/sizeof(int);
    //     int y=first(arr,n,20);
    //     cout<<y;
    //     return 0;
    // }

    // #include<iostream>
    // using namespace std;
    // int last(int arr[],int n,int x){
    //     int high=0;
    //     int low=n-1;
        
    //     while(high<=low){
    //         int mid=(low+high)/2;
    //         if(x>arr[mid]){
    //             high= mid+1;
    //         }
    //         else if(x<arr[mid]){
    //             low=mid-1;
    //         }
    //         else{
    //             if(mid==0|| arr[mid]!=arr[mid+1]){
    //                 return mid;
    //             }
    //             else{
    //                 high=mid+1;
    //             }
    //         }

    //     }
    //     return -1;
    // }
    // int main(){
    //     int arr[]={5,8,8,10,10};
    //     int n=sizeof(arr)/sizeof(int);
    //     cout<<last(arr,n,10);
    //     return 0;
    // }

    #include<iostream>
    using namespace std;
    int count(int arr[],int n){
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==0)
            low=mid+1;
            else{
                if(mid==0||arr[mid-1]!=arr[mid])
                return (n-mid);
            
                else{
                    high=mid-1;
                }
            }
            
        }
          return 0;
        }
        int main(){
            int arr[]={0,0,1,1,1,1,};
            int n=sizeof(arr)/sizeof(int);
            cout<<count(arr,n);
            
            return 0;
        }
    
