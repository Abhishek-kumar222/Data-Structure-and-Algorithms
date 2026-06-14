#include <bits/stdc++.h>
using namespace std;


// // both function will work same 

// void changeArr(int arr[]){
//     arr[0]=100;
// }

// void changeArr1(int *arr){
//     arr[0]=100;
// }


void printArr(int *arr,int n){  
    // int n =sizeof(arr)/sizeof(int); // yaha pr arr ek poinetr me badalgya h to iska size integer pointer ke barabar ho gya which is 8 na ki arr ka size ho 20 isliye hum arr ki lenth ko function me calculate nhi kar sakte   
    for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
   }
}


int main() {
    int arr[] = {2,3,5,7,5,3,2};
    // changeArr1(arr);
    // cout<<arr[0];
    int n =sizeof(arr)/sizeof(int);
    printArr(arr,n);

    return 0;
}