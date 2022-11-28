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

struct node *create_node(struct node *head,int data) {

    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
    
}

void print_List(struct node *head) {
    struct node *ptr=head;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}


void sorting_list(struct node *head) {
    struct node *ptr1=head;int temp;
    struct node *ptr2;
    while(ptr1->link!=NULL) {
        ptr2=ptr1->link;
        while(ptr2!=NULL){

            if(ptr1->data > ptr2->data){
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->link;

        }
        ptr1=ptr1->link;
    }
}



int main() {


    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->link=NULL;

    struct node *ptr;
    ptr=create_node(head,3);
    ptr=create_node(ptr,9);
    ptr=create_node(ptr,42);
    ptr=create_node(ptr,0);
    ptr=create_node(ptr,10);

    printf("Before sorting: ");
    print_List(head);

    sorting_list(head);


    printf("After sorting: ");
    print_List(head);

    //https://www.youtube.com/watch?v=44bOjsy8VhI




  


	return 0;
}