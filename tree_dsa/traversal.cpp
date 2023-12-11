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
    cout<<"enter the data: ";
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
// void inorder(node*root){  //LNR
//     if(root==NULL){
//         return;

//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }


// void preorder(node*root){  NLR
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node*root=NULL;
    root=build(root);
    // inorder(root);
    // preorder(root);
    postorder(root);
    return 0;
}