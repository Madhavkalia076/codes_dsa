#include<iostream>
#include<vector>
using namespace std;
 vector<int> uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int count=0;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }

            }
                ans.push_back(count);
                

        }
        return ans;
 }
 int main(){
    vector<int>a={1,2,1,1,3,2};
    vector<int>ans;
    ans=uniqueOccurrences(a);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
 }