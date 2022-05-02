#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
int i,j;
int start();
int display();
COORD coord={0,0};
int tic[10];
int tic1[10]={'0','1','2','3','4','5','6','7','8','9'};
 void gotoxy(int x,int y)
 {
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int result(){
if(tic1[1]== tic1[2] && tic1[2]== tic1[3] || tic1[3]==tic1[5] && tic1[3]==tic1[7] || tic1[1]== tic1[4] && tic1[1]== tic1[7] || tic1[1]== tic1[5] && tic1[1]== tic1[9] || tic1[4]== tic1[5] && tic1[4]== tic1[6] || tic1[7]== tic1[8] && tic1[7]== tic1[9] || tic1[2]== tic1[5] &&tic1[2]== tic1[8] || tic1[3]== tic1[6] && tic1[3]== tic1[9])
    return (1);
   if(tic1[1]!='1' && tic1[2]!='2' && tic1[3]!='3' && tic1[4]!='4' && tic1[5]!='5' && tic1[6]!='6' && tic1[7]!='7' && tic1[8]!='8' && tic1[9]!='9')
        return 0;
            else
            return 2;
}

int start(){
int row,col,r,c,q;
      gotoxy(100,48);
      printf("lets play a game");
      Sleep(2200);
      system("cls");
      gotoxy(100,48);
      printf("loading...");
      gotoxy(100,50);
      for(r=1;r<=20;r++){
      for(q=0;q<=100000000;q++);
      printf("%c",177);
   }

}
int display(){

   for(i=0;i<30;i++){
     for(j=0;j<1;j++){
       printf("                                                                     $$");}
     printf("\n");}
   for(i=0;i<73;i++){
     for(j=73;j<74;j++){
       printf("$");
      }
   }
}

int matrix(){

printf("     |     |     \n");gotoxy(15,11);
printf("  %c  |  %c  | %c    \n",tic[1],tic[2],tic[3]);gotoxy(15,12);
printf("     |     |     \n");gotoxy(15,13);
printf("----------------\n");gotoxy(15,14);
printf("     |     |     \n");gotoxy(15,15);
printf("  %c  |  %c  | %c    \n",tic[4],tic[5],tic[6]);gotoxy(15,16);
printf("     |     |     \n");gotoxy(15,17);
printf("----------------\n");gotoxy(15,18);
printf("     |     |     \n");gotoxy(15,19);
printf("  %c  |  %c  | %c    \n",tic[7],tic[8],tic[9]);gotoxy(15,20);
printf("     |     |     \n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

}
int main()
{
    start();
    system("cls");
    int player=1,x,k,s=0,ss=0;
    char c,h;
    char a[30],b[30];
    gotoxy(100,48);
    puts("\nenter first player name");
    gets(a);
    system("cls");
    gotoxy(100,48);
    puts("\nenter second player name");
    gets(b);
    system("cls");

display();


 do
    {
    matrix();
    gotoxy(100,10);
    puts(a);
    gotoxy(115,10);
    printf("Battle with");
    gotoxy(100,12);
    puts(b);
    gotoxy(70,40);
    player = (player % 2) ? 1 : 2;
    printf("Player %d, enter a number:  ", player);
    scanf("%d", &x);
    c = (player == 1) ? 'X' : 'O';

   if(x==1 && tic1[1]=='1'){
      tic[1]=c;
      tic1[1]=c;}

   else if(x==2 && tic1[2]=='2'){
      tic[2]=c;
      tic1[2]=c;}

   else if(x==3 && tic1[3]=='3'){
      tic[3]=c;
      tic1[3]=c;}

   else if(x==4 && tic1[4]=='4'){
      tic[4]=c;
      tic1[4]=c;}

   else  if(x==5 && tic1[5]=='5'){
      tic[5]=c;
      tic1[5]=c;}

   else if(x==6 && tic1[6]=='6'){
      tic[6]=c;
      tic1[6]=c;}

    else if(x==7 && tic1[7]=='7'){
      tic[7]=c;
      tic1[7]=c;
    }

    else if(x==8 && tic1[8]=='8'){
      tic[8]=c;
      tic1[8]=c;}

    else if(x==9 && tic1[9]=='9'){
      tic[9]=c;
      tic1[9]=c;
    }

    else{
        printf("wrong move");
        player--;
  }
      k=result();
      player++;

}
   while (k ==2);{
           matrix();
}
    if (k == 1){
        Sleep(500);
        system("cls");
        gotoxy(74,25);
        printf("Game over");
        Sleep(2200);
        system("cls");
        gotoxy(74,25);
        printf("==>    Player %d win ", --player);
        Sleep(2200);
    }
    else if(k==0){
        Sleep(500);
        gotoxy(74,25);
        printf("Game over");
        Sleep(2200);
        system("cls");
        gotoxy(74,25);
        printf("==>\aGame draw");}
        Sleep(2200);
        getch();

        return 0;

}

