
// #include<iostream>
// using namespace std;
// void frequency(int arr[],int n){
//     int freq=1,i=1;
//     while(i<n){
//         while((i<n)&&(arr[i]==arr[i-1])){
//             freq++;
//             i++;
//         }
//         cout<<arr[i-1]<<" "<<freq<<endl;
//         i++;
//         freq=1;
//     }
//     if(n==1||arr[n-1]!=arr[n-2]){
//         cout<<arr[n-1]<<" "<<1;
//     }
// }
// int main(){
//     int arr[]={1,2,2,2,3,4,5,5};
//     int n=sizeof(arr)/sizeof(int);
//     frequency(arr,n);
//     return 0;
// }

// #include<iostream>

// using namespace std;
//  int removeElement(int nums[],int n, int val) {
         
//         int res=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=val){
                 
//                  res++;
//             }
//         }
//         return res;
//     }
//     int main(){
//         int arr[]={0,1,2,2,3,0,4,2};
//         int n=sizeof(arr)/sizeof(int);
//         int y=removeElement(arr,n,2);
//        cout<<y;
//         return 0;

//     }

// #include<iostream>
// using namespace std;
// int target(int arr[],int n,int y){
    
//     int i;
//     int z;
//     for(i=0;i<n;i++){
//         if(y>arr[i]&&y<arr[i+1])
//         {
//             z=i+1;
//             break;
            
            
//         }
//         else if(arr[i]==y){
//             z=i;
//             break;
//         }
//         else if(arr[n-1]<y){
//             n++;
//             arr[n]=y;
//         }
//     }
//     return z;
// }
// int main(){
//     int arr[]={1,3,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<target(arr,n,7);
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int plus1(int arr[],int n){
//     if(n!=1){
//     if(arr[n-1]==9){
        
//         arr[n-1]=0;
//         arr[n-2]++;
//     }
   
    
    
//     else{
//         arr[n-1]++;
//     }
// }
// if(n==1){
//     if(arr[0]==9){
        
//         arr[1]=0;
//         arr[0]=1;
//     }
//     arr[0]++;
// }
//     return n;
// }
// int main(){
//     int arr[]={4,3,2,1};
//     int n=sizeof(arr)/sizeof(int);
//    n= plus1(arr,n);
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
//    return 0;
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int>plus1(vector<int>&num){
//      num.push_back(0);
//       int n=num.size();
//      for(int i=n-2;i>0;i--){
//          num[i]=0;
//      num[0]=1;
//      }

  
// }
// int main(){
//     vector<int>num={9,9,9};
//     plus1(num);
//     for(int i=0;i<num.size();i++){
//         cout<<num[i]<<" "; 
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
//  vector<int> buildArray(vector<int>& nums) {
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             ans[i]=nums[nums[i]];
//         }
//         return ans;
//     }
//     int main(){
//         vector<int>nums={0,2,1,5,3,4};
//         vector<int>ans=buildArray(nums);
//         for(int i=0;i<nums.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         return 0;
//     }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int>ans(2*n);
//         for(int i=0;i<n;i++){
//             ans[2*i]=nums[i];
//             ans[2*i+1]=nums[n+i];
//         }
//         return ans;
//     }

// int main(){
//     vector<int>num={2,5,1,3,4,7};
//     vector<int>ans=shuffle(num,3);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
   
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
//   int numIdenticalPairs(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;i<nums.size();j++){
//                    if(nums[i]==nums[j]){
//                        count++;
//                    }
//             }
//         }
//         return count;
//     }
//     int main(){
//         vector<int>nums={1,2,3,1,1,3};
//         int y=numIdenticalPairs(nums);
//         cout<<y;
//         return 0;
        
//     }

#include<iostream>
#include<vector>
using namespace std;
vector<int> left1(vector<int>&num){
    vector<int>ans;
    ans.push_back(0);
    ans.push_back(num[0]);
    for(int i=1;i<num.size();i++){
        ans.push_back(ans[i-1]+ans[i]);
    }
    return ans;
}
int main(){
    vector<int>left={10,4,8,3};
    vector<int>ans=left1(left);
    for(int i=0;i<left.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

