#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0;
    while(x!=0){
        int a=x%10;
        ans=ans*10 + a;
        x=x/10;
    }
    return ans;

}
int main(){
    cout<<"enter the number: "<<endl;
    int x;
    cin>>x;
    cout<<"reverse of the number: "<<reverse(x);
    return 0;
}