// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int res=min(a,b);
//     while(res>0){
//         if(a%res==0 &&b%res==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// };
// int main(){
//     int y=gcd(10,15);
//     cout<<y;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else
//         b=b-a;
//     }
//     return a;
// };
// int main(){
//     int y=gcd(20,10);
//     cout<<y;
//     return 0;
// }

#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else 
    return gcd(b,a%b);
};
int main(){
    int y=gcd(25,30);
    cout<<y;
    return 0;
}
