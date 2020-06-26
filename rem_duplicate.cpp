#include<bits/stdc++.h>
using namespace std ;

void duplicate(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!= input[1]){
        duplicate(input+1) ;
    }
    else{
        for(int i=1;i!='\0';i++)
        cout<<input[i];
    }
//     else {
//     int i=1 ;
//     for(;i!='\0';i++){
//         input[i-1]=input[i] ;
//     }

//     input[i-1]=input[i] ;
//     duplicate(input) ;
//  }
}


int main(){
    char input[100] ;
    cin>>input ;

    duplicate(input) ;
    cout<<input<<endl ;

}