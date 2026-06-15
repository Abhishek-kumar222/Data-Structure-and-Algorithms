// //using extra space copy array

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//      int arr[] = {2,4,6,5,3};
//      int len = sizeof(arr)/sizeof(int);
//      int copyrev[len];

//         for(int j=0; j<len; j++){
//              int i=len-j-1;
//             copyrev[j]=arr[i];
//         }
//         for(int j=0; j<len; j++){
//             arr[j]=copyrev[j];
//         }
//         for(int j=0; j<len; j++){
//         cout<<arr[j]<<",";
//         }
        
//     return 0;
// }



// //without using extra space 
 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
      int arr[] = {6,4,52,3,7,6,3,9,6,3,5,7,9,0,8,7,6,5,3,4};
      int len = sizeof(arr)/sizeof(int);
      int start =0;
      int end=len-1;
    
      while(start<=end){
        //swap
        // int temp = arr[start];
        // arr[start] =arr[end];
        // arr[end] = temp;

        //swap with inbuild funrtion
        swap(arr[start],arr[end]);
        start++;
        end--;
      }
      for(int i=0; i<len;i++){
        cout<<arr[i]<<" ";
      }
     return 0;
 }