#include<bits/stdc++.h>
using namespace std ;
double power(double x , int n){
    if(n==1){
        return x ;
    }
    double ans = power(x,n-1) * x ;
    return ans ;
}

double geometric(int k){
    if(k==0){
        return 1 ;
    }
    
   double ans = geometric(k-1) ;
   double exp = power(0.5,k) ;
   return ans + exp ;
}




int main(){
    cout<<geometric(3)<<endl ;
    cout<<power(0.5,4)<<endl ;
}



