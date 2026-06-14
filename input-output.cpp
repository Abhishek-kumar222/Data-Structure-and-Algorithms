#include <bits/stdc++.h>
using namespace std;

int main() {
   int marks[5] = {1,4,2,5,2,};
   int len = (sizeof(marks)/sizeof(int)); // ab arr ka sahi size milega(lenth)
 cout<<"-----input-----"<<endl;
 for(int i=0;i<len;i++){
    cin>>marks[i];
   }
    
 cout<<"-----output-----"<<endl;
   for(int i=0;i<len;i++){
    cout<<marks[i]<<",";
   }
    
    return 0;
}