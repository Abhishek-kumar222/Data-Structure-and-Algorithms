#include <bits/stdc++.h>
using namespace std;


int binarySearch(int *arr, int len, int key,int start,int end){
   while (start<=end)
   {
    int mid = (start+end)/2;
    if(arr[mid]==key){
        return mid;
        break;
    }
    else if(key>arr[mid]){
      start=mid+1;
    }
    else {
        end=mid-1;
    }
   }
    return -1;
   
}
int main() {
    int arr[] ={2,4,6,8,10,12,20,23,56};
    int len = sizeof(arr)/sizeof(int);
    int start=0;
    int end = len-1;
    int key ;
    cout<<"Enter key what you want to search : ";
    cin>>key;
    int res =binarySearch(arr,len,key,start,end);
     cout<<"Your number is at "<<res<<" index ";
    return 0;
}