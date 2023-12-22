#include<iostream>
#include<vector>
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
vector<int> zig_zag(node*root){
    vector<int>result;
    if(root==NULL){
        return result;
    }
    queue<node*>q;
    q.push(root);
    bool flag=true;
    while(!q.empty()){
        int size=q.size();
        vector<int>ans(size);
        for(int i=0;i<size;i++){
            node*temp=q.front();
            q.pop();
            int index=flag?i:size-i-1;
            ans[index]=temp->data;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        flag=!flag;
        for(auto i:ans){
            result.push_back(i);
        }
    }
        return result;
}
int main(){
    node*root=NULL;
    root=build(root);
    vector<int>ans;
    cout<<"zig-zag traversal"<<endl;
    ans=zig_zag(root);
    int y=ans.size();
    for(int i=0;i<y;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}