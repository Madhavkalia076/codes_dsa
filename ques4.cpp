// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.


#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            if(freq.find(arr[i])==freq.end()){
                freq[arr[i]]=1;
            }
            else{
                freq[arr[i]]++;
            }
        }
        vector<int>ans;
        for(auto i:freq){
            ans.push_back(i.second);
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]){
                    return false;
                }
            }
        }
        return true;
       
    }
    int main(){
        vector<int>a={1,2,2,1,1,3};
        bool ans=uniqueOccurrences(a);
        cout<<"whether there is a unqiue occurence or not: "<<ans;
        cout<<endl;
        return 0;
    }

