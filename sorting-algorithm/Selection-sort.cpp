 #include <bits/stdc++.h>
 using namespace std;
   
 void Print(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }


 void selectionsort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j= i+1; j<n; j++){
            if (arr[j]<arr[minIdx]){
                minIdx = j;
            }
            swap(arr[i] , arr[minIdx]);
        }
    }
    Print( arr , n );
 }

 int main() {
     int nums[5] = {5,4,1,3,2};
     selectionsort(nums , 5);
     return 0;
 }