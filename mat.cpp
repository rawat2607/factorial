#include<iostream>
using namespace std;
int main()
{
int i,j,m,n,a[10][10];
cout<<"enter rows and columns of the matrix:";
cin>>m>>n;
cout<<"enter the elments of matrix:/n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"matrix is:\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
