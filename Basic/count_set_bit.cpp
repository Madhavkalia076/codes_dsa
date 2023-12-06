// #include<iostream>
// using namespace std;
// int count(int n){
//     int res=0;
//     while(n>0){
//         if(n%2!=0)
//         res++;
//         n=n/2;
//     }
//     return res;
// };
// int main(){
//     int y;
//     y=count(31);

//     cout<<y;
//     return 0;
// }

//BRIAN KERNINGAM'S ALGORITHM:
#include<iostream>
using namespace std;
int count(int n){
    int res=0;
    while(n>0){
       n=n&(n-1);
       res++;
    }
    return res;
};
int main(){
    int y;
    y=count(31);
    cout<<y;
    return 0;
}