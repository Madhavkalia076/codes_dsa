#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
void buildformlevelorder(node*root){
     queue<node*>q;
     cout<<"enter the data for root "<<endl;
     int data;
     cin>>data;
     root=new node(data);
     q.push(root);
     while(!q.empty()){
        node*temp=q.front();
        q.pop();
        cout<<"enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
     }
}
// void level_order_traversal(node*root){
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node*temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }
int main(){
    node*root=NULL;
    buildformlevelorder(root);
    // level_order_traversal(root);
    return 0;
}