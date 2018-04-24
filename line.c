#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(100,100,200,200);
    closegraph();
}
