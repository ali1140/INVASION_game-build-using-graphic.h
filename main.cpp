#include <iostream>
#include <graphics.h>
#include <windows.h>
#include <mmsystem.h>
#include <chrono>
#include <thread>
#include <cmath>

using namespace std;
const int jumlah= 30;
const int jumlahpm= 50;
int hp=5,xpause,ypause;
int i=1,s=0;

 void *player1,*player2,*player3,*player4,*player5,*player6,*player7,*player8,*gameover;
 void *player,*musuh,*tutor;
    void *musuhdua;
    void *bg;
    void *buff;
    void *buff2;
    unsigned int sizee;

    int ip;
    char str[999],str2[999];
    const double pi = 3.14159265358979323846;

int getRandomInRange(int a) {
    // Inisialisasi generator angka acak dengan seed waktu saat ini
    srand(static_cast<unsigned int>(std::time(nullptr)));

    // Menghasilkan bilangan acak dalam rentang [-a, a]
    int randomNum = rand() % (2 * a + 1) - a;

    return randomNum;
}
class Cpesawat
{
public:
    int x,y,yb,ypm,f[jumlah],flag[jumlah],xm,xm2,ammoo,hitx1,hity1,hitx2,hity2,score=0,tambah=1,
    xbuff=-50,ybuff=-50,xmm=-100,ybb,a=800,xmm2=-100,ybb2,amunisi=0,vpm=15;
    float s1,s,sm,v,xp[jumlah],yp[jumlah],xp2[jumlah],yp2[jumlah],hx,hy,hw,hl,hxm, hym, hwm, hlm,hxm2[3], hym2[3], hwm2[3], hlm2[3],hx2,hy2,hw2,hl2,hx3,hy3,hw3,hl3,
    hxb,hyb,hwb,hlb,hxb2,hyb2,hwb2,hlb2;
    //char *img[99999],*img2[99999];
    Cpesawat()
    {
        xm = 50+rand()%750;
        xm2= 20+rand()%750;
        v  = 1+rand()%10+tambah;
        s  = 8+rand()%13;
        sm = 8+rand()%10;
        s1 = 3;
        xbuff=50;
        ybuff=50;
        if (xm<70)
        {
            xm=70;
        }
        else if(xm>700)
        {
            xm=680;
        }
   }

void getiing()
{
    sizee = imagesize(0,0,800,800);



    player1 = malloc(sizee);
    player2 = malloc(sizee);
    player3 = malloc(sizee);
    player4 = malloc(sizee);
    player5 = malloc(sizee);
    player6 = malloc(sizee);
    player7 = malloc(sizee);
    player8 = malloc(sizee);
    player = malloc(sizee); // Pesan memori untuk gambar
    musuh = malloc(sizee);
    musuhdua = malloc(sizee);
    bg = malloc(sizee);
    buff = malloc(sizee);
    buff2 = malloc(sizee);
    gameover = malloc(sizee);
    tutor = malloc(sizee);
    readimagefile("tutorial2.jpeg",0,0,800,800);
    getimage(0,0,800,800,tutor);
    cleardevice();
    readimagefile("gameoverpage.jpeg",0,0,800,800);
    getimage(0,0,800,800,gameover);
    cleardevice();
    readimagefile("bgcoba2.jpeg",0,0,800,800);
    getimage(0,0,800,800,bg);
    cleardevice();
    readimagefile("iniplayerr.jpeg",50,50,150,200);
    getimage(50,50,150,200,player);
    cleardevice();
    readimagefile("inimusuhh.jpeg",200,200,300,300);
    getimage(200,200,300,300,musuh);
    cleardevice();
    readimagefile("inimusuh2.jpeg",300,300,400,450);
    getimage(300,300,400,450,musuhdua);
    cleardevice();
    readimagefile("health2.jpeg",50,50,100,100);
    getimage(50,50,100,100,buff);
    cleardevice();
    readimagefile("buff2.jpeg",50,50,100,100);
    getimage(50,50,100,100,buff2);
    cleardevice();

    readimagefile("megumin1.jpeg",0,0,175,175);
    getimage(0,0,175,175,player1);
    cleardevice();
    readimagefile("megumin2.jpeg",0,0,175,175);
    getimage(0,0,175,175,player2);
    cleardevice();
    readimagefile("megumin3.jpeg",0,0,175,175);
    getimage(0,0,175,175,player3);
    cleardevice();
    readimagefile("megumin4.jpeg",0,0,175,175);
    getimage(0,0,175,175,player4);
    cleardevice();
    readimagefile("megumin5.jpeg",0,0,175,175);
    getimage(0,0,175,175,player5);
    cleardevice();
    readimagefile("megumin6.jpeg",0,0,175,175);
    getimage(0,0,175,175,player6);
    cleardevice();
    readimagefile("megumin7.jpeg",0,0,175,175);
    getimage(0,0,175,175,player7);
    cleardevice();
    readimagefile("megumin8.jpeg",0,0,175,175);
    getimage(0,0,175,175,player8);
    cleardevice();

}

void pesawat(){

hx3 = mousex()-50;
hw3 = 100;
hy3 = mousey()-50;
hl3 = 100;
   // readimagefile("musuhnih.jpeg",mousex() - 50,mousey()-50,mousex()+50,mousey()+50);


//        line(0*s1+x,-23.5*s1+y,4*s1+x,-2*s1+y);
//        line(4*s1+x,-2*s1+y,14*s1+x,5*s1+y);
//        line(14*s1+x,5*s1+y,14*s1+x,9*s1+y);
//        line(14*s1+x,5*s1+y,14*s1+x,9*s1+y);
//        line(14*s1+x,9*s1+y,4*s1+x,7*s1+y);
//        line(4*s1+x,7*s1+y,4*s1+x,11.5*s1+y);
//        line(4*s1+x,11.5*s1+y,8*s1+x,17*s1+y);
//        line(8*s1+x,17*s1+y,6*s1+x,20*s1+y);
//        line(6*s1+x,20*s1+y,-6*s1+x,20*s1+y);
//        line(-6*s1+x,20*s1+y,-8*s1+x,17*s1+y);
//        line(-8*s1+x,17*s1+y,-4*s1+x,11.5*s1+y);
//        line(-4*s1+x,11.5*s1+y,-4*s1+x,7*s1+y);
//        line(-4*s1+x,7*s1+y,-14*s1+x,9*s1+y);
//        line(-14*s1+x,9*s1+y,-14*s1+x,5*s1+y);
//        line(-14*s1+x,5*s1+y,-4*s1+x,-2*s1+y);
//        line(-4*s1+x,-2*s1+y,0*s1+x,-23.5*s1+y);
//
//        line(8*s1+x,-8*s1+y,3*s1+x,-8*s1+y);
//        line(8*s1+x,-8*s1+y,2*s1+x,-12.8*s1+y); // s*s1+yp kecil kanan
//
//        line(-3*s1+x,-8*s1+y,-8*s1+x,-8*s1+y);
//        line(-8*s1+x,-8*s1+y,-2*s1+x,-12.8*s1+y); //s*s1+yp kecil kiri
//
//        line(-14.1*s1+x,2.8*s1+y,-14*s1+x,3*s1+y);
//        line(-14*s1+x,3*s1+y,-14*s1+x,10*s1+y);
//        line(-14*s1+x,10*s1+y,-14.2*s1+x,10*s1+y); //rudal kiri
//        line(-14.2*s1+x,10*s1+y,-14.2*s1+x,3*s1+y);
//        line(-14.2*s1+x,3*s1+y,-14.1*s1+x,2.8*s1+y);
//
//        line(14.1*s1+x,2.8*s1+y,14.2*s1+x,3*s1+y);
//        line(14.2*s1+x,3*s1+y,14.2*s1+x,10*s1+y);
//        line(14.2*s1+x,10*s1+y,14*s1+x,10*s1+y); //rudal kanan
//        line(14*s1+x,10*s1+y,14*s1+x,3*s1+y);
//        line(14*s1+x,3*s1+y,14.1*s1+x,2.8*s1+y);
//        floodfill(4*s1+x,-10*s1+y,WHITE);
//        floodfill(-4*s1+x,-10*s1+y,WHITE);
//   char *img[99999],*img2[99999];
//    readimagefile("iniplayer2.jpeg",50,50,150,150);
//
//    getimage(50,50,150,150,img);
//    //getimage(350,50,250,150,img2);
//    cleardevice();
//    putimage(mousex()-50,mousey()-50,img,1);
//    //putimage(xm,yb,img2,1);
putimage(mousex()-50,mousey()-70,player,1);
putimage(0,0,bg,XOR_PUT);

//rectangle(hx3,hy3,hx3+hw3,hy3+hl3);


}
void musuh1 (){

     //readimagefile("inimusuh.jpeg",xm- 50,y-50,xm+50,y+50);
//        char *img2[99999];
//    readimagefile("inimusuh.jpeg",350,50,250,150);
//    getimage(350,50,250,150,img2);
//    cleardevice();
//char *img2[99999];
//
//getiing();
//   putimage(xm,yb,img2,1);
    hx = -4*s+xm;
    hw = 110;
    hy = -3*s+yb;
    hl = 90;
    hxb = -2*s+xmm;
    hwb = 90;
    hyb = -1*s+yb;
    hlb = 70;
    setcolor(RED);
    //arectangle(hxb,hyb,hxb+hwb,hyb+hlb);
    //rectangle(hx,hy,hx+hw,hy+hl);
    //line(-4*s+xm,-3*s+y,4*s+xm,-3*s+y);
    //line(-4*s+xm,3*s+y,4*s+xm,3*s+y);
    setcolor(WHITE);


//    line(-1*s+xm,3*s+yb,-1.5*s+xm,0.7*s+yb);
//    line(-1.5*s+xm,0.7*s+yb,-2.5*s+xm,-1*s+yb);
//    line(-2.5*s+xm,-1*s+yb,-3.4*s+xm,-2.2*s+yb);
//    line(-3.4*s+xm,-2.2*s+yb,-3.5*s+xm,-3*s+yb);
//    line(-3.5*s+xm,-3*s+yb,-1.2*s+xm,-1.2*s+yb);
//    line(-1.2*s+xm,-1.2*s+yb,-1.2*s+xm,-2.4*s+yb);
//    line(-1.2*s+xm,-2.4*s+yb,-1*s+xm,-2.8*s+yb);
//    line(-1*s+xm,-2.8*s+yb,-0.8*s+xm,-1.2*s+yb);
//    line(-0.8*s+xm,-1.2*s+yb,-0.4*s+xm,-2.6*s+yb);
//    line(-0.4*s+xm,-2.6*s+yb,0.4*s+xm,-2.6*s+yb);
//    line(0.4*s+xm,-2.6*s+yb,0.8*s+xm,-1.2*s+yb);
//    line(0.8*s+xm,-1.2*s+yb,1*s+xm,-2.8*s+yb);
//    line(1*s+xm,-2.8*s+yb,1.2*s+xm,-2.4*s+yb);
//    line(1.2*s+xm,-2.4*s+yb,1.2*s+xm,-1.2*s+yb);
//    line(1.2*s+xm,-1.2*s+yb,3.5*s+xm,-3*s+yb);
//    line(3.5*s+xm,-3*s+yb,3.4*s+xm,-2.2*s+yb);
//    line(3.4*s+xm,-2.2*s+yb,2.5*s+xm,-1*s+yb);
//    line(2.5*s+xm,-1*s+yb,1.5*s+xm,0.7*s+yb);
//    line(1.5*s+xm,0.7*s+yb,1*s+xm,3*s+yb);
//    line(1*s+xm,3*s+yb,1*s+xm,0.5*s+yb);
//    line(1*s+xm,0.5*s+yb,0.5*s+xm,-0.5*s+yb);
//    line(0.5*s+xm,-0.5*s+yb,0.4*s+xm,1.4*s+yb);
//    line(0.4*s+xm,1.4*s+yb,0*s+xm,3*s+yb);
//    line(0*s+xm,3*s+yb,-0.4*s+xm,1.4*s+yb);
//    line(-0.4*s+xm,1.4*s+yb,-0.5*s+xm,-0.5*s+yb);
//    line(-0.5*s+xm,-0.5*s+yb,-1*s+xm,0.5*s+yb);
//    line(-1*s+xm,0.5*s+yb,-1*s+xm,3*s+yb);
putimage(xm-27,yb-20,musuh,XOR_PUT);
putimage(xmm,ybb,buff,XOR_PUT);
}
void musuh2(){

    hx2 = -4*sm+xm2;
    hw2= 115;
    hy2= -3*sm+yb;
    hl2= 90;
    hxb2 = -2*s+xmm2;
    hwb2 = 90;
    hyb2 = -1*s+yb;
    hlb2 = 70;
    setcolor(RED);
    //rectangle(hxb2,hyb2,hxb2+hwb2,hyb2+hlb2);
    //rectangle(hx2,hy2,hx2+hw2,hy2+hl2);
//    setcolor(RED);
//    rectangle(-4*sm+xm2,3.2*sm+y,4*sm+xm2,-3.2*sm+y);
//    line(-4*sm+xm2,-3*sm+y,4*sm+xm2,-3*sm+y);
//    line(-4*sm+xm2,3*sm+y,4*sm+xm2,3*sm+y);
    setcolor(WHITE);

//    line (-0.1*sm+xm2,5.2*sm+yb,-1.4*sm+xm2,3*sm+yb);
//    line (-1.4*sm+xm2,3*sm+yb,-1.4*sm+xm2,1.2*sm+yb);
//    line (-1.4*sm+xm2,1.2*sm+yb,-1*sm+xm2,0.8*sm+yb);
//    line (-1*sm+xm2,0.8*sm+yb,-1*sm+xm2,0.2*sm+yb);
//    line (-1*sm+xm2,0.2*sm+yb,-2.5*sm+xm2,-2.5*sm+yb);
//    line (-2.5*sm+xm2,-2.5*sm+yb,-3*sm+xm2,-0.8*sm+yb);
//    line (-3*sm+xm2,-0.8*sm+yb,-3*sm+xm2,-4*sm+yb);
//    line (-3*sm+xm2,-4*sm+yb,-1.8*sm+xm2,-3.2*sm+yb);
//    line (-1.8*sm+xm2,-3.2*sm+yb,-1.7*sm+xm2,-3.9*sm+yb);
//    line (-1.7*sm+xm2,-3.9*sm+yb,-1.4*sm+xm2,-4.2*sm+yb);
//    line (-1.4*sm+xm2,-4.2,-1.2*sm+xm2,-3.4);
//    line (-1.2*sm+xm2,-3.4*sm+yb,-0.8*sm+xm2,-4.2*sm+yb);
//    line (-0.8*sm+xm2,-4.2*sm+yb,-0.8*sm+xm2,-4.8*sm+yb);
//    line (-0.8*sm+xm2,-4.8*sm+yb,-0.4*sm+xm2,-5.2*sm+yb);
//    line (-0.4*sm+xm2,-5.2*sm+yb,-0.3*sm+xm2,-4.45*sm+yb);
//    line (-0.3*sm+xm2,-4.45*sm+yb,-0.1*sm+xm2,-4.3*sm+yb);
//    line (-0.1*sm+xm2,-4.3*sm+yb,-0.1*sm+xm2,-3.3*sm+yb);
//    line (-0.1*sm+xm2,-3.3*sm+yb,0*sm+xm2,-3.8*sm+yb);
//    line (0*sm+xm2,-3.8*sm+yb,0.1*sm+xm2,-3.3*sm+yb);
//    line (0.1*sm+xm2,-3.3*sm+yb,0.1*sm+xm2,-4.3*sm+yb);
//    line (0.1*sm+xm2,-4.3*sm+yb,0.3*sm+xm2,-4.45*sm+yb);
//    line (0.3*sm+xm2,-4.45*sm+yb,0.4*sm+xm2,-5.2*sm+yb);
//    line (0.4*sm+xm2,-5.2*sm+yb,0.8*sm+xm2,-4.8*sm+yb);
//    line (0.8*sm+xm2,-4.8*sm+yb,0.8*sm+xm2,-4.2*sm+yb);
//    line (0.8*sm+xm2,-4.2*sm+yb,1.2*sm+xm2,-3.4*sm+yb);
//    line (1.2*sm+xm2,-3.4*sm+yb,1.4*sm+xm2,-4.2*sm+yb);
//    line (1.4*sm+xm2,-4.2*sm+yb,1.7*sm+xm2,-3.9*sm+yb);
//    line (1.7*sm+xm2,-3.9*sm+yb,1.8*sm+xm2,-3.2*sm+yb);
//    line (1.8*sm+xm2,-3.2*sm+yb,3*sm+xm2,-4*sm+yb);
//    line (3*sm+xm2,-4*sm+yb,3*sm+xm2,-0.8*sm+yb);
//    line (3*sm+xm2,-0.8*sm+yb,2.5*sm+xm2,-2.5*sm+yb);
//    line (2.5*sm+xm2,-2.5*sm+yb,1*sm+xm2,0.2*sm+yb);
//    line (1*sm+xm2,0.2*sm+yb,1*sm+xm2,0.8*sm+yb);
//    line (1*sm+xm2,0.8*sm+yb,1.4*sm+xm2,1.2*sm+yb);
//    line (1.4*sm+xm2,1.2*sm+yb,1.4*sm+xm2,3*sm+yb);
//    line (1.4*sm+xm2,3*sm+yb,0.1*sm+xm2,5.2*sm+yb);
//    line (0.1*sm+xm2,5.2*sm+yb,0.1*sm+xm2,3.6*sm+yb);
//    line (0.1*sm+xm2,3.6*sm+yb,-0.1*sm+xm2,3.6*sm+yb);
//    line (-0.1*sm+xm2,3.6*sm+yb,-0.1*sm+xm2,5.2*sm+yb);
putimage(xm2-27,yb-20,musuhdua,XOR_PUT);
putimage(xmm2,ybb2,buff2,XOR_PUT);

}

void background()
{
    readimagefile("background22.jpeg",0,0,800,800);
}
void loading(int x,int v)
{
    int s;
    initwindow(800,800);

    readimagefile("background2.jpeg",0,0,800,800);
    for( x=0;x<250;x++){
        s++;
    line(250,450,550,450);
    line(250,450,250,425);
    readimagefile("loadingg.jpeg",250+x,425,300+x,450);
    setcolor(GREEN);
    line(250+x,450,250+x,425);
    setcolor(15);
    line(250,425,550,425);
    line(550,425,550,450);

    }
    delay(0.1);
    //gamee();
}
void pause(int milliseconds) {
   this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

int cekP(Cpesawat k, Cpesawat m)
{
   if (
    k.hxm < m.hx + m.hw &&
    k.hxm + k.hwm > m.hx &&
    k.hym < m.hy + m.hl &&
    k.hlm + k.hym > m.hy
      )
      {
        score+=1;
        std::cout<<"kena";
        return 1;
      }
      else return 0;

}
int cekP2(Cpesawat k, Cpesawat m)
{
      if(k.hxm < m.hx2 + m.hw2 &&
              k.hxm + k.hwm > m.hx2 &&
              k.hym < m.hy2 + m.hl2 &&
              k.hlm + k.hym > m.hy2
      )
      {
        score+=1;
        std::cout<<"kenaM2";
        return 1;
      }


      else return 0;

}
int cekP3(Cpesawat k, Cpesawat m)
{
      if(k.hx3 < m.hx2 + m.hw2 &&
              k.hx3+ k.hw3 > m.hx2 &&
              k.hy3< m.hy2 + m.hl2 &&
              k.hl3 + k.hy3 > m.hy2
      )
      {
          hp--;
        std::cout<<"woy HIT";
        std::cout<<"HP=="<<hp;
        return 1;
      }
      else return 0;
}
int cekP4(Cpesawat k, Cpesawat m)
{
      if(k.hx3 < m.hx + m.hw &&
              k.hx3+ k.hw3 > m.hx &&
              k.hy3< m.hy + m.hl &&
              k.hl3 + k.hy3 > m.hy
      )
      {
          hp--;
        std::cout<<"HITDUA";
        std::cout<<"HP=="<<hp;
        return 1;
      }
      else return 0;
}
int cekP5(Cpesawat k, Cpesawat m)
{
      if(k.hx3 < m.hxb + m.hwb &&
              k.hx3+ k.hw3 > m.hxb &&
              k.hy3< m.hy + m.hlb &&
              k.hl3 + k.hy3 > m.hyb
      )
      {
          hp++;
        std::cout<<"HITDUA";
        std::cout<<"HP=="<<hp;
        return 1;
      }
      else return 0;
}
int cekP6(Cpesawat k, Cpesawat m)
{
      if(k.hx3 < m.hxb2 + m.hwb2 &&
              k.hx3+ k.hw3 > m.hxb2 &&
              k.hy3< m.hy + m.hlb2&&
              k.hl3 + k.hy3 > m.hyb2
      )
      {
        std::cout<<"HITDUA";
        std::cout<<"HP=="<<hp;
        return 1;
      }
      else return 0;
}
int cekR(Cpesawat k, Cpesawat m)
{
   if (
    k.hxm2[1] < m.hx + m.hw &&
    k.hxm2[1]  + k.hwm2[1]  > m.hx &&
    k.hym2[1]  < m.hy + m.hl &&
    k.hlm2[1]  + k.hym2[1] > m.hy
      )
      {
        std::cout<<"kena";
        return 1;
      }
      else return 0;

}
int cekR2(Cpesawat k, Cpesawat m)
{
   if (
    k.hxm2[2]  < m.hx2 + m.hw2 &&
    k.hxm2[2] + k.hwm2[2] > m.hx2 &&
    k.hym2[2] < m.hy2 + m.hl2 &&
    k.hlm2[2] + k.hym2[2] > m.hy2
      )
      {
        std::cout<<"kena";
        return 1;
      }
      else return 0;

}

};
class artribut: public Cpesawat
{
    public:
void rudal (float x,float y,float s){
        hxm2[1] = -1*s+x;
        hym2[1] = 2.7*s+y;
        hwm2[1] = 15;
        hlm2[1] = -37;
    line (-0.2*s+x,3*s+y,-0.2*s+x,-3*s+y);
    line (-0.2*s+x,-3*s+y,0*s+x,-3.5*s+y);
    line (0*s+x,-3.5*s+y,0.2*s+x,-3*s+y);
    line (0.2*s+x,-3*s+y,0.2*s+x,3*s+y);

    line (0.2*s+x,2.2*s+y,0.8*s+x,3*s+y);
    line (0.8*s+x,3*s+y,0.2*s+x,3*s+y);

    line (-0.2*s+x,2.2*s+y,-0.8*s+x,3*s+y);
    line (-0.8*s+x,3*s+y,-0.2*s+x,3*s+y);
    //rectangle(hxm2[1],hym2[1],hxm2[1]+hwm2[1],hym2[1]+hlm2[1]);
}
void rudal2 (float x,float y,float s){
        hxm2[2] = -1*s+x;
        hym2[2] = 2.7*s+y;
        hwm2[2] = 15;
        hlm2[2] = -37;
    line (-0.2*s+x,3*s+y,-0.2*s+x,-3*s+y);
    line (-0.2*s+x,-3*s+y,0*s+x,-3.5*s+y);
    line (0*s+x,-3.5*s+y,0.2*s+x,-3*s+y);
    line (0.2*s+x,-3*s+y,0.2*s+x,3*s+y);

    line (0.2*s+x,2.2*s+y,0.8*s+x,3*s+y);
    line (0.8*s+x,3*s+y,0.2*s+x,3*s+y);

    line (-0.2*s+x,2.2*s+y,-0.8*s+x,3*s+y);
    line (-0.8*s+x,3*s+y,-0.2*s+x,3*s+y);
    //rectangle(hxm2[2],hym2[2],hxm2[2]+hwm2[2],hym2[2]+hlm2[2]);
}
void kaliber50 (float x,float y,float s){
        hxm = -1*s+x;
        hym = 2.7*s+y;
        hwm = 15;
        hlm = -37;
        setcolor(12);


    setlinestyle(0,0,3);
    line (0*s+x,2*s+y,0*s+x,-2*s+y);
    setlinestyle(0,0,0);
    setcolor(15);
    //rectangle(hxm,hym,hxm+hwm,hym+hlm);

}
};
class gameplay: public artribut
{
    public:

void gamee()
{
    int page=0;
    initwindow(800,800);
//initwindow(800,800);


   gameplay a;
   gameplay p[20];
   gameplay m;
   //PlaySound("backsound.wav",NULL,SND_ASYNC);
   a.mainmenu();
   a.getiing();
  
   while (1)
   {
       setactivepage(page);
       setvisualpage(1-page);
       //readimagefile("background3.jpeg",0,0,800,800);
       //a.background();
       //putimage(0,0,bg,XOR_PUT);
        cleardevice();



       a.pesawat();
       a.GerakMouse();
       a.ammo();
       a.ammo2();

       a.HP();


     settextstyle(1,0,3);
     outtextxy(70,20,"score  : ");
     outtextxy(80,50,"amunisi:  ");
     settextstyle(10,0,3);
     sprintf(str,"%d",score);
     outtextxy(145,20,str);
     sprintf(str2,"%d",amunisi);
     outtextxy(155,50,str2);
     settextstyle(0,0,0);


       if (ismouseclick(WM_RBUTTONDOWN) && amunisi >= 1)
        {
            amunisi-=1;
             a.shoot();
            PlaySound("misil.wav",NULL,SND_ASYNC); //sound effect
            clearmouseclick(WM_RBUTTONDOWN);
        }else if (ismouseclick(WM_LBUTTONDOWN))
        {
             a.shoot2();

           clearmouseclick(WM_LBUTTONDOWN);
        }else
        {
clearmouseclick(WM_RBUTTONDOWN);
        }
    for(int i = 0; i<4; i++)
     {
        //p[i].ammomusuh1();
       p[i].Gerakbawah();
       p[i].GerakPelurumusuh();
      p[i].gerakbuff();
      //p[i].kaliber50(p[i].xm,p[i].ypm,3);
       p[i].musuh1();
       p[i].musuh2();
       //p[i].shootmusuh1();
       if(cekP(a,p[i]))
            {
                p[i].explosion(p[i].xm-50,p[i].yb-50);
                p[i].xmm = p[i].xm;
                p[i].xm = -100;
                //p[i].xp = -10;
            }
        else if(cekP2(a,p[i]))
            {
                p[i].explosion(p[i].xm2-50,p[i].yb-50);
                p[i].xmm2 = p[i].xm2;
                p[i].xm2 = -100;
                //p[i].xp2[i] = -10;
            }
        else if(cekP3(a,p[i]))
            {
               p[i].xm2 = -100;
            }
        else if(cekP4(a,p[i]))
            {
                 p[i].xm = -100;
            }
        else if(cekP5(a,p[i]))
            {
                p[i].xmm = -100;
            }
        else if(cekP6(a,p[i]))
            {
                amunisi+=1;
                p[i].xmm2 = -100;
            }
        else if(cekR(a,p[i]))
            {
                p[i].explosion2(p[i].xm-50,p[i].yb-50);
                p[i].xmm = p[i].xm;
                p[i].xm = -100;
            }
        else if(cekR2(a,p[i]))
            {
                p[i].explosion2(p[i].xm2-50,p[i].yb-50);
                p[i].xmm2 = p[i].xm2;
                p[i].xm2 = -100;
            }
     }
     //a.CekHit();
     page=1-page;
     delay(1);
   }
}
void tutorial()
{
int xm,ym,page=0;



    while(1)
{
       setactivepage(page);
       setvisualpage(1-page);
       cleardevice();
       //putimage(0,0,tutor,XOR_PUT);
       readimagefile("tutorial2.jpeg",0,0,800,800);



        if (GetAsyncKeyState(VK_ESCAPE))
        {
            closegraph();
            gamee();
        }
        page=1-page;
        delay(1);

    }
    cleardevice();
}
void getgameover()
{
int xm,ym,page=0;



    while(1)
{
       setactivepage(page);
       setvisualpage(1-page);
       cleardevice();
       putimage(0,0,gameover,XOR_PUT);
       //readimagefile("background22.jpeg",0,0,800,800);
    //    setcolor(12);
    //    settextstyle(0,0,8);
    //    outtextxy(400,400,"GAME OVER");
    //    settextstyle(0,0,2);
    //    outtextxy(400,600,"Press Enter to retry");
    //    outtextxy(400,650,"Press ESC to exit");
    //    setcolor(15);



        if (GetAsyncKeyState(VK_RETURN))
        {
            hp=5;
            closegraph();
            gamee();
        }else if (GetAsyncKeyState(VK_ESCAPE))
        {
            exit(0);
        }
        page=1-page;
        delay(1);

    }
    cleardevice();
}
void Gerakbawah(){
    
    yb= yb+v;
        // float sudutMusuh1 = 1+getRandomInRange(pi);
        // float sudutMusuh2 = 2+getRandomInRange(pi);

        // float dxMusuh1 = 3* sin(sudutMusuh1);
        // float dxMusuh2 = 2* sin(sudutMusuh2);
        // xm=xm+dxMusuh1;
        // xm2=xm2+dxMusuh2;
         xm = xm + 1;
         xm2 = xm2 -1;


    if(yb>getmaxy())
    {
        yb = yb-getmaxy();
        xm = rand()%800;
        xm2=rand()%800;
        xmm=-100;
        xmm2=-100;
    }
}
void GerakPelurumusuh(){
    ypm=yb;
    ypm= ypm+15;

    if(ypm>getmaxx())
    {
        ypm = ypm-getmaxx();
    }
}
void gerakbuff(){
    ybb = yb;
    ybb2 = yb;
}
void GerakMouse(){
        x = mousex();
        y = mousey();
    }
void shoot() {
        for(int i = 0; i < jumlah; i++) {
                if(!flag[i]) {
                    flag[i] = 1;
                    xp[i] = x + 100;
                    yp[i] = y + 30;
                    break;
                    }
            }
     }
void ammo() {
         for(int i = 0; i < jumlah; i++) {
                if(flag[i]) {
                    yp[i] -= 15; // pergerakan pelurunya
                    if (yp[i] < 0) {
                            flag[i] = 0; // mark ammo as available
                    }
                    setcolor(12);
                   rudal(xp[i]-50,yp[i],7);//RUDAK KANAN
                   rudal2(xp[i]-150,yp[i],7);//RUDAL KIRI
                   setcolor(15);
}
}
}
void shoot2() {
        for(ip = 0; ip < jumlah; ip++) {
                if(!f[ip]) {
                    f[ip] = 1;
                    xp2[ip] = x + 85;
                    yp2[ip] = y - 3;
                    break;
                    }
            }
     }
void ammo2() {
         for(ammoo = 0; ammoo < jumlah; ammoo++) {
                if(f[ammoo]) {
                    yp2[ammoo] -=10; // pergerakan pelurunya
                    if (yp2[ammoo] < 0) {
                            f[ammoo] = 0; // mark ammoo as available
                    }
                   setcolor(14);
                   kaliber50(xp2[ammoo]-85,yp2[ammoo]-75,7);
                   setcolor(15);

}
}
}
// void shootmusuh1() {
//         for(int ipm = 0; ipm < jumlahpm; ipm++) {
//                 if(!f[ipm]) {
//                     f[ipm] = 1;
//                     xpm[ipm] = xm + 85;
//                     ypm[ipm] = yb - 3;
//                     break;
//                     }
//             }
//      }
// void ammomusuh1() {
//          for(int ammoo = 0; ammoo < jumlahpm; ammoo++) {
//                 if(f[ammoo]) {
//                     ypm[ammoo] +=10; // pergerakan pelurunya
//                     if (ypm[ammoo] < 0) {
//                             f[ammoo] = 0; // mark ammoo as available
//                     }
//                    setcolor(12);
//                    kaliber50(xpm[ammoo]-85,ypm[ammoo]-75,7);
//                    setcolor(15);

// }
// }
// }
void explosion(int x,int y)
{
        putimage(x,y,player3,XOR_PUT);
}
void explosion2(int x,int y)
{
        putimage(x,y,player5,XOR_PUT);
}
void mainmenu()
{
    Cpesawat a;
    int x,y,page=0;
    initwindow(800,800);
    PlaySound("backsound.wav",NULL,SND_ASYNC);

 while(1)
    {

       setactivepage(page);
       setvisualpage(1-page);

       cleardevice();
       readimagefile("background2.jpeg",0,0,800,800);
       x=mousex();
       y=mousey();


        setcolor(WHITE);
        rectangle(290,310,510,360);
        rectangle(290,370,510,420);
        rectangle(290,430,510,480);

        if((y>=310)&&(y<=360)&&(x>=290)&&(x<=510)){
        setfillstyle(SOLID_FILL,DARKGRAY);
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            PlaySound("click.wav",NULL,SND_ASYNC);
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            break;

        }
             floodfill(400,350,WHITE);

        }
        if((y>=370)&&(y<=420)&&(x>=290)&&(x<=510)){

        setfillstyle(SOLID_FILL,DARKGRAY);
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            PlaySound("click.wav",NULL,SND_ASYNC);
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            tutorial();


        }
             floodfill(400,400,WHITE);

        }


