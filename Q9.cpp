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


int finding(int B[], int j, int k)
{

    int L=(j*(j-1))/2 + k;
    return B[L-1];

   
}

void solve() {

    int A[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 6, 0},
        {1, 1, 10, 1}
        };

    int row = 4;
    int column = 4;
    int size = (row * (row + 1)) / 2;
    int B[size];


    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (A[i][j] != 0)
            {
                B[k] = A[i][j];
                k++;
            }
        }
    }


    // for(int i=0;i<size;i++){
    //     cout<<B[i]<<" ";
    // }cout<<nl;

     cout << finding(B, 3, 2) << endl;
     cout<< finding(B,4,3)<<endl;

     //B[L-1]=Ajk;
     //L=1/2 * j * (j-1) + k



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