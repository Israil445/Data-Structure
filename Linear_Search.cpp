#include <bits/stdc++.h>
using namespace std;
int main() {


int arr[] ={10,20,33,46,56,90};

int num =56;
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    if(num == arr [i]){
        cout << " Found At Pos " << i+1 <<endl;
        return 0;
    }
}


cout << "Not Found" <<endl;




    return 0;
}