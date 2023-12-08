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
node*buildtree(node*root){
    cout<<"enter the data ";
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new node(data);
    cout<<"enter data for inserting in the left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in the right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}
int main(){
    node*root=NULL;
    root=buildtree(root);
    return 0;
}