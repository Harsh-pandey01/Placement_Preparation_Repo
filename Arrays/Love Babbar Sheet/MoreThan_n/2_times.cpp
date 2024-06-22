// We are given an array and we have to find the element which is occuring more than n/2 times

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>input = {0,1,2,4,5,2,2,2,2,2,2} ;

// Bruteforce Arrpoach :- To count the number of times each elements occur

map<int,int>count ;

for(auto i : input){
    count[i]++ ;
}

// Bruteforce Approach

// for(auto i : count){
//     if(i.second > input.size()/2){
//         cout << "The element is " << i.first <<endl ;
//         break ;
//     }
// }

// Better Apporoach 
// for(auto i : input){
//     count[i]++ ;
//     if(count[i] > input.size()/2) {
//         cout << "Element is " << i <<endl;
//         break ;
//     }
// }

// Optimised Approach

int majority = input[0] ;
int cnt = 1 ;
for(int i = 1 ; i < input.size() ; i++){
    if(cnt == 0){
        cnt = 1 ;
        majority = input[i];
    }else if(input[i] == majority) cnt++;
    else cnt-- ;
}

int numberOfTimes = 0 ;
if(cnt > 0){
    for(int i = 0 ; i < input.size() ; i++){
        if(input[i] == majority) numberOfTimes++;
    }

    if(numberOfTimes > input.size()/2) cout << "Answer is " << majority ;
}


return 0 ;
}

















