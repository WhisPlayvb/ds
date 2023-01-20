Bresenham Circle drawing Algorithm

#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
initwindow(1000,1000);
int a,b,x=0,y,r;
float p;
cout<<"\nEnter coordinates to draw a circle:";
cin>>a>>b;
cout<<"\nEnter radius:";
cin>>r;
y=r;
p=3-2*r;
while(y>=x)
{
putpixel(a+x,b+y,GREEN);
putpixel(a-x,b+y,YELLOW);
putpixel(a-x,b-y,GREEN);
putpixel(a+x,b-y,YELLOW);
putpixel(a+y,b+x,GREEN);
putpixel(a-y,b+x,YELLOW);
putpixel(a-y,b-x,GREEN);
putpixel(a+y,b-x,YELLOW);
if(p<=0)
{
p=p+4*x+6;
}
else
{
p=p+4*(x-y)+10;
y=y-1;
}
x=x+1;
}
getch();
return 0;
}

