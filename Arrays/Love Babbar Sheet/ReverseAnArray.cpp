// we are given an array and we have to reverse the array

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    //  Approach 1 : using two pointer start and end pointing to the first and last element respectively

    int start = 0;
    int end = sizeof(arr) / sizeof(int) - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}