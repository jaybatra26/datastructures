#include<bits/stdc++.h>
using namespace std ;

void removex(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!= 'x'){
        removex(input+1) ;
    }
    else{
        int i=1 ;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i] ;
        }
        input[i-1]=input[i] ;
        removex(input) ;
    }
}

int main(){
    char input[100] ;
    cin>>input ;
    removex(input) ;
    cout<<input<<endl ;

}