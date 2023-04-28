#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool primes(int n)
{
    if(n==1)
    return false;
    else if(n==2||n==3)
    return true;
    else if(n>=4)
    {
    for(int i=2;i<=sqrt(n);i++)
    { 
    if(n%i==0)
    return false;
    }
    return true;
    }
}
int main()
{
    int n,dem=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       {
       cin>>arr[i];
       if(primes(arr[i])==true)
       {dem++;}
       }
    cout<<dem;

}