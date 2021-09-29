#include<iostream>
using namespace std;
int main()
{
int num,originalNum,remainder,result=0;
cout<<"enter a three digit number";
cin>>num;
originalNum=num;

while(originalNum!=0){

remainder=originalNum%10;
result+=remainder*remainder*remainder;
originalNum/=10;
}
if(result==num)
cout<<num<<"is an armstrong number";
else
cout<<num<<"is not an armstrong";
return 0;
}
