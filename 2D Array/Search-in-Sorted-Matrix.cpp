// #include <bits/stdc++.h>
// using namespace std;

// int SearchKey(int matrix[][4], int n , int m, int key){
//      for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(matrix[i][j] == key){
//                 cout<<"key is available in index :"<<i<<","<<j;
//             }
//         }
//      }
//  return -1;
// }

// int main() {
//     int matrix[4][4] = {{10,20,30,40},
//                         {15,25,35,45},
//                         {27,29,37,48},
//                         {32,33,39,50}};

//      SearchKey( matrix , 4 ,4, 40);                   
//     return 0;
// }



/////Staircase Approach


#include <bits/stdc++.h>
using namespace std;

 bool SearchKey1( int matrix[][4] , int n, int m, int key){
    int i = 0 , j = m-1;

    while(i < n && j>=0){
        if(matrix[i][j] == key){
            cout<< "found at cell : " << i << "," << j;
            return true;
        }else if(matrix[i][j]>key){
             j--;
        }else{
            i++;
        }
    }
    cout<<"key not found";
    return false;
 }

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};

     SearchKey1( matrix , 4 ,4, 400);                   
    return 0;
}