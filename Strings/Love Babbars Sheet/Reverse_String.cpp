// We are given a string an we have to reverse the string


#include<bits/stdc++.h>
using namespace std ;

int main(){

string str ;
cout << " Enter the string " << endl ;
getline(cin,str);

cout << str ;
cout << endl ;
reverse(str.begin(),str.end());
cout << str ;

    return 0 ;
}