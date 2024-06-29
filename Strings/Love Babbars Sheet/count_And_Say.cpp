// It is a unique question of leetcode and the solution is niche

#include<bits/stdc++.h>
using namespace std ;
string CandS(int n , string &ans){
        if(n == 1) {
            ans = "1";
            return ans ;
        }
        string temp = CandS(n-1,ans) ;
        string upDatedans = "" ;
        int cnt = 0 ;
        char ch = ans[0];
        for(int i = 0 ; i < ans.size() ; i++){
            if(ch == ans[i]) cnt++ ;
            else{
            upDatedans+=cnt + '0' ;
            upDatedans+=ch ;
            ch = ans[i];
            cnt = 1 ;
            }
        }
        upDatedans+=cnt + '0' ;
        upDatedans+=ch ;
        
        ans = upDatedans ;

        return ans ;
    }

int main(){
int n = 0 ; 
cout << " Enter the value of n "<<endl ;
cin >> n ;

string ans = "" ;
string op =  CandS(n,ans);

cout << " The ans will be "<<op ;

    return 0 ;
}