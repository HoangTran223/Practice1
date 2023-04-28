#include <iostream>
using namespace std;
int main()
// vd:  34:2 dư 0, 17:2 dư 1,
// 8:2,4:2,2:2 dư 0, 1 dư 1
// thì nhị phân là 100010
{
int n,a=1, b=1, c=0;
cin>>n;
while(n>0)
{ 
a=n%2;
n=n/2;
c=c+ a*b;
b=b*10;
}
cout<<c;
}


    