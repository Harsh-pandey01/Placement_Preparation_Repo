// We are given two subarray and we have to say that if A is Subset of B or not

#include<bits/stdc++.h>
using namespace std ;

string isSubset(int a1[], int a2[], int n, int m) {
    if(m > n){
        return "No";
    }
    map<int,pair<bool,int>>present ;
    for(int i = 0 ; i < n ;i++){
        present[a1[i]].first=true ;
        present[a1[i]].second++ ;
    }
    for(int i = 0 ; i < m ; i++){
        if(present[a2[i]].first == false) return "No";
        else{
            if(present[a2[i]].second == 0) return "No";
            else{
                present[a2[i]].second-- ;
            }
        }
    }
    return "Yes";
}

int main(){

int a1[] = {11, 7, 1, 13, 21, 3, 7, 3};
int a2[] = {11, 3, 7, 1, 7};

cout << "the answer is" << isSubset(a1,a2,8,5);

    return 0 ;
}