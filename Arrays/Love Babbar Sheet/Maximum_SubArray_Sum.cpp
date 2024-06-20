// We are given an array and we have to find maximum sum of the subArrays

#include <bits/stdc++.h>
using namespace std;

int maxSumSubarrays(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            ans = max(ans, sum);
        }
    }

    return ans;
}

int kadans(int arr[] , int size){
    int sum = 0 ;
    int ans = INT_MIN;
    
    for(int i = 0 ; i < size ; i++){
        sum+=arr[i] ;
        ans = max(ans,sum) ;

        if(sum < 0){
            sum = 0 ;
        }
    }

    return ans ;

}

int main()
{

    int arr[] = {10, 2, -5, 6, -18, 55, 75, 1, 2, 3, -6};
    int size = sizeof(arr) / sizeof(int);

    // Approach 1:- BruteForce Approach

    int maxSum = maxSumSubarrays(arr, size);

    cout << "Maximum subArray sum is" << maxSum << " ";

    cout<<endl ;

    cout<<"Maximum subArray sum is " << kadans(arr,size) << endl ;
    return 0;
}