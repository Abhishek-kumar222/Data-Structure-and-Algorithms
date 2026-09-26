#include <bits/stdc++.h>
using namespace std;

void spiralMatrix( int arr[][4] , int n , int m){
  int Srow = 0, Scol = 0;
  int Erow = n-1 , Ecol = m-1;

while(Srow <= Erow && Scol <= Ecol){
 for(int i=Scol; i<=Ecol; i++){
    cout<<arr[Srow][i]<<" ";
  }

  for(int j=Srow+1; j<=Erow; j++){
    cout<<arr[j][Ecol]<<" ";
  }

  for(int k=Ecol-1; k>=Scol; k--){
    if(Scol==Ecol){
        break;
    }
    cout<<arr[Erow][k]<<" ";
  }

  for(int l=Erow-1; l>=Scol+1; l--){
    if(Scol==Ecol){
        break;
    } 
    cout<<arr[l][Scol]<<" ";
  }

  Srow++;
  Scol++;
  Erow--;
  Ecol--;

}

 
}

int main() {
int arr[4][4]= {{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};
    
 spiralMatrix( arr , 4 ,4);
    return 0;
}