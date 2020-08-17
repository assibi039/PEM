#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=2,i=1;
    while(t==n){
        int s=(6*i)-1;
            t++;
            s=(6*i)+1;
            t++;
            i++;
    }
    cout<<s;
}
