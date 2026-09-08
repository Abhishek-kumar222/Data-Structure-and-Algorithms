#include <bits/stdc++.h>
using namespace std;

void maxsum(int *arr, int size){
    int maxSum = INT_MIN;
    for(int i=0;i<size;i++){
                int sum = 1;
        for(int j=i; j<size;j++){
            sum = sum * arr[j];
           maxSum = max(sum , maxSum);
        }
    }
    cout<<"maxSum of this Array = "<<maxSum;
}

int main() {
     int arr[] = {2,3,-2,4};
     int size = sizeof(arr)/sizeof(int);
     maxsum(arr , size);
    return 0;
}


