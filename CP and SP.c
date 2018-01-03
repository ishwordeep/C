#include<stdio.h>
#include<conio.h>
 void main()
 {
     int CP,SP;

     printf("\t\t\t\t this is a program to calculate profit or loss made by a shopkeeper\n");
     printf("Enter cost price of the product\n");
     scanf("%d",&CP);
     printf("Enter the selling price of the product\n");
     scanf("%d",&SP);

     if(SP>CP)

     {
         printf("the shopkeeper has made profit of %d\n",SP-CP);
     }

    else if(SP<CP)
    {
         printf("The shopkeeper has made loss of %d",CP-SP);
    }
    else
    {
        printf("Shopkeeper sold it without any profit or loss");
    }

     getch();
 }
