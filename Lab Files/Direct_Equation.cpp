#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void Direct_Equation(int x1,int y1, int x2, int y2){
    float a = getmaxx()/2;
    float b = getmaxy()/2;
    float m = (y2-y1)/(x2-x1);
    float p = y1-(m*x1);

    if(abs(m) <= 1){
            if(x1>x2){
                swap(x1,x2);
                swap(y1,y2);
            }
        int x = x1;
        int y = y1;

        while(x<=x2){
            putpixel(a+x,b-y,YELLOW);
            x++;
            y=m*x+p;
        }
    }
    else{
        if(y1>y2){
            swap(x1,x2);
            swap(y1,y2);
            }
        int x = x1;
        int y = y1;

        while(y<=y2){
            putpixel(a+x,b-y,YELLOW);
            y++;
            x=(y-p)/m;
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

    Direct_Equation(-50,-20,100,150);
    Direct_Equation(30,-20,200,150);
    Direct_Equation(100,0,250,150);
    Direct_Equation(-100,20,-10,150);

    getch();
    closegraph();
    return 0;

return 0;
}

