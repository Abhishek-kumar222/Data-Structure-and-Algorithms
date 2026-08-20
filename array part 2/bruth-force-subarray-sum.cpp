#include <iostream>
using namespace std;

void maxsum(int *arr, int size){
    for(int i=0;i<size;i++){
        for(int j=i; j<size;j++){
                int sum = 0;
            for(int k=i; k<=j; k++){
                sum = sum+arr[k];
            }
            cout<<sum;
            cout<<"  ";
        }
        cout<<endl;
    }
}

int main() {
     int arr[] = {2,-3,6,-5,4,2};
     int size = sizeof(arr)/sizeof(int);
     maxsum(arr , size);
    return 0;
}