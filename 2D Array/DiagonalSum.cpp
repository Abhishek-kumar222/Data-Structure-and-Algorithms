#include <bits/stdc++.h>
using namespace std;

void DiagonalSum( int matrix[][3] , int n , int m){
    int sum = 0;

    /// O(n^2)

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(i == j){
//               sum += matrix[i][j];
//             }else if(j == n-i-1){
//               sum += matrix[i][j];
//         }
//     }
//   }

/// O(n)

  for(int i=0; i<n; i++){
    sum += matrix[i][i];
    if(i!=n-1-i){
        sum += matrix[i][n-i-1];
    }
  }


  cout<<"sum is = "<<sum;
}

int main() {

 // even matrix   
int matrix[4][4]= {{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};

  // odd matrix  
int matrix1[3][3]= {{1,2,3},
                    {5,0,7},
                    {9,10,11}};                
    
    DiagonalSum(matrix1 , 3 ,3);
    return 0;
}