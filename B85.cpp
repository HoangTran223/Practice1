#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
// sử dụng a=2^n.b+ 2^n-1.c+....
int main()
{
int n,b,c=1, a=0;
cin>>n;
while(n!=0)
{
b=n%10;
a= a + c*b;
c=c*2;
n=n/10;
}
cout<<a;
}
