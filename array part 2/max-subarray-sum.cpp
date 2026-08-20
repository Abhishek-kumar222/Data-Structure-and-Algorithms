#include <bits/stdc++.h>
using namespace std;

void maxsum(int *arr, int size){
    int maxSum = INT_MIN;
    for(int i=0;i<size;i++){
                int sum = 0;
        for(int j=i; j<size;j++){
            sum = sum + arr[j];
           maxSum = max(sum , maxSum);
        }
    }
    cout<<"maxSum of this Array = "<<maxSum;
}

int main() {
     int arr[] = {2,-3,6,-5,4,2};
     int size = sizeof(arr)/sizeof(int);
     maxsum(arr , size);
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

void maxsum(int *arr, int size){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0;i<size;i++){
            sum = sum + arr[i];
           maxSum = max(sum , maxSum);
           if(sum <0){
            sum=0;
           }
    }
    cout<<"maxSum of this Array = "<<maxSum;
}

int main() {
     int arr[] = {2,-3,6,-5,4,2};
     int size = sizeof(arr)/sizeof(int);
     maxsum(arr , size);
    return 0;
}