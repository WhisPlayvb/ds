Problem Statement: Develop a program to draw a line with line style (Thin, Thick and Dotted).
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;
class Bresenham
{
public:
float x, y, xi, yi, steps, dx, dy;
void THIN(int x1, int y1, int x2, int y2);
void DOTTED(int x1, int y1, int x2, int y2);
void THICK(int x1, int y1, int x2, int y2, int w);
};
void Bresenham ::THIN(int x1, int y1, int x2, int y2)
{
int dx, dy, x, y, Z, p;
dx = abs(x2 - x1);
dy = abs(y2 - y1);
p = 2 * dy - dx;
if (x1 > x2)
{
x = x2;
y = y2;
Z = x1;
}
else
{
x = x1;
y = y1;
Z = x2;
}
putpixel(x, y, 1);
while (x < Z)
{
x = x + 1;
if (p < 0)
{
p = p + 2 * dy; 
}
else
{
y = y + 1;
p = p + 2 * (dy - dx);
}
putpixel(x, y, WHITE);
}
};
void Bresenham ::DOTTED(int x1, int y1, int x2, int y2)
{
int dx, dy, x, y, Z, p;
dx = abs(x2 - x1);
dy = abs(y2 - y1);
p = 2 * dy - dx;
if (x1 > x2)
{
x = x2;
y = y2;
Z = x1;
}
else
{
x = x1;
y = y1;
Z = x2;
}
putpixel(x, y, 1);
while (x < Z)
{
x = x + 3;
if (p < 0)
{
p = p + 2 * dy;
}
else
{
y = y + 3;
p = p + 2 * (dy - dx);
}
putpixel(x, y, WHITE);
}
};
void Bresenham ::THICK(int x1, int y1, int x2, int y2, int 
w)
{
int i, wy, wx, m;
dx = x2 - x1;
dy = y2 - y1;
m = dy / dx;
if (m < 1)
{
wy = ((w - 1) * sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 -
y1))) / (2 * (x2 - x1));
for (i = 0; i < wy; i++)
{
THIN(x1, y1 - i, x2, y2 - i);
THIN(x1, y1 + i, x2, y2 + i);
}
}
else
{
wx = ((w - 1) * sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 -
y1))) / (2 * (y2 - y1));
for (i = 0; i < wx; i++)
{
THIN(x1 - i, y1, x2 - i, y2);
THIN(x1 + i, y1, x2 + i, y2);
}
}
};
int main()
{
Bresenham D;
int ch;
int x1, y1, x2, y2, w;
do
{
cout << "\n\nLine options 
are.....\n1.Normal\n2.Dotted\n3.Thick\n4.Stop\n\nEnter 
choice :";
cin >> ch;
if (ch != 3 && ch != 4)
{
cout << "Enter coordinates of line :\n";
cin >> x1 >> y1 >> x2 >> y2;
}
else if (ch == 3)
{
cout << "Enter coordinates of line :\n";
cin >> x1 >> y1 >> x2 >> y2;
cout << "Enter width of line :";
cin >> w;
}
initwindow(1000,1000);
switch (ch)
{
case 1:
system("cls"); // clear the screen
setcolor(GREEN);
D.THIN(x1, y1, x2, y2);
outtext("Press any key to continue.......");
break;
case 2:
system("cls");
D.DOTTED(x1, y1, x2, y2);
outtext("Press any key to continue.......");
break;
case 3:
system("cls");
D.THICK(x1, y1, x2, y2, w);
outtext("Press any key to continue.......");
break;
case 4:
exit(0);
default:
cout << "Enter correct choice!!";
}
getch();
closegraph();
} 
while (ch != 4);
} 
