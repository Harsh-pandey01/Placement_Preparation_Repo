// We are given an array and we have too find the maximum subArray product possible

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int> nums = {6, -3, -10, 0, 2} ; 

// optimised Approach 

int pref = 1 ;
int suff = 1 ;
int ans = 0 ;

for(int i = 0 ; i < nums.size() ; ++i){
    pref*=nums[i] ;
    suff*=nums[nums.size()-i-1];

    ans = max(ans,max(pref,suff));
    if(pref == 0) pref = 1 ;
    if(suff == 0) suff = 1 ;
}

cout <<"Maximum Product is "<<ans ;

    return 0 ;
}