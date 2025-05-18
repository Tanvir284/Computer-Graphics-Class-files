#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void Bresenham(int x1,int y1, int x2, int y2){
    float a = getmaxx()/2;
    float b = getmaxy()/2;
    int dx = x2-x1;
    int dy = y2-y1;
    int d = 2*dy-dx;
    int ds = 2*dy;
    int dt = 2*(dy-dx);
    int x = x1, y = y1;

    while(x<=x2){
        putpixel(a+x,b-y,YELLOW);
        if(d<0){
            x++;
            d+=ds;
        }
        else{
            x++;
            y++;
            d+=dt;
        }
    }

}

int main(){

    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    // X and Y axis draw
    int a = getmaxx();
    int b = getmaxy();
    setcolor(GREEN);
    line (0,b/2,a,b/2);    // X axis
    setcolor(GREEN);
    line (a/2,0,a/2,b);    // Y axis

    Bresenham(-50,-20,100,150);
    Bresenham(30,-20,200,150);
    Bresenham(100,0,250,150);
    Bresenham(-100,20,-10,150);

    getch();
    closegraph();
    return 0;

}


