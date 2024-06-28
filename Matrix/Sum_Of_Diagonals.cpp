// We are given an matrix and we have to find the sum of diagonals of the matrix ;

#include<bits/stdc++.h>
using namespace std ;

// diagonalSum function
pair<int,int> diagonalSum(int matrix[][3] , int size){
    int d1 = 0 ; 
    int d2 = 0 ;

    for(int i = 0 ; i < size ; i++){
        d1 = d1 + matrix[i][i] ;
        d2 = d2 + matrix[i][size-1-i];
    }

    return {d1,d2} ;

}


int main(){

// Matrix ;
int matrix [3][3] ;

cout << " enter the Elements " << endl ;

for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ;j < 3 ; ++j){
        cin >> matrix[i][j];
    }
}

pair<int,int>ans = diagonalSum(matrix,3);

cout << "Diagonal sum is " << ans.first << " " << ans.second <<" ";


    return 0 ;
}