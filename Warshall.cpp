#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int D[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>D[i][j];
        }
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){\
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<D[i][j]<<" ";
        }cout<<endl;
    }




    return 0;
}