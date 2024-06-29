// We are given a string and we have to say that if gthe given string is a pallindrom or not
#include<bits/stdc++.h>
using namespace std;

bool CheckPallindrom(string str){
    int start = 0 ; 
    int end = str.size()-1 ;
    while(start <= end){
        if(str[start]!=str[end]) return false ;
        start++;
        end-- ;
    }
    return true ;
}

int main(){

string str ;
cout << " Enter the string "<<endl ;
getline(cin,str);

if(CheckPallindrom(str)) cout << str << " is a pallindrom" << endl ;
else cout << str << " is not a pallindrom" ;

    return 0 ;
}