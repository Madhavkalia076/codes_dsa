#include<iostream>
#include<queue>
#include<vector>
#include<map>
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
vector<int>vertical(node*root){
    map<int,map<int,vector<int> > >nodes;
    queue<pair<node*,pair<int,int> > >q;
    vector<int>ans;
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty()){
        pair<node*,pair<int,int>>temp=q.front();
        q.pop();
        node*front=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.second;
        nodes[hd][lvl].push_back(front->data);
        if(front->left){
            q.push(make_pair(front->left,make_pair(hd-1,lvl+1)));
        }
        if(front->right){
            q.push(make_pair(front->right,make_pair(hd+1,lvl+1)));
        }


    }
    for(auto i:nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}
int main(){
    node*root=NULL;
    root=build(root);
    vector<int>ans;
    ans=vertical(root);
    cout<<"vertical traversal :"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

