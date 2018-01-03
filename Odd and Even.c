#include<stdio.h>
#include<conio.h>
 void main()
 {
     int number;

     printf("\t\t\t\t This program is to determine if the number is odd or even\n");
     printf("Please enter any number");

     scanf("%d",&number);

     if((number%2==0))
     {
         printf("the given number %d is even",number);
     }
     else
     {
         printf("the given number %d is odd",number);
     }
     getch();
 }
