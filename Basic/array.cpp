// #include<iostream>
// using namespace std;
// int search(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[10]={1,2,3,4,5,34,453,3535,35435,2422};
//     int y;
//     y=search(arr,10,5);
//     cout<<y<<endl;
//     return 0;
// }

//insertion:
// #include<iostream>
// using namespace std;
// int* insert(int arr[],int n,int pos,int x){
//     int y;
//     y=sizeof(arr[n])/sizeof(int);
//     if(n==y){
//         cout<<"cannot inserted";
//     }
//     int idx=pos-1;
//     for(int i=n-1;i>=idx;i--)
//         arr[i+1]=arr[i];
//         arr[idx]=x;
//         return  arr;
    

// }
// int main(){
//     int arr[]={1,2,3,4};
//     insert(arr,3,2,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//deletion:
// #include<iostream>
// using namespace std;
// int delete1(int arr[],int n,int x){
//     int i;
//      for(i=0;i<n;i++){
//         if(arr[i]==x)
//         break;
//      }
//      if(i<n){
//         n=n-1;
//         int j;
//         for(j=i;j<n;j++){
//           arr[j]=arr[j+1];
//         }
        
//      }
//      return n;
// }
//      int main(){
//         int arr[]={1,2,3,4,5,6};
//         int n=sizeof(arr)/sizeof(int);
//          n=6;
//         int x=4;
//         n=delete1(arr,n,x);
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         return 0;
     


// }

#include<iostream>
using namespace std;
int insertion(int arr[],int n,int pos,int x){
   
   int idx=pos-1;
   n=n+1;
   for(int i=n-1;i>=idx;i--){
      arr[i]=arr[i-1];
   }
   arr[idx]=x;
   return n;

}
int main(){
   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(int);
   int x=6;
   int pos=3;
   n=insertion(arr,n,pos,x);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl<<sizeof(arr);
   return 0;
}