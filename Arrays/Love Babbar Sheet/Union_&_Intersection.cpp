// We are given an array and we have to find the union and intersection of the two sorted array

#include<bits/stdc++.h>
using namespace std ;

int interSection(int arr1[] , int arr2[] , int size1 , int size2){
    int i = 0 ;
    int j = 0 ;

    while(i < size1 && j < size2){
        if(arr1[i] == arr2[j]) return arr1[i];
        else if(arr1[i] < arr2[j]){
            i++;
        }else j++;
    }

    return -1 ;
}

int main(){

int arr1 [] ={1,2,3,5,6,7};
int arr2[] = {5,8,9};

cout << "Intersection of arrays is " << interSection(arr1,arr2,6,3);



    return 0 ;
}