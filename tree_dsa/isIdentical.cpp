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
bool isidentical(node*r1,node*r2){
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL && r2!=NULL){
        return false;
    }
    if(r1!=NULL && r2==NULL){
        return false;
    }
    bool left=isidentical(r1->left,r2->left);
    bool right=isidentical(r1->right,r2->right);
    bool value=r1->data==r2->data;
    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    node*r1=NULL;
    node*r2=NULL;
    cout<<"enter the data for tree 1: "<<endl;
    r1=build(r1);
    cout<<"enter the data for tree 2: "<<endl;
    r2=build(r2);
    cout<<"is trees are balanced: "<<isidentical(r1,r2)<<endl;
    return 0;
}