#include<iostream>
#include<queue>
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
 int solve(node*root,int i,int k){
    if(root==NULL){
        return -1;
    }
    int left=solve(root->left,i,k);
    if(left!=-1){
        return left;
    }
    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right,i,k);
 }
 int smallestkth(node*root,int k){
    int i=0;
    return solve(root,i,k);
 }
 int main(){
    node*root=NULL;
    cout<<"enter the data for the BST: "<<endl;
    takeinput(root);
    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    cout<<endl<<"smallest kth element in the BST is: "<<smallestkth(root,k);
    return 0;
    
 }