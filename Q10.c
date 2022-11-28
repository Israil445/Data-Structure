#include<stdio.h>
#include<stdlib.h>

#define MAX 50
int queue[MAX];
int rear=-1;
int front=-1;


void insert(int data) {
    if(rear==MAX-1) {
        printf("Overflow\n");
    }
    else{
        if(front==-1) {
            front=0;
        }
        rear+=1;
        queue[rear]=data;
    }
}

void print(){
    if(front==-1){
        printf("Queue is initially empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }printf("\n");
    }
}



int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    print();



    return 0;
}