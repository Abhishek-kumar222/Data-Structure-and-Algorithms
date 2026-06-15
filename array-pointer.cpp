#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 12;
  int *ptr = &a;

  int b=34;
 ptr = &b;  //here we change the value of pointer
 cout<<*ptr;
    
 int arr[5];
   cout<<arr; //arr is like poiter poitfirst index value anf it is constant
//   arr=&b;  we cannot change

    return 0;
}