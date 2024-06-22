// We are given an array and we have to find the size of subarray having sum greater than k ;

#include<bits/stdc++.h>
using namespace std ;

int main(){

int A[] = {1, 10, 5, 2, 7};
int k  =  9;

int fPos = 0 ;
int lPos = 0 ;
int ans = INT_MAX ; 
int sum = 0 ;

while(lPos < 5){
    if(sum+A[lPos] > k){
        ans = min(ans,lPos - fPos + 1);
        sum-=A[fPos];
        fPos++;
    }else{
        sum+=A[lPos];
        lPos++;
    }
}

cout <<ans ;

    return 0 ;
}