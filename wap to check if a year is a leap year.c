//wap to check if a year is a leap year 
#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
     printf("enter a year\t");
     scanf("%d",&year);

     (year%4==0&&year%100!=0)?printf("leap year"):((year%40==0)?printf("leap year"):printf("not a leap year"));

    getch();
}
