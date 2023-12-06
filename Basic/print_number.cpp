// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     print(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0)
//     return;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     print(5);
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0)
//     return 0;
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(5);
//     cout<<sum(10);
//     return 0;
// }

//PALINDROME USING RECURSION:

// #include<iostream>
// using namespace std;
// bool ispal(string str,int start,int end){
//     if(start>=end){
//         return true;
//     }
//     return( str[start]==str[end]&&ispal(str,start+1,end-1));
// };
// int main(){
//    int y= ispal("abab",0,3);
//    cout<<y;
//     return 0;
// }

// sum of digits using recursion:

// #include<iostream>
// using namespace std;
// int sum(int n){
//    if(n==0)
//    return 0;
//    return (sum(n/10)+(n%10));
// }
// int main(){
//     cout<<sum(253);
//     return 0;
// }


#include<bits/stdc++.h> 
using namespace std;
 int max(int a, int b, int c)
    {
        if (a > b)
        {
            if (a > c)
            {
    
                return a;
            }
        
        else
        {
            return c;
        }
        }
    
    else
    {
        if (b > c)
        {
    
            return b;
        }
    
        else
        {
            return c;
        }
    }
    
    }
int maxpiece(int n,int a,int b,int c){
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    int res=max(maxpiece(n-a,a,b,c) ,maxpiece(n-b,a,b,c) ,maxpiece(n-c,a,b,c));
    if(res==-1)
    return -1;
    return res+1;
}
int main(){
    cout<<maxpiece(23,11,9,12);
    return 0;
}