// #include<iostream>
// using namespace std;
// bool ispowerof2(int n){
//     if(n==0)
//     return false;
//     while(n!=1){
//         if(n%2!=0)
//         return false;
//         n=n/2;
//     }
    
// };
// int main(){
//     cout<<ispowerof2(1024);
//     return 0;
// }

#include<iostream>
using namespace std;
bool ispower2(int n){
    if(n==0)
    return false;
    return ((n&(n-1))==0);
};
int main(){
    cout<<ispower2(1024);
    return 0;
}