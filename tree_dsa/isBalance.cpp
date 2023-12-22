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
pair<bool,int>isbalanced(node*root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    pair<bool,int>left=isbalanced(root->left);
    pair<bool,int>right=isbalanced(root->right);
    bool left_ans=left.first;
    bool rightans=right.first;
    bool diff=abs(left.second-right.second)<=1;
    pair<bool,int>ans;
    ans.second=max(left.second,right.second)+1;
    if(left_ans && rightans && diff){
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    return ans;
}
bool balanced(node*root){
    return isbalanced(root).first;
}
int main(){
    node*root=NULL;
    root=build(root);
    bool ans=balanced(root);
    cout<<"is tree balanced : "<<ans;
    return 0;
}