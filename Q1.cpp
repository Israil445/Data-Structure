#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  "\n"

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data) {
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

void add_left_child(struct node *parent,struct node *child) {
    parent->left=child;
}

void add_right_child(struct node *parent , struct node *child) {
    parent->right=child;
}

void pre_order(struct node *node) {
    if(node==NULL) return;
    printf("%d ",node->data);
    pre_order(node->left);
    pre_order(node->right);
}

void in_order(struct node *node) {
    if(node==NULL) return ;
    in_order(node->left);
    printf("%d ",node->data);
    in_order(node->right);
}


void post_order(struct node *node) {
    if(node==NULL) return;
    post_order(node->left);
    post_order(node->right);
    printf("%d ",node->data);
}


void Bst_insert(struct node *root,int data) {
    struct node *node=root;
    struct node *insert_node=create_node(data);
    int pos=0;
    struct node *current_node;

    while(node!=NULL) {
        pos++;
        current_node=node;
        if((node->data) > data) {
            node=node->left;
        }
        else if((node->data) < data) {
            node=node->right;
        }
        else{
            printf("%d is already inserted at level %d\n",data,pos);
            return;
        }
        
    }

    if((current_node->data) > data) {
        add_left_child(current_node,insert_node);
    }
    else{
        add_right_child(current_node,insert_node);
    }
}

int main() {

    struct node *ten=create_node(10);
    struct node *five=create_node(5);
    struct node *seventeen=create_node(17);

    add_left_child(ten,five);
    add_right_child(ten,seventeen);

    struct node *three=create_node(3);
    struct node *seven=create_node(7);
    add_left_child(five,three);
    add_right_child(five,seven);

    struct node *twelve=create_node(12);
    struct node *ninetheen=create_node(19);
    add_left_child(seventeen,twelve);
    add_right_child(seventeen,ninetheen);

    struct node *one=create_node(1);
    struct node *four=create_node(4);
    add_left_child(three,one);
    add_right_child(three,four);

    //pre_order traversal in tree
    // pre_order(ten);//here 10 is the root node
    // printf("\n");

    //in_order traversal in tree

    in_order(ten);
    printf("\n");

    // post_order(ten);
    // printf("\n");

    Bst_insert(ten,8);
    Bst_insert(ten,100);
    Bst_insert(ten,19);

    in_order(ten);
    printf("\n");







}