// #include<iostream>
// using namespace std;
// int LCM(int a,int b){
//     int res=max(a,b);
//     while(true){
//         if(res%a==0 && res%b==0)
//         return res;
//         else
//         res++;
//     }
//     return res;
// };
// int main(){
//     int y=LCM(4,6);
//     cout<<y;
//     return 0;

// }

#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
};
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));   
};
int main(){
    int y=lcm(7,21);

    cout<<"LCM:"<<y<<endl;
    return 0;
}