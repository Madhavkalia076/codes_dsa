#include<iostream>
#include<math.h>
using namespace std;
int gp(int a,int b,int n){
    int r=b/a;
    int y;
    y=a*(pow(r,(n-1)));
    return y;
};
int main(){
    int x=gp(2,4,3);
    cout<<x;
    return 0;
}