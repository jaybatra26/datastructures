#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s;
    char c1,c2 ;
    cin>>s ;

    cin>>c1>>c2 ; 

    int l = s.length() ;

    for(int i=0;i<l;i++){
        if(s[i]==c1){
            s[i] = c2 ;
        }

    }
    cout<<s<<endl ;
    
}

