#include<bits/stdc++.h>
using namespace std ;

int sum(int i){
    if(i==0){
        return 0 ;
    }
    int sum_ = i + sum(i-1) ;
    return sum_ ;
}

int main(){
    cout<<sum(10)<<endl;
    
}

