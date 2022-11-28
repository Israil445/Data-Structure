#include<stdio.h>
#include<stdlib.h>

int MAXSIZE=20;
int stack[20];
int top=-1;


void push(int data){
    if(top==MAXSIZE){
        printf("Stack Overflow\n");
        return;
    }
    else{
        stack[++top]=data;
    }
}

int pop(){
    if(top==-1){
        printf("Underflow\n");
        return -1;
    }
    return stack[top--];
}

int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}

void print(){

    while(!isEmpty()){
        int data=pop();//top element of stack
        printf("%d ",data);

    }printf("\n");

   

}

void print1(){
     for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }printf("\n");

}


int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("Before poping the satck elements is now : \n");
    print1();

    int p=pop();
    printf("The pop element is %d\n",p);
    p=pop();
    printf("The pop element is %d\n",p);
    
    

    printf("After poping the element the stack elements is now: \n");

    print();


    return 0;
}