#include<bits/stdc++.h>
using namespace std ;

bool checknum(int *arr,int n,int x){
    if(n<0){
        return false ;
    }
    if(arr[n]==x || checknum(arr,n-1,x)){
        return true ;
    }
}

int main(){
    int number[6] = {5,8,7,6,3,4} ;
    cout<<checknum(number,6,145)<<endl ;
}





