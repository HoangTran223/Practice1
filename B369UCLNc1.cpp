#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b) 
{
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}