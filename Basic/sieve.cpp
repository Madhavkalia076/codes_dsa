// #include<iostream>
// #include<vector>
// using namespace std;
// bool isprime(int n){
//     if(n==2||n==3)
//     return true;
//     if(n==1)
//     return false;
//     if(n%2==0||n%3==0)
//     return false;
//     for(int i=5;i*i<=n;i=i+6){
//         if(n%i==0||n%(i+2)==0)
//         return false;
//     }
// };
// void printprime(int n){
// vector<bool> isprime(n+1,true);
// for(int i=2;i*i<=n;i++)
// if (isprime[i]){
//     for(int j=2*i;j<=n;j=j+2){
//         isprime[j]=false;
//     }
// }
// for(int i=2;i<=n;i++){
//     if(isprime[i])
//     cout<<i<<" ";
// }
// };
// int main(){
//     printprime(9);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
bool prime(int n){
    if(n==2||n==3)
    return true;
    if(n==1)
    return false;
    if(n%2==0||n%3==0)
    return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0||n%(i+2)==0)
        return false;
    }
};
void printprime(int n){
    vector<bool> prime(n+1,true);
    int i;
    for(int  i=2;i<=n;i++){
        if(prime[i])
        cout<<i<<" ";
    
    
    for(int j=i*i;j<=n;j=j+i){
        prime[j]=false;
    }
}
};
int main(){
    printprime(21);
    return 0;
}