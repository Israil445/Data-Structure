#include<bits/stdc++.h>
using namespace std;

bool vis[100];
vector<int>adj[100];

int main() {

    int n,m; cin>>n>>m;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int>q;

    q.push(2);//starting node
    vis[2]=true;

    while(!q.empty()) {
        int node = q.front();
        vis[node]=true;
        q.pop();
        cout<<node<<" ";

        for(auto it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]) {
                q.push(*it);
                vis[*it]=true;
            }
        }
    }cout<<endl;


    return 0;
}