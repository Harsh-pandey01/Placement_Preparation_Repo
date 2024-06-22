// We are given an array and a value to k 
// We have to return the minimum number of swaps required to make all element less than k together

#include<bits/stdc++.h>
using namespace std ;

int minSwaps(vector<int>& input , int k ){
    // Count the number of elements which are less than k ;
    int cnt = 0 ;
    for(auto i : input){
        if(i < k )cnt++;
    }
    int i = 0 ;
    int gElem = 0 ;
    int j = i ;
    int ans = INT_MAX ;
    while(j < cnt){
        if(input[j] >= k) {
            gElem++ ;
            
        }
        j++;
    }
    ans = min(ans,gElem) ;
    while(j < input.size()){
       if(input[j] >=k){
        gElem ++ ;
       }
       if(input[i] > k) gElem-- ;

       i++;
       ans = min(ans,gElem) ;
       j++;

    }
    return ans ;
}

int main(){

vector<int> input = {4,7,8,5,3,2,1};

int ans = minSwaps(input,4);

cout << "Minimum swaps are "<<ans <<endl ;

    return 0 ;
}