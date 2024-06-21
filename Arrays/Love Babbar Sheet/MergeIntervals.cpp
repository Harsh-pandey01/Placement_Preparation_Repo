// We are given a vector of vector and we have to find the merged intervals of all

/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
*/ 


#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end()) ;
        vector<vector<int>>ans ;
        for(int i = 0 ; i < intervals.size() ; i++){
            if(ans.size() == 0){
                ans.push_back(intervals[i]) ;
            }else{
                if(intervals[i][0] <= ans.back()[1]){
                 ans.back()[1] = max(intervals[i][1],ans.back()[1]);
                }else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans ;
    }

int main(){

vector<vector<int>>input(4,vector<int>(2));

for(int i = 0 ; i < input.size() ; ++i){
    cout << "Enter the interval " <<endl  ;
    for(int j = 0 ; j < 2 ; j++){
        cin >> input[i][j];
    }
}

cout << endl ;

cout << " The Intervals are " << endl ;
for(int i = 0 ; i < input.size() ; ++i){
   
    cout << "[" <<" ";
    for(int j = 0 ; j < 2 ; j++){
        cout << input[i][j] << " ";
    }
    cout << "]" <<" " ;
    
}

vector<vector<int>>ans = merge(input); 

cout << endl ;
cout << " Merged intervals are "<<endl ;

for(int i = 0 ; i < ans.size() ; ++i){
   
    cout << "[" <<" ";
    for(int j = 0 ; j < 2 ; j++){
        cout << ans[i][j] << " ";
    }
    cout << "]" <<" " ;
    
}


    return 0 ;
}