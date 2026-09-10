#include <bits/stdc++.h>
using namespace std;

void printarr( int arr[] , int n){
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" , ";
   }
}

 void BubbleSort(int *arr , int n){
    for(int i=0; i<n-1; i++){
      
        bool isSwap = false;
            
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
    printarr(arr , n);

 }


int main() {
    // int arr[] = {5,4,1,3,2};
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // int n = sizeof(arr)/sizeof(int);
    BubbleSort(arr , 10);

    return 0;
}

/// time complexity of bubble sort is O(n^2)