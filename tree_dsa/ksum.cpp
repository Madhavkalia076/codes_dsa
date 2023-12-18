#include<iostream>
#include<vector>
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
void solve(node*root,int k,int &count,vector<int>path){
    if(root==NULL){
        return;
    }
    path.push_back(root->data);
    solve(root->left,k,count,path);
    solve(root->right,k,count,path);
    int size=path.size();
    int sum=0;
    for(int i=size-1;i>=0;i--){
        sum=sum+path[i];
        if(sum==k){
            count++;
        }
    }
    path.pop_back();
}
int count(node*root,int k){
    vector<int>path;
    int count=0;
    solve(root,k,count,path);
    return count;
}
int main(){
    node*root=NULL;
    root=build(root);
    int ans=0;
    int k;
    cout<<"enter the sum: "<<endl;
    cin>>k;
    ans=count(root,k);
    cout<<" no. of path making the sum "<<k<<" is: "<<ans<<endl;
    return 0;

}