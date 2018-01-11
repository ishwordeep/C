#include<stdio.h>
#include<conio.h>
 int main()
 {
     int ch=65;

     while(ch>='A'&&ch<='Z')

     {
      printf("%c\n",ch);
      ch=ch+1;
     }
     while(ch<='z')
     {
         ch=ch+1;
         if(ch>='a'&&ch<='z')
         {
             printf("%c\n",ch);
         }
     }
     getch();
     return(0);

 }
