//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

#include<iostream>
using namespace std;
int compliment(int x){
    int m=x;
    int mask=0;
    while(m!=0){
        mask = (mask << 1) | 1;
        m= m >> 1;
    }
    int ans= ~x & mask;
    return ans;

}
int main(){
    cout<<" enter the number: "<<endl;
    int x;
    cin>>x;
    cout<<" compliment of number : "<<compliment(x);
    return 0;
}