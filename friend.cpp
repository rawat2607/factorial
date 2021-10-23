#include<iostream>
using namespace std;
class box
{
private:
int length;
int width;
int height;

public:
box()
{length=width=height=0;
};
box(int l,int w,int h)
{
length =l;
width=w;
height=h;
}
friend int volume(box);//friend function
};
int volume(box b)
{
return(b.length*b.width*b.height);
}
int main()
{
 box b1;
 box b2(5,6,7);
 cout<<"volume of box1:"<<volume(b1)<<endl;
 cout<<"volume of box2:"<<volume(b2)<<endl;
 

return 0;
}
