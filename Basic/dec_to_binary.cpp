#include<iostream>
using namespace std;
void dectobin(int n){
    int binarynumber[32];
    int i=0;
    while(n>0){
        binarynumber[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binarynumber[j];
    }

};
int main(){
    dectobin(17);
    return 0;
}