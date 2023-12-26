// Given an integer numRows, return the first numRows of Pascal's triangle

#include<iostream>
#include<vector>
using namespace std;

vector<int>generaterow(int row){
    vector<int>rowans;
    rowans.push_back(1);
    long long ans=1;
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        rowans.push_back(ans);

    }
    return rowans;
}
vector<vector<int>>pascal(int rows){
    vector<vector<int>>ans;
    for(int i=1;i<=rows;i++){
        ans.push_back(generaterow(i));
    }
    return ans;

}
int main(){
    cout<<"enter the number of rows"<<endl;
    int rows;
    cin>>rows;
    vector<vector<int>>ans=pascal(rows);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}