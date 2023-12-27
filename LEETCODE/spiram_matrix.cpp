// Given an m x n matrix, return all elements of the matrix in spiral order.

#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top=0;
        int left=0;
        int bottom=matrix.size()-1;
        int right=matrix[0].size()-1;

        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
            left++;
            }
        }
        return ans;

    }
    int main(){
        vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        cout<<"matrix before: "<<endl;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        vector<int>ans=spiralOrder(matrix);
        cout<<endl<<"spiral traversal of matrix: "<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    }