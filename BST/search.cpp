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
 bool search(node*root,int x){
    node*temp=root;
    while(temp!= NULL){
        if(temp->data==x){
            return true;
        }
        else if(temp->data >x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
        
    }
    return false;
 }

 int main(){
    node*root=NULL;
    cout<<"enter the data for the BST: "<<endl;
    takeinput(root);
    cout<<"enter the data to search: ";
    int x;
    cin>>x;
    cout<<search(root,x);
    return 0;
 }