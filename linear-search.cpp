#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int len, int key){
  for(int i=0 ; i<len;i++){
    if(arr[i]==key){
        return i;
        break;
    }
  }
   return -1;
}
int main() {
  int arr[] = {2,4,6,8,10,12,14,16,18};  
  int len = sizeof(arr)/sizeof(int);
  int key ;
  cout<<"Enter key what you want to search : ";
  cin>>key;
  cout<<"your key is at "<<linearSearch(arr,len,key)<< " index "<<endl;
    return 0;
}