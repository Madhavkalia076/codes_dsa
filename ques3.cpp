// Given an integer n, return true if it is a power of two. Otherwise, return false.

#include<iostream>
#include<math.h>
using namespace std;
 bool isPowerOfTwo(int n) {
     for(int i=0;i<=30;i++){
         int ans=pow(2,i);
         if(ans==n){
             return true;
         }
     }
         return false;
     }
     int main(){
        cout<<"enter the number: "<<endl;
        int x;
        cin>>x;
        bool ans;
        ans=isPowerOfTwo(x);
        cout<<ans;;
        return 0;
     }

