//  LCA STANDS FOR LOWEST COMMON ANSCESTOR: 
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
node*lca(node*root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node*left=lca(root->left,n1,n2);
    node*right=lca(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left!=NULL && right==NULL){
        return left;
    }
    if(left==NULL && right!=NULL){
        return right;
    }
    else{
        return NULL;
}

}
int main(){
    node*root=NULL;
    root=build(root);
    node*ans;
    int n1, n2;
    cout<<"enter the nodes: "<<endl;
    cin>>n1;
    cin>>n2;
    ans=lca(root,n1,n2);
    cout<<"LCA: "<<ans->data;
    return 0;
}