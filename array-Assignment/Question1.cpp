// Given an integer array nums, return true if any value appears at least twice in the array, otherwise return false if every element is distinct.

#include <bits/stdc++.h>
using namespace std;

bool checking(int *nums , int size){
    for(int i = 0 ; i<size; i++){
        for(int j=i+1; j<size ; j++){
           if (nums[i]==nums[j]){
            return true;
            break;
           }
        }
    }
    return false;
}

int main() {
    int nums[] = {2,4,7,7,5,1};
    int size = sizeof(nums)/sizeof(int);
    cout<<checking(nums , size);
    return 0;
}