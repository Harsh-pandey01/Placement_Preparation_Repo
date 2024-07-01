// We are given an array of strings and we have to find the maximum common prefix possible
#include<bits/stdc++.h>
using namespace std ;

string largestPrefix(vector<string>input){
    sort(input.begin(),input.end()) ;
    int i = 0 ;
    int j = 0 ;
  string common ="";
   while(i < input[0].size() && j < input[input.size()-1].size()){
      if(input[0][i] == input[input.size()-1][j]){
        common+=input[0][i];
      }else break ;
      i++;
      j++;
   }
return common ;
}

int main(){

vector<string>input = {"Flower" , "Flow" , "Flight"} ;

cout << "The common prefix is "<<largestPrefix(input);


    return 0 ;
}