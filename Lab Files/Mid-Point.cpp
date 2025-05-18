#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void Mid_Point(int x1,int y1, int x2, int y2){
    float a = getmaxx()/2;
    float b = getmaxy()/2;
    int dx = x2-x1;
    int dy = y2-y1;
    float d = .5*dy-dx;
    int dr = -1*dy;
    int dl = dx-dy;
    int x = x1, y = y1;

    while(x<=x2){
        putpixel(a+x,b-y,YELLOW);
        if(d>=0){
            x++;
            d+=dr;
        }
        else{
            x++;
            y++;
            d+=dl;
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

    Mid_Point(-50,-20,100,150);
    Mid_Point(30,-20,200,150);
    Mid_Point(100,0,250,150);
    Mid_Point(-100,20,-10,150);


    getch();
    closegraph();
    return 0;

return 0;
}



