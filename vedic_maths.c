
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,num=1;
  while(num==1)
  {
printf("\t\t\t\t\t enter a number to begin with\n");
scanf("%d",&a);
printf("\n\n\n\t\t\t\t\t%d\t",a+3);
printf("%d\t",a+8);
printf("%d\n\t\t\t\t\t",a+1);
printf("%d\t",a+2);
printf("%d\t",a+4);
printf("%d\n\t\t\t\t\t",a+6);
printf("%d\t",a+7);
printf("%d\t",a);
printf("%d\n\n\n",a+8);
printf("\t\t\t\t\t you will get same result (%d) while doing addition from any side",a+3+a+8+a+1);
printf("\n\n\t\t\t\t\t enter 1 if you want to try this again or any number to quit");
scanf("%d",&num);
  }
  printf("thank you for using my app");
getch();


}
