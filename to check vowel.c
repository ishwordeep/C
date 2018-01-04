#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("enter any character:-\t");
    scanf("%c",&ch);

    (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?printf("the character %c is vowel",ch):printf("the character %c is consonant",ch);

    getch();
}
