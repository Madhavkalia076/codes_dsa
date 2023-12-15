#include<iostream>
#include<vector>
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
void traverseleft(node*root,vector<int>&ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
    traverseleft(root->left,ans);
    }
    else{
    traverseleft(root->right,ans);
    }
}

void traverseleaf(node*root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    
    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);
}

void traverseright(node*root,vector<int>&ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->right){
    traverseright(root->right,ans);
    }
    else{
    traverseright(root->left,ans);
    }
    ans.push_back(root->data);
}
vector<int>boundary_traversal(node*root){
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    ans.push_back(root->data);
    traverseleft(root->left,ans);
    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);
    traverseright(root->right,ans);
    return ans;
}
int main(){
    node*root=NULL;
    root=build(root);
    vector<int>ans;
    ans=boundary_traversal(root);
    cout<<"boundary traversal: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}