//largest element in the array:

// #include<iostream>
// using namespace std;
// int largest(int arr[],int n){
//     int temp=arr[0];
//     int y;
//     for( int i=1;i<n;i++){
//         if(arr[i]>temp){
//              temp=arr[i];
//         }
//     }
//     return temp;
// }
// int main(){
//     int arr[]={40,8,50,100};
//     int n=4;
//     cout<<largest(arr,n);
    
//     return 0;
// }


//second largest element in an array:

// #include<iostream>
// using namespace std;
// int largest(int arr[],int n){
//     int res=0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[res]){
//             res=i;
//         }
//     }
//     return res;
// }
// int secondlargest(int arr[],int n){
//     int lar=largest(arr,n);
//     int res=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[lar]){
//             if(res==-1){
//                 res=i;
//             }
//             else if(arr[i]>arr[res]){
//                 res=i;
//             }
//         }
//     }
//     return res;
// }
// int main(){
//     int arr[]={1,3,2,6,4,8,5};
//     int n=sizeof(arr)/sizeof(int);
//     int y=secondlargest(arr,n);
//     cout<<y;
//     cout<<endl<<"second lagest element= "<<arr[y];
//     return 0;
// }

//efficient approach:

// #include<iostream>
// using namespace std;
// int secondlargest(int arr[],int n){
//     int res=-1,largest=0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[largest]){
//             res=largest;
//             largest=i;
//         }
//         else if(arr[i]!=arr[largest]){
//             if(res==-1 || arr[i]>arr[res]){
//                 res=i;
//             }
//         }
//     }
//     return res;
// }
// int main(){
//     int arr[]={3,5,3,71,4,9};
//     int n=sizeof(arr)/sizeof(int);
//     int y=secondlargest(arr,n);
//     cout<<y<<endl;
//     cout<<"second largest element: "<<arr[y]<<endl;
//     return 0;
// // }

// #include<iostream>
// using namespace std;
// bool check(int arr[],int n)
// {
//     int res;
//     int flag=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]<arr[i+1]){
//             res=flag;
//         }
//         else{
//             flag++;
//         }
//     }
//     if(flag==0){
//         return 1;
//     }
//         else{
//             return 0;
//         }
    
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n=sizeof(arr)/sizeof(int);
//    cout<< check(arr,n);
//     return 0;
// }

 #include<iostream>
 using namespace std;
 int sorting(int arr[],int n){
     int temp=0;
     int i=0;
     while(i<n){
         if(arr[i]>arr[i+1]){
             temp=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
         }      
         i++;
     }
     return n;
 }
 int main(){
     int arr[]={2,1,3,4,7,6,5};
     int n=sizeof(arr)/sizeof(int);
     n=sorting(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
 }
     

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl<<"reverse order of array: "<<endl;
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
