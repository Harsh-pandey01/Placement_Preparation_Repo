// We are given some paranthesis and we have to check weather paranthesis is balanced or not

#include<bits/stdc++.h>
using namespace std ;

bool ispar(string x)
    {
        stack<char>store ;
        for(int i = 0 ; i <x.size() ; i++){
           char ch = x[i] ;  
            if(store.empty()){
                // store is empty
            if(ch == '{' || ch == '(' || ch == '['){
                store.push(ch);
            }else{
                return false ;
            }
                
                
            }else{
                // store is not empty
                // if opening bracket then push otherwose check and pop
                if(ch == '{' || ch == '(' || ch == '['){
                store.push(ch);
            }else{
                char top = store.top() ;
                if((top == '(' && ch == ')') || (top == '{' && ch == '}') ||(top == '[' && ch == ']')){
                    store.pop();
                }else{
                    return false ;
                }
            }
                
            }
        }
       if(store.empty()) return true ;
       
       return false ;
    }

int main(){

string parans = "{[()]}";

if(ispar(parans)){
    cout << "Balanace Paranthesis" ;
}else{
    cout << "Not balance parathesi" ;
}

    return 0 ;
}