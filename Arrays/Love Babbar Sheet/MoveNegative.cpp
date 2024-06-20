/* Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
 */

#include<bits/stdc++.h>
using namespace std ;

void moveNeg1(int arr[] , int size){

    int pos = 0 ;
    int neg = 0 ;
    while(neg < size){
        if(arr[neg] < 0){
            swap(arr[pos],arr[neg]) ;
            pos++ ;
        }
        neg++ ;
    }

}


int main(){

int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6}; 
int size = sizeof(arr) / sizeof(int) ;

// Case 1 :- When the order is not important

 moveNeg1(arr,size) ;
 for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}

    return 0 ;
}






