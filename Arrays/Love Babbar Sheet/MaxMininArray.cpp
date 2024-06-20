// We are given an arry and we have to find the maximum and minimum element of the array 
#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[] = {5,1,7,8,6,4} ;

// Creating two varibles and assigning them some random values
int maxi = INT_MIN ;
int mini = INT_MAX ;

for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; ++i){
    if(arr[i] > maxi){
        maxi = arr[i];
    }else if(arr[i] < mini){
        mini = arr[i];
    }
}

cout << "The maximum and minimum elements are " << maxi <<" "<<mini ;

    return 0 ;
}