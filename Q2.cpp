#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void heapify(int arr[],int n,int i) {
    int parent=(i-1)/2;

    if(arr[i] > arr[parent]) {
        swap(arr[i],arr[parent]);
        heapify(arr,n,parent);
    }
}

void insert_Node(int arr[],int n,int key) {
    n+=1;//increase the heap size by 1;
    arr[n-1]=key;//insert key at end of heap;

    heapify(arr,n,n-1);



}

int main() {

    /* this is max heap
    https://www.geeksforgeeks.org/insertion-and-deletion-in-heaps/

                10
               /  \  
              5    3 
             / \ 
            2   4   


    */

    //now we will insert this max heap in 15;

    int arr[MAX] = {10,5,3,2,4};
    int n=5;
    int key=15;

    insert_Node(arr,n,key);
    heapify(arr,n,n-1);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    





    return 0;
}