#include<bits/stdc++.h>
using namespace std ;
   void  swap(int first,int second,int**select[] ){
    int temp = select[first] ;
    select[first] =select[second] ;
    select[second]=temp ;
    }

int main(){
    int n ;
    cin>>n ;
    int select[n] ;
    for(int i=0;i<n;i++){
        cin>>select[n];

    }
    for(int i=0;i<n;i++){
        int min = __INT_MAX__ ;
        for(int j=i;j<n-1;j++){
            if(select[j]>min){
                min = select[j]
            }
        }
        swap(int j,min,select[]) ;    

    }
    for(int i=0;i<n;i++){
       cout<<select[i]<<endl ;
    }
    return 0 ;
}
