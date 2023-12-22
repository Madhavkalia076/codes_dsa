//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> binary(int x){
    int m=x;
     
    vector<int>temp;
    while(m!=0){
        
       temp.push_back(m%2);
       
       m=m/2;
    }
    vector<int>ans;
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
    return ans;
    
}
int decimal(vector<int>&result){
   int ans=0;
   int y=result.size()-1;
   for(int i=0;i<result.size();i++){
    ans=ans+result[i]*pow(2,y);
    y--;
   }
   return ans;
}
int compliment(int x){
    // int m=x;
    // int mask=0;
    // while(m!=0){
    //     mask = (mask << 1) | 1;
    //     m= m >> 1;
    // }
    // int ans= ~x & mask;
    // return ans;

    //2nd approach: 
    vector<int>ans;
    ans=binary(x);
    vector<int>result;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==0){
            result.push_back(1);
        }
        else{
            result.push_back(0);
        }
    }
    int y=decimal(result);
    return y;
     

}
int main(){
    cout<<"enter the number: ";
    int x;
    cin>>x;
    cout<<endl<<"compliment of the number: "<<compliment(x);

    
    return 0;
}