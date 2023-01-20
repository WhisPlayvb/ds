Mid-point Circle drawing Algorithm
#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
initwindow(1000,1000);
int a,b,x=0,y,r;
cout<<"\nEnter coordinates to draw a circle:";
cin>>a>>b;
cout<<"\nEnter radius of circle:";
cin>>r;
y=r;
int p=1-r;
while(y>=x)
 {
putpixel(a+x,b+y,YELLOW);
putpixel(a-x,b+y,YELLOW);
putpixel(a-x,b-y,YELLOW);
putpixel(a+x,b-y,YELLOW);
putpixel(a+y,b+x,YELLOW);
putpixel(a-y,b+x,YELLOW);
putpixel(a-y,b-x,YELLOW);
putpixel(a+y,b-x,YELLOW);
if(p<=0)
{
p=p+(2*x)+1;
}
else
{
p=p+2*(x-y)+1;
y=y-1;
}
x=x+1;
}
getch();
return 0;
}

