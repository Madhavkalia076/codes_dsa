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
node*build(node*root){
    cout<<"enter the data :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the root to the left of "<<data<<endl;
    root->left=build(root->left);
    cout<<"enter the root of the right of"<<data<<endl;
    root->right=build(root->right);
    return root;
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void buildfromlevelorder(node*root){
    queue<node*>q;
    cout<<"enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        cout<<"enter the left node for :"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
            
        }
        cout<<"enter the right node for :"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);

        }
    }
}

int main(){
    node*root=NULL;
    buildfromlevelorder(root);
    cout<<"inorder traversal :"<<endl;
    inorder(root);
    cout<<endl;
    
    
    cout<<"preorder traversal :"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal :"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
