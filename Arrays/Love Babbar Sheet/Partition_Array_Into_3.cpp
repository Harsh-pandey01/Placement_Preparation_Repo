/*
Given an array of size n and a range [a, b]. The task is to partition the array around the range such that the array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
*/

// It is nothing but just like dutch flag Algorithm question

#include<bits/stdc++.h>
using namespace std ;

 void threeWayPartition(vector<int>& array,int a, int b)
    {
        // Simple Dutch Flag
        int low = 0 ;
        int mid = 0 ; 
        int high = array.size() - 1 ;
     
        while(mid<=high){
            if(array[mid] < a){
                swap(array[mid],array[low]);
                low++;
                mid++ ;
            }else if(array[mid] > b){
                swap(array[mid] , array[high]);
                high--;
            }else{
                mid++ ;
            }
        }
      
    }

int main(){

vector<int>nums = {1, 4, 3, 6, 2, 1,5,7,8,3,1,2,4};
int leftRange = 3 ;
int rightRange = 4 ;

threeWayPartition(nums,leftRange,rightRange);

for(auto i : nums){
    cout << i << " ";
}

    return 0 ;
}