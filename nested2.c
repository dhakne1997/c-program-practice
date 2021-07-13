#include<stdio.h>

int main()
{
int i,j;
char ch='*';
for(i=1;i<=10;i++)
{
for(j=1;j<=i;j++)
{
printf("%c", ch);
}
printf("\n\n");
}
return 0;	
}