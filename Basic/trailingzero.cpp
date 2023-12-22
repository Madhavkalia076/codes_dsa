#include<iostream>
using namespace std;
int countdigit(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return res;
};
int main(){
    cout<<"no. of trailing zeroes in the given integer:"<<countdigit(10)<<endl;
    return 0;
}