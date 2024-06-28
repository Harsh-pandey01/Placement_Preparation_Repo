// We are given a matrix and we have to reverse each row of the matrix

#include<bits/stdc++.h>
using namespace std ;

int main(){

int matrix [3][3] ;

cout << " enter the Elements " << endl ;

for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ;j < 3 ; ++j){
        cin >> matrix[i][j];
    }
}

// reversing the rows 
for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j <= 1 ; j++){
        swap(matrix[i][j],matrix[i][3-j-1]);
    }
}

for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ;j < 3 ; ++j){
        cout <<  matrix[i][j]<< " " ;
    }
}


}