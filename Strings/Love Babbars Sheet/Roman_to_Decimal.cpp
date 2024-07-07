// We are given a roman number and we have to return the decimal number corresponding to the roman number

#include<bits/stdc++.h>
using namespace std ;

int romanToDecimal(string &str) {
        map<char,int>roman ;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int ans = roman[str[str.size()-1]];
        for(int i = str.size()-2 ; i >= 0 ; i--){
            if(roman[str[i]] < roman[str[i+1]]) ans-=roman[str[i]];
            else ans+=roman[str[i]];
        }
        
        return ans ;
    }

int main(){

  string str ;
  cout << "Enter the string" <<endl ;
  getline(cin , str) ;

  int ans = romanToDecimal(str);

  cout << "The ans is "<< ans ;

    return 0 ;
}