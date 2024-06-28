// We are given an array and wehave to search the element in the matrix

#include<bits/stdc++.h>
using namespace std ;

bool checkTarget(vector<vector<int>>matrix , int target , int rows , int cols){
    // bruteforce Approach is to triverse the emtire matrix and seach for target

    // Better approach ;

    //  for(int i = 0 ; i < matrix.size() ; i++){
    //         if(target >= matrix[i][0] && target <= matrix[i][cols-1]){
    //             // We will use binary search in that
    //             int start = 0 ;
    //             int end = cols-1 ;
    //             while(start <= end){
    //                 int mid = start+end / 2 ;
    //                 if(matrix[i][mid] == target) return true ;
    //                 else if(matrix[i][mid] < target) start++;
    //                 else end-- ;
    //             }
    //             return false ;
    //         }
    //     }
    //     return false ;

//  Optimsed Approach -------------------------------------------

int start = 0 ;
int end = rows*cols ;
while(start <= end){
    int mid = (start+end)/2 ;
    int row = mid/cols ;
    int col = mid%cols ;

    if(matrix[row][col] == target) return true ;
    else if(matrix[row][col] < target) start++;
    else end-- ;

}

return false ;

}


int main(){
    
int rows,cols ;
cout << "Enter rows and cols " << endl ;
cin >> rows ;
cin >> cols ;

vector<vector<int>>matrix(rows,vector<int>(cols)) ;

cout << "Enter the values row wise in the vector "<< endl ;
for(int i = 0 ; i < rows ; i++){
    for(int j = 0 ; j < cols ; j++){
        cin >> matrix[i][j] ;
    }
}

cout << " Enter the target value "<< endl ;
int target ;
cin >> target ;


// funtion call to check 

bool ans = checkTarget(matrix,target,rows,cols);

if(ans){
    cout << "Element is present" <<endl ;
}else{
    cout << "Element is not Present"<<endl ;
}

    return 0 ;
}