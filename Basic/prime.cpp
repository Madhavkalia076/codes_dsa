// #include<iostream>
// using namespace std;
// bool prime(int n){
//     if(n==1)
//     return false;
//     for(int i=1;i<n;i++){
//         if(n%2==0)
//         return false;
//         return true;
//     }
// };
// int main(){
//     cout<<prime(6);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool prime(int n){
//     if(n==1)
//     return false;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0)
//         return false;
//         return true;
//     }
// };
// int main(){
//     cout<<prime(1247478);
//     return 0;
// }

#include<iostream>
using namespace std;
bool prime(int n){
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    if (n%2==0||n%3==0)
    return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0)
        return false;
        return true;
    }
}
    int main()
    {
        std::cout<<prime(31);
        return 0;
    }
    
