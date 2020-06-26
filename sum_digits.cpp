#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n/10<1){
        return n;
    }
    int ans = sum(n/10) ;
    int digits = n%10 ;
    return ans+digits ;
    }


int main(){
    int n ;
    cin>>n ;
    cout<<sum(n)<<endl ;


}