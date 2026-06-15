// #include <bits/stdc++.h>
// using namespace std;


// int main() {

//  int a =10;
//  int *ptr = &a;
 

//  //1. increament and decreament
// //  cout<<ptr<<endl;
// // ptr++; // 4 steps means 4 byte aage chala jayega kyunki integer poiter h charecter pointer me 1 bayte aage jata 
// //  cout<<ptr<<endl;
// //  ptr--;  // same 4 bytr=e peeche aa jata h;
// //  cout<<ptr<<endl;


// //2. addition and subtraction
// cout<<ptr<<endl;
// ptr+=3; // 3 ibteger pointer ke baraber space skip karega
// cout<<ptr<<endl;
// ptr-=3;
// cout<<ptr<<endl;

//     return 0;
// }

// pointer airthmetic using in arr.
// #include <bits/stdc++.h>
// using namespace std;
// void printArr(int *arr,int n){
//     for(int i=0;i<n;i++){
//        cout<<*arr<<endl;
//        arr+=1;
//     }
// }
// int main() {
  
// int arr[5]={1,2,3,4,5};
// printArr(arr,5);
//     return 0;
// }


// subtract of pointer 
#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a =12;
    // int *ptr1 = &a;
    // int *ptr2 = ptr1+3;
    // cout<<ptr1<<"   "<<ptr2<<endl;
    // cout<<ptr2-ptr1<<endl; // 3 becous 3 integre dono pointer ke becch aa sakte h dono ke beech 2 integer ke barabr space h

    // in array
    int arr[20]={1,2,3,4,5,6};
    int *ptr1 = arr;
    int *ptr2 = ptr1+3;
    cout<<*ptr1<<"   "<<*ptr2<<endl;
    cout<<ptr2-ptr1<<endl; // 3 = becous 3 integre element dono pointer ke becch aa sakte h dono ke beech 3 integer ke barabr space h

    ///comparision in pointer
    cout<<(ptr1 < ptr2)<<endl; //1-true, 0-false
    cout<<(ptr1 > ptr2)<<endl;
   
    return 0;
}