// We are given an array and a number and we have to find all the possible number of pairs having sum equal to num


#include<bits/stdc++.h>
using namespace std ;

int pairSum(vector<int>arr, int k) {
        map<int,pair<bool,int>>present ;
        int ans = 0 ;
        for(int i = 0 ; i < arr.size(); i++){
            int rem = k - arr[i] ; 
            if(present[rem].first){
                ans+=present[rem].second ;
            }
            present[arr[i]].first = true ;
            present[arr[i]].second += 1 ;
        }
        
        return ans ;
    }

int main(){

vector<int>temp(5);

cout << "Enter the 5 values "<<endl ;

for(int i = 0 ; i < 5 ; i++){
    cin >> temp[i];
}

cout<<"Enter the sum value"<<endl ;
int sum ;
cin >> sum ;

cout << "The total pairs having sum is" << pairSum(temp,sum);

    return 0 ;
}