#include<iostream>
using namespace std;
int fac(int);
int main()
{
int n,r;
cout<<"enter the limit:";
cin>>n;
r=fac(n);
cout<<"factorial: "<<r;
return 0;
}

int fac(int n)
{
int f=1,i;
for(i=1;i<n;i++)
{
f=f*i;
}
return f;
}

