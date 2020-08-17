#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=2,sum=0,t;
    cin>>t;
    while(n<=t){
        sum=sum+n;
        n=round(n*4.236068);
    }
    cout<<sum;
    return 0;
}