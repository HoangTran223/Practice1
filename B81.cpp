#include <iostream>
#include<iomanip>
#include <algorithm>
#include<string>

using namespace std;

int main()
{
string a;
string b;
getline(cin,a);
getline(cin,b);
string c=a+b;
reverse(c.begin(), c.end());
cout<< c; 
}


    