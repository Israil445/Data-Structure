#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fibo(ll n) {
    if(n==0 || n==1) {
        return n;
    }
    else{
        
        return fibo(n-1)+fibo(n-2);
    }
}

int main() {

    ll n; cin>>n;
    ll arr[n+1];
    for(int i=0;i<=n;i++){
       arr[i]=fibo(i);
    }

    cout<<arr[n-1]<<endl;
    //https://www.youtube.com/watch?v=5Cm41IL-7kQ
   

    return 0;
}