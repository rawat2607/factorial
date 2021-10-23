#include<iostream>
using namespace std;

class class2;
class class1
{
 int value1;
 public:
 class1(int i)
 {
   value1=i;
}
 void display(void)
{
  cout<<"value1 of class1:"<<value1<<endl;
}
friend void exchange(class1 &,class2 &);
};
class class2
{
  int value2;
  public:
  class2(int i)
 {
   value2=i;
}
void display(void)
{
  cout<<"value2 of class2:"<<value2<<endl;
}
friend void exchange(class1 &,class2 &);
};
void exchange(class1 &x,class2 &y)
{
int t=x.value1;
x.value1 = y.value2;
y.value2=t;
}
int main()
{
  class1 C1(100);
  class2 C2(200);
  cout<<"value before exchange:"<<endl;
  C1.display();
  C2.display();
  exchange(C1,C2);
  cout<<"value after exchange:"<<endl;
  C1.display();
  C2.display();
  return 0;
}

