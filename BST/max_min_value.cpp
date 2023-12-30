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
 node*insertintoBST(node*root,int data){
    if(root==NULL){
        root=new node(data);
        return root;

    }
    if(data>root->data){
        root->right=insertintoBST(root->right,data);
    }
    else{
        root->left=insertintoBST(root->left,data);
    }
    return root;
 }

 void takeinput(node*&root){
    int data;
    cin>>data;
    while(data!=-1){
       root=insertintoBST(root,data);
       cin>>data;
    }
 }

int minvalue(node*&root){
    node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

 int maxvalue(node*&root){
    node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
 }
 int main(){
    node*root=NULL;
    cout<<"enter the data for the BST: "<<endl;
    takeinput(root);
    cout<<"maximum value in BST: "<<endl;
    int x=maxvalue(root);
    cout<<x<<endl;
    cout<<"minimum value in BST: "<<minvalue(root);
    return 0;
 }