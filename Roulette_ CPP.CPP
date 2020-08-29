#include"fstream.h"
#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"dos.h"
#include"stdlib.h"
#include"graphics.h"

class game
{ signed long int amt,bamt,wamt,iamt;
  int token,bet;
  char name[20];

  public:
    game()
    { amt=0; bamt=0; wamt=0; iamt=0; token=0; bet=0;
      strcpy(name,"NULL");
    }

  void get();
  void show();
  void beting();
  int retbet();
  void upamt();
  void upamt1();
  int rettkn();
  char * retname();
  signed long int retamt();
  signed long int retwamt();
  signed long int retbamt();
  signed long int retiamt();

  ~game()
  { //over
  }

};

void game::get()
  {  gotoxy(22,5);cout<<"=================================";
     gotoxy(25,6);cout<<"Enter the details of player";
     gotoxy(22,7);cout<<"=================================";
      for(int i=0;i<33;i++)
      { gotoxy(22+i,10);cout<<"-";
	gotoxy(22+i,12);cout<<"-";
	gotoxy(22+i,14);cout<<"-";
      }
      for(int j=0;j<5;j++)
      { gotoxy(22,10+j);cout<<"|";
	gotoxy(55,10+j);cout<<"|";
      }
     gotoxy(25,11);cout<<"Name:- ";
     gets(name);
    gotoxy(25,13);cout<<"Total amount:- ";
     cin>>amt;
     randomize();
     token=random(50)+1;
     for(int k=0;k<5;k++)
      { for(int l=0;l<21;l++)
	{ gotoxy(28,18+k);cout<<"#";
	  gotoxy(49,18+k);cout<<"#";
	  gotoxy(28+l,18);cout<<"#";
	  gotoxy(28+l,22);cout<<"#";
	}
      }
     gotoxy(30,20);cout<<"Token no.:- ";
     cout<<token;
  iamt=amt;
  }

  void game::show()
  {  gotoxy(5,5);cout<<"Token no.:- ";
     cout<<token;
     gotoxy(5,7);cout<<"Name:- ";
     puts(name);
     gotoxy(5,8);cout<<"Total amount:- ";
     cout<<amt;
  }

  void game::beting()
  { gotoxy(5,11);cout<<"Select no. from 1-12 to bet:- ";
    cin>>bet;
    gotoxy(5,13);cout<<"Amount to bet:- ";
    cin>>bamt;
  }
  int game::retbet()
  { return bet;
  }
  void game::upamt()
  { amt+=bamt*10;
  }
  void game::upamt1()
  { amt-=bamt;
  }
  int game::rettkn()
  { return token;
  }
  char * game::retname()
  {  return name;
  }
  signed long int game::retamt()
  { return amt;
  }
  signed long int game::retwamt()
  { wamt=10*bamt;
    return wamt;
  }
  signed long int game::retbamt()
  {  return bamt;
  }
  signed long int game::retiamt()
  { return iamt;
  }

game player;
int no,a,b,c,d,e,f,g,h,i,j,k,l,t;

void soun(int s)
{  sound(s);
   delay(100);
   nosound();
}

void wel()
{  setbkcolor(WHITE);
   soun(10000);
   settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,7);
   setcolor(12);
   outtextxy(50,80,"BETTING GAME");delay(500);
   delay(100);
   setlinestyle(DASHED_LINE,3,THICK_WIDTH);
   rectangle(40,210,560,420);
   soun(500);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,10);
   soun(900);
   setcolor(6);
   outtextxy(80,200,"C");delay(500);
   soun(200);
   setcolor(2);
   outtextxy(140,250,"A");delay(500);
   soun(800);
   setcolor(3);
   outtextxy(230,200,"S");delay(500);
   soun(300);
   setcolor(4);
   outtextxy(310,250,"I");delay(500);
   soun(700);
   setcolor(5);
   outtextxy(360,200,"N");delay(500);
   soun(400);
   setcolor(9);
   outtextxy(460,250,"O");delay(500);
}

void win()
{  setcolor(RED);
   setlinestyle(SOLID_LINE,3,THICK_WIDTH);
   rectangle(40,60,600,260);
   setfillstyle(CLOSE_DOT_FILL,CYAN);
   floodfill(50,70,RED);
   setbkcolor(9);
   setcolor(YELLOW);
   sound(300);
   delay(100);
   nosound();
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
   outtextxy(60,80,"CONGRATULATION");
   sound(1000);
   delay(100);
   nosound();
   setcolor(RED);
   outtextxy(180,160,"YOU WIN");
   sound(500);
   delay(100);
   nosound();
getch();
}

void loose()
{  setcolor(RED);
   setlinestyle(SOLID_LINE,3,THICK_WIDTH);
   rectangle(40,60,600,260);
   setfillstyle(CLOSE_DOT_FILL,RED);
   floodfill(50,70,RED);
   setbkcolor(GREEN);
   setcolor(YELLOW);
   sound(300);
   delay(100);
   nosound();
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
   outtextxy(80,100,"YOU LOOSE !!!!!!");
   sound(100);
   delay(1000);
   nosound();
getch();
}

void end()
{  clrscr();
   cleardevice();
   setbkcolor(YELLOW);
   setcolor(1);

   settextstyle(DEFAULT_FONT,HORIZ_DIR,10);
   outtextxy(80,60,"Thanks");delay(700);
   setlinestyle(2,2,THICK_WIDTH);
   line(70,150,560,150);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
   outtextxy(240,240,"for");delay(700);
   outtextxy(140,360,"playing");delay(700);
   getch();
   closegraph();

}
   void center_ring()
    {    arc(450,300,88,60,20);
	 line(452,280,459,270);
	 line(460,285,459,270);
	 setfillstyle(SOLID_FILL,BLUE);
	 floodfill(452,302,1);
	 floodfill(460,302,1);
	 floodfill(452,298,1);
	 floodfill(460,298,1);
	 floodfill(448,302,1);
	 floodfill(440,302,1);
	 floodfill(448,298,1);
	 floodfill(440,298,1);
	 floodfill(452,295,1);
	 floodfill(448,295,1);
	 floodfill(452,305,1);
	 floodfill(448,305,1);
    }


