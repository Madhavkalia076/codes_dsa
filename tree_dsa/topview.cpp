#include<iostream>
#include<vector>
#include<map>
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

 vector<int> topView(node *root)
    {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int,int>Node;
        queue<pair<node*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<node*,int>temp=q.front();
            q.pop();
            node*frontnode=temp.first;
            int hd=temp.second;
            
            if(Node.find(hd)==Node.end()){
                Node[hd]=frontnode->data;
                
            }
            
            if(frontnode->left){
                q.push(make_pair(frontnode->left,hd-1));
            }
            if(frontnode->right){
                q.push(make_pair(frontnode->right,hd+1));
            }
        }
        for(auto i:Node){
            ans.push_back(i.second);
        }
        return ans;
    }
        
    int main(){
        node*root;
        root=NULL;
        root=build(root);
        cout<<"top view of tree: "<<endl;
        vector<int>ans;
        ans=topView(root);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    }