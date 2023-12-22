#include<iostream>
using namespace std;
class node{
public:
 int data;
 node*left;
 node*right;
  node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};
node *build(node*root){
    cout<<"enter the data: ";\
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data to the left of "<<data<<endl;
    root->left=build(root->left);
    cout<<"enter the data to the right of "<<data<<endl;
    root->right=build(root->right);
    return root;
}
pair<int,int>solve(node*root){
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;
    }
    pair<int,int>left=solve(root->left);
    pair<int,int>right=solve(root->right);
    
    pair<int,int>ans;
    ans.first=root->data + left.second + right.second;
    ans.second=max(left.first,left.second) + max(right.first,right.second);
    return ans;
}
int maxsum(node*root){
    pair<int,int>ans=solve(root);
    return max(ans.first,ans.second);
}
int main(){
    node*root=NULL;
    root=build(root);
    cout<<"maxsum : "<<maxsum(root);
    return 0;
}