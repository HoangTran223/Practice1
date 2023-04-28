#include <iostream>
using namespace std;

int main()
{
int n,d = 0,s = 0;cin >> n;
int a[n];
for (int i = 0;i < n;i++)
{
 cin >> a[i];
 s += a[i];
}
for (int i = 0;i < n;i++)
{
 d += a[i];
 if (s % d == 0)
 {
int t = 0;
for (int j = 0;j < n;j++)
{
 t += a[j];
 if (t > d) break;
 t = t % d;
}
if (t == 0)
{
 cout << s/d;
 return 0;
}
}
}
}