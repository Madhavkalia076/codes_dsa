#include<iostream>
#include<vector>
using namespace std;
bool is_sorted(vector<int>arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr={1,2,4,6,8};
    bool ans=is_sorted(arr);
    cout<<ans<<endl;
    return 0;
}