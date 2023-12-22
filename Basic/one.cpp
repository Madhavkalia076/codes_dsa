// #include<iostream>
// using namespace std;
// int countdigit(long n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return 1+countdigit(n/10);
//     }
// };
// int number(int n){
//     int fact=1;
//     while(n>0){
//         fact=fact*n;
//         n=n-1;
//     }
//     int z=countdigit(fact);
//     return z;
// };
// int main(){
//     int y=number(8);
//     cout<<y;
//     return 0;
// }
#include<iostream>
using namespace std;
#include<math.h>
int finddigits(int n){
    if(n<0)
    return 0;
    if(n<=1)
    return 1;
    double digits=0;
    for(int i=2;i<=n;i++){
    digits+=log10(i);
    }
    return floor(digits)+1;
};
int main(){
    cout<<finddigits(5)<<endl;
    return 0;
}