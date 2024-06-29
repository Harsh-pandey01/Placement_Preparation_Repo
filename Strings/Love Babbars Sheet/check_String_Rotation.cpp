// We are given two string and we have to check two of them is rotation of each or not 
#include<bits/stdc++.h>
using namespace std ;


bool checkRotate(string str1 ,string str2){
    string temp = str1+str1 ;
    if(temp.find(str2) != string::npos) return true ;
    return false ;
}

int main(){

string str1,str2 ;
cout<< "Enter the first string" <<endl ;
cin >> str1 ;
cout << " enter the second string "<<endl ;
cin >> str2 ;


if(checkRotate(str1,str2)) cout << " The string are rotation of each";
else cout << "the strings are not rotation of each" ;
    return 0 ;
}