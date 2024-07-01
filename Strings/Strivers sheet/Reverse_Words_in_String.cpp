// we are given a string containing different words ad we have to reverse the words in the string

#include<bits/stdc++.h>
using namespace std ;

string reverseWords(string s) {
        vector<string>words ;
        int i = 0 ;
        int j = 0 ;

        string word = "";
        while(i < s.size()){
            if(s[i] == ' '){
                i++ ;
            }else{
                j = i ;
                while(j < s.size() && s[j]!=' '){
                    word+=s[j];
                    j++;
                }
                
                words.push_back(word) ;
                word="";
                i = j+1;
            }
        }
        reverse(words.begin(),words.end());
        string ans ="";
        ans+=words[0];
        for(int i = 1; i < words.size() ; i++){
            ans+=' '+words[i];
        }

        return ans ;
    }

int main(){

string str ="";
cout << "Enter the string" << endl ;
getline(cin , str);

cout << "The answe is " << reverseWords(str) << endl ;


    return 0 ;
}