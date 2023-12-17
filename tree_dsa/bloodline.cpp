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
void solve(node*root,int sum,int &maxsum,int len,int &maxlen){
    if(root==NULL){
        if(len>maxlen){
            maxlen=len;
            maxsum=sum;
        }
        else if(len==maxlen){
            maxsum=max(sum,maxsum);
        }
        return;
    }
    sum=sum+root->data;
    solve(root->left,sum,maxsum,len+1,maxlen);
    solve(root->right,sum,maxsum,len+1,maxlen);
}
int sum(node*root){
    int len=0;
    int sum=0;
    int maxlen=0;
    int maxsum=INT16_MIN;
    solve(root,sum,maxsum,len,maxlen);
    return maxsum;
}
int main(){
   node*root=NULL;
   root=build(root);
   int y=sum(root);
   cout<<"sum of longest bloodline: "<<y<<endl;
   return 0; 
}