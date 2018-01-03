#include<stdio.h>
#include<conio.h>
int main()
{
    int number;

    printf("enter any three digit number\n");
    scanf("%d",&number);
    if (((number/100)==0)||((number/1000)>1))
    {
        printf("given number is not a three digit number\n");
    }
    else {
    printf("your first digit of number is %d \n",number/100);
    printf("your second digit of number is %d \n",(number%100)/10);
    printf("your third digit of number is %d \n",(number%100)%10);
    }
    getch();

}
