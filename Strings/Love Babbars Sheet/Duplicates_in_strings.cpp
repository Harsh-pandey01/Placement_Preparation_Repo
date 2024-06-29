// We are given a string and we have to return the duplicate character
#include<bits/stdc++.h>
using namespace std ;

void printDuplicates(string s){
    // bruteforce is using a map to sotre the count of each char
    map<char,int>count ;
    for(int i = 0 ; i < s.size() ; i++){
        if(count[s[i]]!=-1) count[s[i]]++ ;
        if(count[s[i]] > 1) {cout << s[i] << " is a duplicate" <<endl  ;
        count[s[i]] = -1 ;
        }
    }
}

int main(){

string str ;
cout << "Enter the string " <<endl ;
getline(cin,str) ;

printDuplicates(str);

    return 0 ;
}