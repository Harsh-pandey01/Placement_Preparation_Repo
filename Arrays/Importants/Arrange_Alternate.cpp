// We are given an array of pos and neg intergers and we have to rearrange the elements of the arrY

// Need some changes in this solutions

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    vector<int>nums = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int size = 10 ;
    int i = 0;
    int wrongIndex = -1;
    while (i < size)
    {
        if (i % 2 == 0 && nums[i] > 0)
        {
            wrongIndex = i;
            int nextIndex = i + 1;
            while (nextIndex < size && nums[nextIndex] > 0)
            {
                nextIndex++;
            }

            if (nextIndex >= size )
            {
                break;
            }
            else
            {
                for (int index = nextIndex; index > wrongIndex; index--)
                {
                    swap(nums[index], nums[index - 1]);
                }
                if (nextIndex - wrongIndex >= 2)
                    wrongIndex += 2;
                else{
                    wrongIndex = -1;
                    i+=2 ;}
            }
        }else if(i % 2 !=0 && nums[i] < 0){
            wrongIndex = i ;
            int nextIndex = i + 1;
            while (nextIndex < size && nums[nextIndex] < 0)
            {
                nextIndex++;
            }

            if (nextIndex >=size)
            {
                break;
            }
            else
            {
                for (int index = nextIndex; index > wrongIndex; index--)
                {
                    swap(nums[index], nums[index - 1]);
                }
                if (nextIndex - wrongIndex >= 2)
                    wrongIndex += 2;
                else{
                    wrongIndex = -1;
                    i+=2 ;}
            }
        }else{
            i++ ;
        }


    }


    for(auto i : nums){
        cout << nums[i] <<" ";
    }

    return 0;
}