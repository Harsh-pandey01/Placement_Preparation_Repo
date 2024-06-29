// we are given two string and we have to check weather one of them is a subsequence of other or not

#include<bits/stdc++.h>
using namespace std ;

bool isSubsequence(string s, string t) {
       int i = 0 ;
       int j = 0 ; 
       while(i < s.size() && j < t.size()){
        if(s[i] == t[j]) {
            i++;
            j++;
        }else {
            j++;
        }
       }
       if(i == s.size()) return true ;
       return false ;
    }

int main(){

string str1;
string str2 ;
cout << "Enter the first string" << endl ;
cin >> str1 ;
cout << " Enter the other string "<<endl ;
cin >> str2 ;

if(isSubsequence(str1,str2)){
    cout << " correct "<<endl ;
}else {
    cout << " Not Subsequence "<<endl ;
}

    return 0 ;
}