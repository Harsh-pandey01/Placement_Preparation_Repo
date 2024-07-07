// We are given three sorted array and we have to return the elements that are common in b/w all

#include<bits/stdc++.h>
using namespace std ;

 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            
            // Approach 1 :- Using the hashmap to store the present element in each
            
            // map<int,bool>present1 ;
            // for(int i = 0 ; i < n1 ; i++){
            //     present1[A[i]] = true ;
            // }
            // map<int,bool>common2 ;
            // for(int i = 0 ; i < n2 ; i++){
            //     if(present1[B[i]]){
            //         common2[B[i]] = true ;
            //     }
            // }
            // vector<int>ans ;
            // for(int i = 0 ; i < n3 ; i++){
            //     if(common2[C[i]]){
            //         ans.push_back(C[i]);
            //         common2[C[i]] = false ;
            //     }
            // }
            
            // return ans ;
            
            
            // Using the 3 ptr apporach
            
            int ptr1 = 0 , ptr2 = 0 , ptr3 = 0 ;
            vector<int>ans ;
            
            
            while(ptr1 < n1 && ptr2 < n2 && ptr3 < n3){
                
                if(A[ptr1]== B[ptr2] && B[ptr2] == C[ptr3]){
                    if(ans.size() == 0){
                        ans.push_back(A[ptr1]);
                    }else{
                        if(ans.back() != A[ptr1]){
                            ans.push_back(A[ptr1]);
                        } 
                    }
                    ptr1++ ;
                }else{
                    // increase the smallest pointer
                    if(A[ptr1] <= B[ptr2] && A[ptr1] <=C[ptr3]){
                        ptr1++ ;
                    }else if(B[ptr2] <= A[ptr1] && B[ptr2] <= C[ptr3]){
                        ptr2++ ;
                    }else{
                        ptr3++ ;
                    }
                }

            }
            
            return ans ;
   
            
        }

int main(){

int A[] = {1, 5, 10, 20, 40, 80};
int B[] ={6, 7, 20, 80, 100};
int C[]={3, 4, 15, 20, 30, 70, 80, 120} ;

vector<int>Common = commonElements(A,B,C,6,5,8);

for(auto i : Common){
    cout << i << " ";
}


    return 0 ;
}