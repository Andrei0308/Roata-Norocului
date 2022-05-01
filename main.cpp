#include <iostream>
#include <graphics.h>
#include <math.h>
#include <windows.h>
#include <fstream>
#include <cstring>
#include <time.h>
#define DMAX 200
#define NMAX 32
#define LGMAX 1000

using namespace std;
long long int cat;
ifstream fin("intrebari.in");
ifstream in("raspunsuri.in");
short int nrintrb;
char v[NMAX][LGMAX], rasp[NMAX], litera, r[NMAX][LGMAX];
int n, i, nrchar;
int poly[6], ursuledatedeadura;
int main()
{
    srand(time(NULL));
    int driver = DETECT, mod;

    initgraph(&driver, &mod, "");
    initwindow(800, 600);
    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;
    int radius = 200;

    long double i0=0,i1=45,i2=90,i3=135,i4=180,i5=225,i6=270,i7=315,i8=360;

    setfillstyle(SOLID_FILL, RED+YELLOW);
    floodfill(midx, midy, RED+YELLOW);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    pieslice(midx, midy, i0, i1, radius);

    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    pieslice(midx, midy, i1, i2, radius);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    pieslice(midx, midy, i2, i3, radius);

    setcolor(RED + BLUE);
    setfillstyle(SOLID_FILL, RED + BLUE);
    pieslice(midx, midy, i3, i4, radius);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    pieslice(midx, midy, i4, i5, radius);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    pieslice(midx, midy, i5, i6, radius);

    setcolor(RED + BLUE + WHITE);
    setfillstyle(SOLID_FILL, RED + BLUE - 2);
    pieslice(midx, midy, i6, i7, radius);

    setcolor(RED + GREEN);
    setfillstyle(SOLID_FILL, RED + GREEN);
    pieslice(midx, midy, i7, i8, radius);//aici initial


    poly[0] = midx;             /* first vertex */

    poly[1] = 90;

    poly[2] = midx - 30;      /* second vertex */

    poly[3] = 40;

    poly[4] = midx + 30;      /* third vertex */

    poly[5] = 40;

    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(3, poly);

    double unghi=5;
    for(i = 0; i < NMAX; i++)
        {
            fin.getline(v[i], LGMAX);
            fin.getline(r[i], LGMAX);
        }
    for(i=0; i < NMAX; i++)
        in>>rasp[i];
    if(getch())
        while(!kbhit())
            {
                swapbuffers();
                cat = rand() * rand();
                //cout<<cat<<'\n';
                setcolor(RED+YELLOW);

                i0-=unghi;
                i1-=unghi;
                i2-=unghi;
                i3-=unghi;
                i4-=unghi;
                i5-=unghi;
                i6-=unghi;
                i7-=unghi;
                i8-=unghi;

                setfillstyle(SOLID_FILL, RED+YELLOW);
                floodfill(midx, midy, RED+YELLOW);

                setcolor(GREEN);
                setfillstyle(SOLID_FILL, GREEN);
                pieslice(midx, midy, i0, i1, radius);

                setcolor(BLUE);
                setfillstyle(SOLID_FILL, BLUE);
                pieslice(midx, midy, i1, i2, radius);

                setcolor(RED);
                setfillstyle(SOLID_FILL, RED);
                pieslice(midx, midy, i2, i3, radius);

                setcolor(RED + BLUE);
                setfillstyle(SOLID_FILL, RED + BLUE);
                pieslice(midx, midy, i3, i4, radius);

                setcolor(YELLOW);
                setfillstyle(SOLID_FILL, YELLOW);
                pieslice(midx, midy, i4, i5, radius);

                setcolor(BLACK);
                setfillstyle(SOLID_FILL, BLACK);
                pieslice(midx, midy, i5, i6, radius);

                setcolor(RED + BLUE + WHITE);
                setfillstyle(SOLID_FILL, RED + BLUE - 2);
                pieslice(midx, midy, i6, i7, radius);

                setcolor(RED + GREEN);
                setfillstyle(SOLID_FILL, RED + GREEN);
                pieslice(midx, midy, i7, i8, radius);
                ursuledatedeadura=getpixel(400, 140);
                setfillstyle(SOLID_FILL, ursuledatedeadura);
                fillpoly(3, poly);
            }

    //Sleep(100);
    while( unghi>=0  )
        {
            swapbuffers();
            i0-=unghi;
            i1-=unghi;
            i2-=unghi;
            i3-=unghi;
            i4-=unghi;
            i5-=unghi;
            i6-=unghi;
            i7-=unghi;
            i8-=unghi;
            setcolor(RED+YELLOW);
            setfillstyle(SOLID_FILL, RED+YELLOW);
            floodfill(midx, midy, RED+YELLOW);

            setcolor(GREEN);
            setfillstyle(SOLID_FILL, GREEN);
            pieslice(midx, midy, i0, i1, radius);

            setcolor(BLUE);
            setfillstyle(SOLID_FILL, BLUE);
            pieslice(midx, midy, i1, i2, radius);

            setcolor(RED);
            setfillstyle(SOLID_FILL, RED);
            pieslice(midx, midy, i2, i3, radius);

            setcolor(RED + BLUE);
            setfillstyle(SOLID_FILL, RED + BLUE);
            pieslice(midx, midy, i3, i4, radius);

            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, YELLOW);
            pieslice(midx, midy, i4, i5, radius);

            setcolor(BLACK);
            setfillstyle(SOLID_FILL, BLACK);
            pieslice(midx, midy, i5, i6, radius);

            setcolor(RED + BLUE + WHITE);
            setfillstyle(SOLID_FILL, RED + BLUE - 2);
            pieslice(midx, midy, i6, i7, radius);

            setcolor(RED + GREEN);
            setfillstyle(SOLID_FILL, RED + GREEN);
            pieslice(midx, midy, i7, i8, radius);
            unghi-=0.01;
            ursuledatedeadura=getpixel(400, 140);
            setfillstyle(SOLID_FILL, ursuledatedeadura);

            fillpoly(3, poly);
            cat = rand();
        }
    ursuledatedeadura=getpixel(400, 140);
    setfillstyle(SOLID_FILL, ursuledatedeadura);

    fillpoly(3, poly);

    nrintrb = (cat % 4);
    if(getpixel(400, 140) == 1)
        {
            nrintrb += 4;
        }
    else if(getpixel(400, 140) == 4)
        {
            nrintrb += 8;
        }
    else if(getpixel(400, 140) == 5)
        {
            nrintrb += 12;
        }
    else if(getpixel(400, 140) == 14)
        {
            nrintrb += 16;
        }
    else if(getpixel(400, 140) == 0)
        {
            nrintrb += 20;
        }
    else if(getpixel(400, 140) == 3)
        {
            nrintrb += 24;
        }
    else if(getpixel(400, 140) == 6)
        {
            nrintrb += 28;
        }
    Sleep(1000);
    closegraph();
    cout<<v[nrintrb]<<endl;
    cout<<r[nrintrb]<<endl;
    cout<<"Alege varianta corecta! \n";
    cin>>litera;
    if(rasp[nrintrb] == litera) cout<<"Raspuns corect! Ai castigat!";
    else cout<<"Raspuns gresit. Mai incearca...";

    return 0;
}
