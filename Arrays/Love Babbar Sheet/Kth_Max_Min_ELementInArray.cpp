// We are given an array and we are given a K , we have to find the kth maximum and minimum 
// element of the array ..

#include<bits/stdc++.h>
using namespace std ;

// if the elemets are unique
int kthMaxiElement(int arr[] , int k , int size){
    // Using sorting method 
    sort(arr,arr+size) ;
    
    // if the element present are unique 
    return arr[k-1];
}


// If the elements are not unique
int kthElementNoUnique(int arr[] , int k , int size){
    if(k == 1) return arr[size-1];
     
    int temp = size - 2 ;
    int cnt = 1 ;
    while(temp >= 0){
      if(arr[temp]!=arr[temp+1]){
        cnt++ ;
      }
      if(cnt == k){
        return arr[temp];
      }
      
      temp--;
    }
     return -1 ;
}



int main(){
//   Unique elements ...
 int arr[]= {7,10,4,3,20,15} ;

//  Non unique elements ...
 int nums[] = {3,4,4,7,7,10,15,30};
 int size = sizeof(arr)/sizeof(int) ;

 cout << "Enter the value of k" << endl ;
 int k ;
  cin >> k ;

  int kthMaxi = kthMaxiElement(arr,k,size) ;

  cout << "The ans is " << kthMaxi << endl ;
  
  int unqiue = kthElementNoUnique(nums,5,8);

  cout << unqiue << " is the kth maximum element" << endl ;

    return 0 ;
}