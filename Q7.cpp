#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll n) {
    if(n==0) return 1;
    else {
        return n*factorial(n-1);
    }
}

int main() {

    ll n; cin>>n;
    ll fact=factorial(n);
    cout<<fact<<endl;


    return 0;
}