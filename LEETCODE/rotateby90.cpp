#include<iostream>
#include<vector>
using namespace std;
void rotate90(vector<vector<int>>&matrix){
    //TAKING TRANSPOSE OF MATRIX: 
    
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    //reversing the rows:

    for(int i=0;i<n;i++){
        int  low=0,high=n-1;
        while(low<high){
            swap(matrix[i][low],matrix[i][high]);
            low++;
            high++;

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>matric={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"matrix before: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matric[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix after rotating by 90 degree: "<<endl;
    rotate90(matric);
    return 0;
}