void swap()
{ t=a;
  a=b;
  b=c;
  c=d;
  d=e;
  e=f;
  f=g;
  g=h;
  h=i;
  i=j;
  j=k;
  k=l;
  l=t;
}

   void ring(int fl)
   { int sp=0,ra=40;
       if(fl==0)
	sp=1;
	else
	 sp=36;

     for(int x=1;x<=sp;x++)
     { if(24+fl!=x)
       { setfillstyle(SOLID_FILL,1+l);
	 floodfill(440,250,1);
	 gotoxy(52,13);cout<<l;

	 setfillstyle(SOLID_FILL,1+k);
	 floodfill(325,235,1);
	 gotoxy(47,15);cout<<k;

	 setfillstyle(SOLID_FILL,1+j);
	 floodfill(320,280,1);
	 gotoxy(45,18);cout<<j;

	 setfillstyle(SOLID_FILL,1+i);
	 floodfill(320,320,1);
	 gotoxy(45,21);cout<<i;

	 setfillstyle(SOLID_FILL,1+h);
	 floodfill(330,360,1);
	 gotoxy(47,24);cout<<h;

	 setfillstyle(SOLID_FILL,1+g);
	 floodfill(440,430,1);
	 gotoxy(54,25);cout<<g;

	 setfillstyle(SOLID_FILL,1+f);
	 floodfill(520,430,1);
	 gotoxy(60,25);cout<<f;

	 setfillstyle(SOLID_FILL,1+e);
	 floodfill(570,365,1);
	 gotoxy(66,24);cout<<e;

	 setfillstyle(SOLID_FILL,1+d);
	 floodfill(580,310,1);
	 gotoxy(69,21);cout<<d;

	 setfillstyle(SOLID_FILL,1+c);
	 floodfill(585,240,1);
	 gotoxy(69,18);cout<<c;

	 setfillstyle(SOLID_FILL,1+b);
	 floodfill(532,185,1);
	 gotoxy(66,15);cout<<b;

	 setfillstyle(SOLID_FILL,1+a);
	 floodfill(460,250,1);
	 gotoxy(60,13);cout<<a;

	 center_ring();
	 swap();
	 soun(800);
	 delay(ra);
	 ra+=20;
	}
	else
	break;
      }
    }
void main()
{  char ch;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   wel();
   getch();
   cleardevice();
   setbkcolor(6);
   setcolor(1);
   setlinestyle(SOLID_LINE,3,THICK_WIDTH);
   rectangle(100,50,540,400);
   setfillstyle(XHATCH_FILL,1);
   floodfill(1,1,1);
   player.get();
   getch();
   gotoxy(15,24);cout<<"Press any key to play game.................";
   getch();
again:

   setbkcolor(6);																																									  cleardevice();
   setcolor(9);
   setlinestyle(0,0,THICK_WIDTH);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
   outtextxy(330,50,"BETTING WHEEL");delay(500);
   setcolor(1);
   circle(450,300,150);
   setlinestyle(0,0,NORM_WIDTH);
   line(300,300,600,300);
   line(450,150,450,450);
   line(532,425,368,175);
   line(585,365,315,235);
   line(532,175,368,425);
   line(585,235,315,365);
   a=1;b=2;c=3;d=4;e=5;f=6;g=7;h=8;i=9;j=10;k=11;l=12;
   ring(0);
   player.show();
   player.beting();
   gotoxy(5,20);cout<<"Press any key to spin wheel...";
   getch();
   gotoxy(4,20);cout<<"SPINNING... Wait for your LUCK ###";
   randomize();
   no=random(12)+1;
   ring(no);

   delay(1000);
   if(player.retbet()==no)
   { cleardevice();
     win();
     player.upamt();
     gotoxy(1,18);cout<<"#################### YOU GOT 10 TIMES OF YOUR BETING AMOUNT ####################";
     gotoxy(10,20);cout<<"Token no.:- ";
     cout<<player.rettkn();
     gotoxy(10,21);cout<<"Name:- ";
     puts(player.retname());
     gotoxy(40,21);cout<<"Winning amount:- ";
     cout<<player.retwamt();
     gotoxy(10,22);cout<<"Total amount:- ";
     cout<<player.retamt();
     gotoxy(40,22);cout<<"Initial amount:- ";
     cout<<player.retiamt();
     getch();
     soun(750);
     }
       else
       {  cleardevice();
	  loose();
	  player.upamt1();
	  gotoxy(1,18);cout<<"************************* YOU LOOSE YOUR BETING AMOUNT *************************";
	  gotoxy(10,20);cout<<"Token no.:- ";
	  cout<<player.rettkn();
	  gotoxy(10,21);cout<<"Name:- ";
	  puts(player.retname());
	  gotoxy(40,21);cout<<"Loosing amount:- ";
	  cout<<player.retbamt();
	  gotoxy(10,22);cout<<"Remaning amount:- ";
	  cout<<player.retamt();
	  gotoxy(40,22);cout<<"Initial amount:- ";
	  cout<<player.retiamt();
	  getch();
	   soun(750);
	  }

       gotoxy(6,25);cout<<"Press 'y' or 'Y' to play again and any other key to exit.........";
	    ch=getch();
	    if(ch=='y'||ch=='Y')
	    goto again;
end();
}
