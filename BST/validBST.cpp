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
node*insertintoBST(node*root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertintoBST(root->right,d);
    }
    else{
        root->left=insertintoBST(root->left,d);
    }
    return root;
}
void takeinput(node*root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
    }
}
bool isBST(node*root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data >= min && root->data <= max){
        bool left=isBST(root->left,min,root->data);
        bool right=isBST(root->right,root->data,max);
        return left && right;
    }
    else{
        return false;
    }
}
bool isvalidBST(node*root){
    return isBST(root,INT64_MIN,INT64_MAX);
}
int main(){
     node*root=NULL;
    cout<<"enter the data for the BST: "<<endl;
    takeinput(root);
    cout<<endl;
    cout<<"is tree a valid BST  or not"<<isvalidBST(root);
    return 0;
}