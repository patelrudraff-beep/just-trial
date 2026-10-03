#include <stdio.h>
int main()
{
char ch;
printf("enter any alphabets a,,b,c");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
    printf("you entered alphabet a");
    break;
case 'b':
case 'B':
    printf("you entered alphabet b");
    break;
case 'c':
case 'C':
    printf("you entered alphabet c");
    break;
default:
    printf("you did not enter a, b or c");
}
return 0;
}