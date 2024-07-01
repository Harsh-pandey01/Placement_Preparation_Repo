// We are given two strings and we have to return true or false based on is this strings are anagram or not

#include<bits/stdc++.h>
using namespace std ;

bool checkAnagram(string s ,string t){
    vector<int>freq(26,0) ;
    for(int i = 0 ; i < s.size() ; i++){
        int index = s[i]-'a';
        freq[index]++;
    }
    for(int i = 0 ; i < t.size() ; i++){
        freq[t[i]-'a']--;
    }
    for(auto i : freq){
        if( i > 0) return false ;
    }

    return true ;
}

int main(){

string str1,str2 ;
cout << "Provide the strings " << endl ;
cin >> str1 >>str2 ;

if(checkAnagram(str1,str2)){
    cout <<" The Words are anagram "<<endl ;
}else cout <<"The words are not anagram" << endl ;

    return 0;
}