#include<stdio.h>
#include<stdlib.h>

int MAXSIZE=10;
int stack[10];
int top=-1;

bool isFull() {
    if(top==MAXSIZE){
        return true;
    }
    return false;
}

void push(int data) {
    if(!isFull()) {
        top+=1;
        stack[top]=data;
    }
    else{
        printf("stack overflow");
    }
}

bool isEmpty(){
    if(top==-1) return true;
    return false;
}

int pop() {
    int data;
    if(!isEmpty()){
        data=stack[top];
        top-=1;
        return data;
    }

  else  {
    printf("Stack is empty\n");
    return 0;
  }
}

void print() {
    while(!isEmpty()){
        int data = pop();
        printf("%d ",data);
    }printf("\n");
}

int main() {

    push(3);
    push(4);
    push(5);
    push(9);

    print();

    return 0;
}