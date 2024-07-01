// We are given two strings and we have to find if the two strings are isomorphic or not

#include<bits/stdc++.h>
using namespace std;

bool checkIsomorphic(string s ,string t){
    if (s.size() != t.size())
            return 0;
        map<char, char> mapped;
        for (int i = 0; i < s.size(); i++) {
            if (mapped[s[i]]) {
                if (mapped[s[i]] != t[i])
                    return false;
            } else {
                mapped[s[i]] = t[i];
            }
        }
        mapped.clear() ;
        for(int i = 0 ; i < t.size() ; i++){
            if (mapped[t[i]]) {
                if (mapped[t[i]] != s[i])
                    return false;
            } else {
                mapped[t[i]] = s[i];
            }
        }

        return true ;
}

int main(){


string str1 ;
string str2 ;
cout << "Enter the strings"<<endl ;
cin >> str1 >> str2 ;

if(checkIsomorphic(str1,str2)){
    cout << "The strings are isomorphic"<<endl ;
}else{
    cout << "The strings are not ishomorphic" << endl ;
}

    return 0 ;
}