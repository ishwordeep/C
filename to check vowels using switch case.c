#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("input a character\n");
    scanf("%c",&ch);

    switch(ch)
    {
    case'a':
    case'A':
    case'E':
    case'e':
    case'I':
    case'i':
    case'O':
    case'o':
    case'u':
    case'U':
             printf("this is a vowel");
             break;
    default: printf("it is a consonant");
    }
    return(0);
    getch();
}
