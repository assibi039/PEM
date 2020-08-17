#include<iostream>
using namespace std;
int gcd(int m, int n)
{
    int t;
    while(n!=0)
    {
        t=n;
        n=m%n;
        m=t;
    }
    return m;
}
int main()
{
    int i,n;
    int long long lcm=1;
    printf("Enter the range:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        lcm = (i*lcm)/gcd(i,lcm);
    }
    printf("smallest multiple : %I64d",lcm);

}