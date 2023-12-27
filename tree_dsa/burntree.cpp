#include<iostream>
#include<vector>
#include<map>

#include<queue>
using namespace std;
class Node{
public:
 int data;
 Node*left;
 Node*right;
  Node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};
Node *build(Node*root){
    cout<<"enter the data: ";
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data to the left of "<<data<<endl;
    root->left=build(root->left);
    cout<<"enter the data to the right of "<<data<<endl;
    root->right=build(root->right);
    return root;
}
Node*createparentmapping(Node*root,int target,map<Node*,Node*>&nodetoParent){
         Node*res=NULL;
         queue<Node*>q;
         q.push(root);
         nodetoParent[root]=NULL;
         
         while(!q.empty()){
             Node*front=q.front();
             q.pop();
             if(front->data==target){
                 res=front;
             }
             if(front->left){
                 nodetoParent[front->left]=front;
                 q.push(front->left);
             }
             if(front->right){
                 nodetoParent[front->right]=front;
                 q.push(front->right);
             }
         }
         return res;
     }
     
     int burntree(Node*targetnode,map<Node*,Node*>&nodetoParent){
         map<Node*,bool>visited;
         queue<Node*>q;
         q.push(targetnode);
         visited[targetnode]=true;
         int ans=0;
         
         while(!q.empty()){
             bool flag=0;
             int size=q.size();
             for(int i=0;i<size;i++){
                 Node*front=q.front();
                 q.pop();
                 if(front->left && !visited[front->left]){
                     flag=1;
                     q.push(front->left);
                     visited[front->left]=1;
                 }
                 if(front->right && !visited[front->right]){
                     flag=1;
                     q.push(front->right);
                     visited[front->right]=1;
                 }
                 if(nodetoParent[front] && !visited[nodetoParent[front]]){
                     flag=1;
                     q.push(nodetoParent[front]);
                     visited[nodetoParent[front]]=1;
                 }
             }
             if(flag==1){
                 ans++;
             }
         }
         return ans;
     }
  
    int minTime(Node* root, int target) 
    {
        map<Node*,Node*>nodetoParent;
        Node*targetnode=createparentmapping(root,target,nodetoParent);
        int result=burntree(targetnode,nodetoParent);
        return result;
    }
    int main(){
        Node*root=NULL;
        root=build(root);
        cout<<"enter the target node: "<<endl;
        int target;
        cin>>target;
        cout<<"minimum time to burn the whole tree: "<<minTime(root,target);
        return 0;
    }
