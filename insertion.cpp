//Bismillah Hir Rehmanir Rahim
//Allah knows best
#pragma GCC optimize("Ofast")
#pragma  GCC optimize ("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define   ll        long long
#define   lli       long long int
#define   ld        long double
#define   lll       __int128
#define   PI        2*acos(0.0)
#define   pb        push_back
#define   ppb       pop_back
#define   pf        push_front
#define   ppf       pop_front
#define   inf       1e18
#define   mod       100000007
#define   ff        first
#define   ss        second
#define   mp        make_pair
#define   vi        vector<int>
#define   si        set<int>
#define   ii        pair<int,int>
#define   all(v)    (v).begin(),(v).end()
#define   rall(v)   (v).begin(),(v).end(),greater<ll>()
#define   rall1(v)  (v).rbegin(),(v).rend()
#define   uniq(v)   (v).erase(unique(all(v)),(v).end())
#define   read(v)   for(auto &it:v) cin>>it
#define   write(v)  for(auto &it:v) cout<<it<<" "
#define   GCD(a,b)   __gcd(a,b)
#define   nl         "\n"
#define   lb         lower_bound
#define   up         upper_bound
#define   loop(i,a,b) for(int i=a;i<=b;i++)
#define   setbits(x)  __builtin_popcountll(x)
#define   zrbits(x)   __builtin_ctzll(x)
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

void solve() {
    /*
    insertion at last position at 10


   int arr[10] = {1,2,3,4,5,6,7,8,9};
    
    for(int i=0; i<9 ;i++){
        cout <<arr[i] << " ";
    }cout << endl;

    arr[10-1] = 10;

    for(int i=0; i<10 ;i++){
        cout <<arr[i] << " ";
    }cout << endl;

*/


// insert any position 

int arr[50] = {10,20 ,30 ,40, 50};

int num =100; int pos = 3 ;
int size = 5;//array current element number 

for(int i= size-1; i>=pos-1 ;i--){
    arr[i+1] =arr[i];
}

arr[pos-1] = num;
size++;

for (int i=0;i<size;i++){
    cout <<arr[i] << " ";
}cout <<endl;



}

int main() {

   ios_base::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);

   // #ifndef ONLINE_JUDGE
   //  freopen("input.txt" ,  "r" , stdin);
   // // freopen("output.txt" , "w" , stdout);
   // #endif

      solve();


	return 0;
}