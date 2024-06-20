// We are given an array and we have to rotate the array to one place left

#include<bits/stdc++.h>
using namespace std ;

void leftRotate(int arr[] , int size){
    for(int i = size-1 ; i>0 ; i--){
        swap(arr[i],arr[i-1]);
    }
}

int main(){

int arr[] = {1,2,3,4,5};
int size = 5 ;

leftRotate(arr,size) ;

for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " " ;
}

    return 0 ;
}