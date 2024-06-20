// we are given an array only containg elements which are 0 1 and 2 , we have to sort the array which algo 


#include<bits/stdc++.h>
using namespace std ;

void countElement(int arr[] , int size){
    int zeros = 0 ;
    int ones = 0 ;
    int twos = 0 ;

    for(int i = 0 ; i < size ; ++i){
        if(arr[i] == 0){
            zeros++;
        }else if(arr[i] == 1){
            ones++ ;
        }else {
            twos++;
        }
    }
     
    int i = 0 ;
    while(zeros){
      arr[i++] = 0 ;
      zeros-- ;
    }

    while(ones){
        arr[i++] = 1 ;
        ones-- ;
    }

    while(twos){
        arr[i++] = 2 ;
        twos-- ;
    }

}

void dutchFlagAlgo(int *arr , int size){
  
    int low = 0 ;
    int mid = 0 ;
    int high = size-1 ;

   while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid] , arr[low]) ;
            mid++ ;
            low++ ;
        }else if(arr[mid] == 2){
             swap(arr[mid] ,arr[high]) ;
             high -- ;
        }else {
            mid++ ;
        }
   }
    
}


int main(){

int arr[] = {1,0,0,0,1,2,1,1,2,2,0,1,0,2};

int size = sizeof(arr)/sizeof(int) ;

// approach 1 : - Simple count approach ;

countElement(arr,size) ;
cout << "Count Sort method" << endl ;
for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}
cout  << endl ;

cout << "Dutch flag method" << endl ;

dutchFlagAlgo(arr,size) ;
for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}


    return 0 ;
}