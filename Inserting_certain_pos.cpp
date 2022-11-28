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

 struct node {
    int data;
    struct node *link;
 };

 void print(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }cout << nl;
 }

void add_at_pos(struct node *head , int data ,int pos) {

    struct node *ptr = head ;
    struct node *ptr2 = (struct node *) malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;

    while(pos != 1) {
        ptr = ptr->link;
        pos--;

    }

    ptr2 ->link = ptr->link;
    ptr -> link = ptr2;
    

}

int main() {

    struct node *head = (struct node *)malloc(sizeof(struct node));//1000
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *) malloc(sizeof(struct node));//2000
    current->data = 98;
    current->link = NULL;
    head->link = current;

    struct node *current2 = (struct node *) malloc(sizeof(struct node));//3000;
    current2->data = 3;
    current2->link = NULL;
    current->link = current2;

    int data = 67; int pos = 2;
    add_at_pos(head,data,pos);

    print(head);




	return 0;
}