#include <bits/stdc++.h>
using namespace std;

int main() {


    // int student[3][3] = {{100,100,100},
    //                      {85,74,89,},
    //                      {63,72,65}};

    // cout<<student[2][2]; //65

   ///// // take input from the user

   int arr[3][4];
   for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        // cout << "Enter arr"<<"["<<i<<"]"<<"["<<j<<"] = ";
        cin >> arr[i][j];
    
    }
   }
 
   ///output
   cout << "Array is : "<<endl;

   for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

    return 0;
}