#include<stdio.h>
#include<conio.h>
 int main()
 {
     int num,n;
     char ch;

     printf("1 to check weather a no is odd or even\n");
     printf ("2 to check weather a no is positive or negative\n");
     printf("3 to check weather a character is vowel or consonant\n");
     printf("4 to check weather a number is divisible by 5 and 11 or not\n");
     printf("5 to check weather a character is alphabet or not\n");
     printf("\t\t\t\t enter your choice\t");
     scanf("%d",&n);

     switch(n)
     {
        case 1:
          printf("Please enter any number");
          scanf("%d",&num);
          (num%2==0)?printf("the number is even"):printf("the number is odd");
          break;
        case 2:
            printf("Please enter any number");
            scanf("%d",&num);
            (num>0)?printf("the number is positive"):printf("the number is negative");
            break;
        case 3:
            printf("Please enter any character");
            scanf(" %c",&ch);
            (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?printf("the character %c is vowel",ch):printf("the character %c is consonant",ch);
            break;
        case 4:
            printf("enter a number");
            scanf("%d",&num);
            (num%5==0&&num%11==0)?printf("Number is divisible by 5 and 11"):printf("Number is not divisible by 5 and 11");
            break;
        case 5:
            printf("enter a character\n");
            scanf(" %c",&ch);
            ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))?printf("it is a alphabet"):printf("it is not a alphabet");
            break;
       defult: printf("invalid choice");
     }
     getch();
     return(0);
 }






