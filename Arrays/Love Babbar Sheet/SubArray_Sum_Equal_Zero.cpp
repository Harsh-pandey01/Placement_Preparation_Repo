// We are given an array and we have to find if there is any subArray having sum equal to zero

#include<bits/stdc++.h>
using namespace std ;

 bool subArrayExists(int arr[], int n)
    {
        // Approach 1:- Bruteforxe approach
        
        // for(int i = 0 ; i < n ; i++){
        //     int sum = 0 ;
        //     for(int j = i ; j < n ; j++){
        //         sum+=arr[j] ;
        //         if(sum == 0) return true ;
        //     }
        // }
        // return false ;
        
        
        // Approach 2 :- Using the hashmap
        map<int,int>present ;
        int sum = 0 ;
        for(int i = 0 ; i < n; i++){
            sum+=arr[i];
            if(sum == 0){
                return true ;
            }else{
                int rem = -sum ;
                if(present.find(rem)!= present.end()){
                    return true ;
                }
                present[-sum] = i ; 
            }
        }
        return false ;
    }

int main(){

int arr[] = {4,2,-3,1,6} ;
int size = 5 ;

cout<<"The subarray is Present" << subArrayExists(arr,size) ;

    return 0 ;
}