        if((y>=430)&&(y<=480)&&(x>=290)&&(x<=510)){

        setfillstyle(SOLID_FILL,DARKGRAY);
        if(ismouseclick(WM_LBUTTONDOWN))
        {

            closegraph();
            PlaySound("click.wav",NULL,SND_ASYNC);
            clearmouseclick(WM_LBUTTONDOWN);
            exit(0);

        }
             floodfill(400,460,WHITE);

        }else{
            clearmouseclick(WM_LBUTTONDOWN);

        }



    settextjustify(1,1);
    settextstyle(2,0,10);
    setcolor(RED);
    outtextxy(400,150,"INVASION");
    setcolor(LIGHTGRAY);
    settextstyle(3,0,4);
    outtextxy(400,350,"PLAY");
    outtextxy(400,410,"TUTORIAL");
    outtextxy(400,460,"EXIT");
    page=1-page;

    delay(1);

    }


}
void HP()
{
    if (hp==5)
    {
        readimagefile("hp5.jpeg",28,750,226,780);
    }
    else if (hp==4)
    {
        readimagefile("hp4.jpeg",28,750,226,780);
    }
    else if (hp==3)
    {
        readimagefile("hp3.jpeg",28,750,226,780);
    }
    else if (hp==2)
    {
        readimagefile("hp2.jpeg",28,750,226,780);
    }
    else if (hp==1)
    {
        readimagefile("hp1.jpeg",28,750,226,780);
    }
    else if(hp>5)
    {
        hp=5;
    }
     else if(hp<=0)
    {
        return getgameover();
    }

    //delay(100);

}
};


int main()
{
   gameplay a;
  //a.mainmenu();
   gameplay p[20];
  gameplay m;

    a.gamee();
}
