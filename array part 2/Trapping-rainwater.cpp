#include <bits/stdc++.h>
using namespace std;

void trapWater(int *heights , int size){
    int totalWater = 0;
    int RightMax[size] , leftMax[size] ;
    leftMax[0]= heights[0] ,  RightMax[size-1] = heights[size-1];
    for (int i=1; i<size; i++){
        leftMax[i] = max(leftMax[i-1] , heights[i-1]);
    }
    cout<<endl;

     for(int i=size-2; i>=0; i--){
        RightMax[i] = max(RightMax[i+1],heights[i+1]);
     }
    cout<<endl;
    for (int i = 0; i<size; i++){
      int currentWater = min(leftMax[i] , RightMax[i]) - heights[i];
      if(currentWater > 0){
        totalWater += currentWater;
      }
    }
  cout<<"Total Water Trapping is = "<<totalWater;
}

int main() {
    int heights[7] = {4,2,0,6,3,2,5};
    int size = sizeof(heights)/sizeof(int);
    trapWater(heights , size);
    return 0;
}