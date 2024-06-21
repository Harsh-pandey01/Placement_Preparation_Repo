// We are given an array showing the daily price of a stock

// We want to have maximum profit at once

#include<bits/stdc++.h>
using namespace std ;

int maxProfit(vector<int>&prices){
    int mini = prices[0] ;
    int ans = 0 ;
    for(int i = 1 ; i < prices.size() ; i++){
        ans = max(ans, prices[i] - mini) ;
        if(prices[i] < mini) mini = prices[i] ;
    }

    return ans ;
}

int main(){

vector<int> prices = {10,15,22,25,45,3,98};

cout << "The maxProfit we get is " << maxProfit(prices) << endl ;


    return 0 ;
}