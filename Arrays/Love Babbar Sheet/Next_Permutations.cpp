// We are given an array and we have to find the next permutation of the array if arranged in ascending order

#include<bits/stdc++.h>
using namespace std ;


    void nextPermutation(vector<int>& nums) {
        // Approach 1 :-Using inbuild method to find the next permutation
        
        // next_permutation(nums.begin(),nums.end());

        // Approach 2 :- Optimised Approach

        int size = nums.size() ;
        int index = -1 ;
        for(int i = size - 2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break ;
            }
        }

        if(index == -1){
            reverse(nums.begin(),nums.end());
           return ;
        }

        for(int i = size -1 ; i > index ; i--){
            if(nums[i] > nums[index]){
                swap(nums[i],nums[index]);
                break ;
            }
        }
        reverse(nums.begin()+index +1,nums.end());
    }



int main(){

vector<int>nums = {1,2,4,5,3};

nextPermutation(nums);

for(auto i : nums){
    cout << i << " ";
}




    return 0 ;
}