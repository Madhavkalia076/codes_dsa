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
node*solve(node*root,int &k,int Node){
    if(root==NULL){
        return NULL;
    }
    if(root->data==Node){
        return root;
    }
    node*left=solve(root->left,k,Node);
    node*right=solve(root->right,k,Node);

    if(left!=NULL && right==NULL){
        k--;
        if(k<=0){
            k=INT8_MAX;
            return root;
        }
        return left;
    }
    if(left==NULL && right!=NULL){
        k--;
        if(k<=0){
            k=INT8_MAX;
            return root;
        }
        return right;
    }
    else{
        return NULL;
    }
}
int kth_ancestor(node*root,int k,int Node){
    node*ans=solve(root,k,Node);
    if(ans==NULL || ans->data==Node){
        return -1;
    }
    return ans->data;
}
int main(){
    node*root=NULL;
    root=build(root);
    cout<<"enter the node value: ";
    int node;
    cin>>node;
    cout<<endl<<"enter the kth value: ";
    int k;
    cin>>k;
    int ans=kth_ancestor(root,k,node);
    cout<<k<<"th ancestor of "<<node<<" is "<<ans<<endl;
    return 0;

}