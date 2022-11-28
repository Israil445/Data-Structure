// Bubble sort in C++

#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {

    for (int i=0; i<size-1;i++){
        for(int j=i+1;j<size;j++){

            if (array[i] > array[j]) {
                swap (array[i],array[j]);
            }

        }
    }

 
  
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}