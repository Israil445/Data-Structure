#include<bits/stdc++.h>
using namespace std;

const int N=100;
bool vis[N];
vector<int>adj[N];

void dfs(int node) {
    //pre order
    vis[node]=true;
    cout<<node<<" ";

    for(auto it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]){

        }

        else{
            dfs(*it);
        }
    }
}

int main() {

    int n,m; cin>>n>>m;
    int x,y; cin>>x>>y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        
    }


    dfs(1);//starting at node 
    cout<<endl;




    return 0;
}