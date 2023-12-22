#include<iostream>
using namespace std;
int main(){
    int x=3,y=6;
    cout<<(x&y)<<endl;
    cout<<(x|y)<<endl;
    cout<<(x^y)<<endl;
    cout<<(x<<2)<<endl;
    int z=33;
    cout<<(z>>2)<<endl;

    unsigned int a=1;
    cout<<(~a)<<endl;
    return 0;
}