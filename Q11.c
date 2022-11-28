#include<stdio.h>

#define MAX 50
int queue[MAX];
int rear=-1;
int front=-1;

void insert(int data){
    if(rear==MAX-1){
        printf("Queue Overflow\n");
    }
    else{
        if(front==-1){//if queue is initially empty
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

void del(){
    if(front==-1){
        printf("Queue Underflow\n");
    }

    else{
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }

}


int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    printf("Before Deleting: ");
    print();

    del();//delete front element
    del();//delete 2nd front element from queue

    printf("After Deleting: ");
    print();



    return 0;
}