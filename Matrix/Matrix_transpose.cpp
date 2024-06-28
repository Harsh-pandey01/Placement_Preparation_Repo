#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<vector<int>>matrix(3,vector<int>(3)) ;

cout << " Enter the Elements " << endl ;

for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; ++j){
        cin >> matrix[i][j];
    }
}

// Transpose the matrix 
for(int i = 0 ; i < matrix.size() ; i++){
    for(int j = i ; j < matrix[0].size() ; j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}

for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; ++j){
        cout << matrix[i][j] << " ";
    }
}




    return 0 ;
}