// We are given a sorted array and we have to find the median of sorted array
/*
arr[] = 90 100 78 89 67
Output: 89
*/

#include<bits/stdc++.h>
using namespace std ;

int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int size = v.size();
		    if(size%2 == 1){
		        return v[size/2];
		    }
		    int sum = v[size/2] + v[(size/2)-1];
		    return sum/2;
		}

int main(){

vector<int>nums ={90 , 100 , 78 , 89 , 67};

int median = find_median(nums) ;

cout << "Median is " << median <<endl ;

    return 0 ;
}
