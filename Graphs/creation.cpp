#include<iostream>
#include<map>
#include<list>
using namespace std;
template <typename T>

class graph{
public:
    map<T,list<T>>adj;
    void addedge(T u,T v,bool direction){
      // if direction == 0  ---> undirected graph;
      //  if direction == 1 --->directed graph;

      adj[u].push_back(v);
      if(direction==0){
        adj[v].push_back(u);
      }
    }

    void printlist(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }

    }
};
int main(){
    int n,m;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<"enter the number of edges"<<endl;
    cin>>m;
    graph<int>g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);

    }
    g.printlist();
    return 0;
}

