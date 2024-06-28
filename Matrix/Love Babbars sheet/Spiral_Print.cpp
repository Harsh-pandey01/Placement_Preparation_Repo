//   We are given a matrix and we have to print the matrix in spiral order

#include<bits/stdc++.h>
using namespace std ;

void printSpiral(vector<vector<int>>&matrix){
    int rows = matrix.size();
    int cols = matrix[0].size() ;

    int sRow = 0 ;
    int eRow = rows-1 ;
    int sCol = 0 ;
    int eCol = cols-1 ;
    int count = 0 ; 
    int totalCnt = rows*cols ;

    while(count< totalCnt){
        // Top row 
        for(int i = sCol ; i <=eCol && count< totalCnt; i++){
            cout << matrix[sRow][i] <<" ";
            count++;
        }
        sRow++ ;

        // last Columns 
        for(int i = sRow ; i <=eRow && count< totalCnt; i++){
            cout << matrix[i][eCol] <<" ";
            count++;
        }
        eCol--;

        // last Row but opposite order
        for(int i = eCol ; i >= sCol && count< totalCnt; i--){
            cout << matrix[eRow][i] << " ";
            count++;
        }
        eRow--;

        // first Colums
        for(int i = eRow ; i >= sRow && count< totalCnt; i--){
            cout << matrix[i][sCol]<<" ";
            count++;
        }
        sCol++;
    }




}

int main(){

// Created a 2d vector
vector<vector<int>>matrix(3,vector<int>(3)) ;

cout << " Enter the Elements " << endl ;

for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; ++j){
        cin >> matrix[i][j];
    }
}

printSpiral(matrix) ;

    return 0 ;
}
