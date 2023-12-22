// #include<iostream>
// using namespace std;
// bool prime(int n){
//    if(n==1)
//    return false;
//    if(n==2||n==3)
//    return true;
//    if(n%2==0||n%3==0)
//    return false;
//    for(int i=5;i*i<n;i=i+6)
//    {
//     if((n%i==0)||(n%(i+2)==0))
//     return false;
//    }
//    return true;
// }
// void primefactor(int n){
//     if(n<=1)
//     return;
//     for(int i=2;i<n;i++){
//         if(prime(i)){
//         int x=i;
//         while(n%x==0){
//             cout<<i<<" ";
//             x=x*i;
//         }
//         }
//     }
// };
// int main(){
//     primefactor(12);
    
//     return 0;
// }

#include<iostream>
using namespace std;
bool prime(int n){
  if(n==1)
  return false;
  if(n==2||n==3)
  return true;
  if(n%2==0||n%3==0)
  return false;
  for(int i=5;i*i<=n;i=i+6){
    if(n%i==0||n%(i+2)==0)
    return false;

  }
  return true;

};
void primefactor(int n){
    if(n<=1)
    return;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        if(n>1)
        cout<<n<<" ";
    }
}
int main(){
    primefactor(24);
    return 0;
}