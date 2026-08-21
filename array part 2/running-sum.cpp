    #include <iostream>
    using namespace std;
    void runnigsum(int *arr , int size ,int *res){
        int sum =0;
        for(int i=0; i<size; i++){
        sum = sum+arr[i];
        res[i]=sum;
        }

    for(int j=0; j<size; j++){
        cout<<res[j]<<" ";
    }
    }

    int main() {
        int arr[] = {1,2,3,4,5};
        int size = sizeof(arr)/sizeof(int);
        int res[size];
        runnigsum(arr , size , res);
        return 0;
    }