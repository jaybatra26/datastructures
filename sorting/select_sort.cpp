#include<bits/stdc++.h>
using namespace std ;

void swap(int first,int second,int select[]){
    int temp = select[first] ;
    select[first] = select[second] ;
    select[second] = temp ;
    return ;

}

int main(){
    int n =5 ;
    int select[n]={92,65,98,75,64} ;

    int min = INT_MAX ;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(select[i]>select[j]){
            min = select[j] ;
            swap(i,j,select) ;
        }
        }

        for(int i=0;i<n;i++){
            cout<<select[i]<<endl ;
        }
    }
    cout<<min<<endl ;
}