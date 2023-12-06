// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==2){
//         return;
//     }
//     cout<<"hello";
//    cout<<endl;
//    fun(n-1); 
// };
// int main(){
//     fun(5);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     fun(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     fun(3);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0){
//         return;
//     }
//     fun(n-1);
//     cout<<n<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(3);
//     return 0;
// }

#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)
    return;
    fun(n/2);
    cout<<n%2;

}
int main(){
    fun(13);
    cout<<endl;
    fun(8);
    return 0;
}