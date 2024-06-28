// We are given a matrix and we have to print the matrix in wave form

#include<bits/stdc++.h>
using namespace std ;

void printMatrix(vector<vector<int>> &matrix){
    int rows = matrix.size() ;
    int cols = matrix[0].size() ;

    for(int col = 0 ; col < cols ; col++){
        if(col%2 == 0){
            // if even then top to bottom
            for(int row  = 0 ;row < rows ; row++){
                cout << matrix[row][col] << " ";
            }
        }else{
            for(int row  = rows-1 ;row >=0  ; row--){
                cout << matrix[row][col] << " ";
            }
        }
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

// Printing the matrix in wave form
printMatrix(matrix);

    return 0 ;
}
