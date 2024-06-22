// We are given an array and we have to find all the triplets having sum equal to some number

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums)
{
    vector<vector<int>> ans;
    map<vector<int>, bool> present;

    // BruteForce


    // for (int i = 0; i < input.size() - 2; i++)
    // {
    //     for (int j = i + 1; j < input.size() - 1; j++)
    //     {
    //         for (int k = j + 1; k < input.size(); k++)
    //         {
    //             int sum = input[i] + input[j] + input[k];
    //             if (sum == 0)
    //             {
    //                 vector<int> temp = {input[i], input[j], input[k]};
    //                 sort(temp.begin(), temp.end());
    //                 if (present[temp] == false)
    //                 {
    //                     ans.push_back(temp);
    //                     present[temp] = true;
    //                 }
    //             }
    //         }
    //     }
    // }
    // return ans;

// Optimised Approach

 sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-2 ; i++){
            int remaining = - nums[i] ;
           
             int j = i +1 ;
             int k = nums.size()-1 ;
             while(j < k){
                 if(nums[j]+nums[k] == remaining){
                     vector<int>temp = {nums[i],nums[j],nums[k]};
                     sort(temp.begin(),temp.end());
                     if(!present[temp]){
                         present[temp] = true ;
                         ans.push_back(temp);
                        
                     }
                      j++,k-- ;
                 }else if(nums[j]+nums[k] > remaining){
                     k-- ;
                 }else{
                     j++;
                 }
             }
        }


        return ans ;


}



int main()
{

    vector<int> input = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(input); 

    for(auto in : ans){
        for(int i = 0 ; i < in.size() ; i++){
            cout << in[i] <<" ";
        }
        cout<< " ";
    }


    return 0;
}