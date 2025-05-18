#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void DDA(int x1,int y1, int x2, int y2){
    float a = getmaxx()/2;
    float b = getmaxy()/2;
    int x = x1;
    int y = y1;
    float m = (y2-y1)/(x2-x1);

    if(abs(m) <= 1){
        while(x<=x2){
            putpixel(a+x,b-y,YELLOW);
            x++;
            y+=m;
        }
    }
    else{
        while(y<=y2){
            putpixel(a+x,b-y,YELLOW);
            y++;
            x+=(1/m);
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

    DDA(-50,-20,100,150);
    DDA(30,-20,200,150);
    DDA(100,0,250,150);
    DDA(-100,20,-10,150);

    getch();
    closegraph();
    return 0;

return 0;
}
