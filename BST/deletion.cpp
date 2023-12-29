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

node* minvalue(node*&root){
    node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

node*deletefromBST(node*root,int data){
    if(root==NULL){
        return root;
    }

    if(root->data==data){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if(root->left!=NULL && root->right==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
       if(root->left!= NULL && root->right!=NULL){
        int mini=(minvalue(root->right))->data;
        root->data=mini;
        root->right=deletefromBST(root->right,mini);
       }

    }

    else if(root->data > data){
        root->left=deletefromBST(root->left,data);

    }
    else{
        root->right=deletefromBST(root->right,data);
    }
}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
int main(){
    node*root=NULL;
    cout<<"enter the data for the BST: "<<endl;
    takeinput(root);
    cout<<"enter the data you want to delete: ";
    int data;
    cin>>data;
    root=deletefromBST(root,data);
    levelOrderTraversal(root);
    return 0;
}