// #include<iostream>
// using namespace std;
// void divisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0)
//         cout<<i<<" ";
//     }
// };
// int main(){
//     divisors(15);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void divisors(int n){
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//             if(i!=n/i)
//             cout<<(n/i)<<" ";
//         }
        
//     }
// };
// int main(){
//     divisors(15);
//     return 0;
// }

#include<iostream>
using namespace std;
void divisors(int n){
    int i;
    for(i=1;i*i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    
    
    }
    for( ;i>=1;i--){
        if(n%i==0)
        cout<<n/i<<" ";
    }
    
};
int main()
{
    divisors(15);
    return 0;
}