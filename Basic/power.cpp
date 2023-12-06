// #include<iostream>
// using namespace std;
// int pow(int x,int n){
//     int res=1;
//     for(int i=0;i<n;i++){
//         res=res*x;
//     }
//     return res;
// };
// int main(){
//     int y=pow(9,2);
//     cout<<y;
//     return 0;
// }

#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==0)
    return 1;
    int temp=pow(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else
    return temp*x;
    };
    int main(){
        long int y=pow(2,32);
        cout<<y;
        return 0;
    }
