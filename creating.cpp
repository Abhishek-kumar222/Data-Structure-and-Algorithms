#include <bits/stdc++.h>
using namespace std;

int main() {
   int marks[5] = {1,4,2,5,2,};
   cout<<sizeof(marks)<<endl;///becouse ek int ka size 4byte hota h is arry me 5 h to size 5x4 = 20 ho gya 
   cout<<(sizeof(marks)/sizeof(int))<<endl; // ab arr ka sahi size milega
    
    return 0;
}