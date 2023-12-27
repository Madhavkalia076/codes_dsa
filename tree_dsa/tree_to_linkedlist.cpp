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

void convert(node*root){
    node*curr=root;
    while(curr->left){
        if(curr->left){
            node*pred=curr->left;
            while(pred->right){
                pred=pred->right;
            }
            pred->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;
        }
        curr=curr->right;
    }
}
void print(node*root){
    node*temp=root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}
int main(){
    node*root=NULL;
    root=build(root);
    convert(root);
    cout<<"tree into linked list: ";
    print(root);
    return 0;
}
