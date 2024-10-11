#include<stdio.h>

int main()
{
char c[100];
int t=0;
scanf(" %[^\n]s",c);
int l = 0;
while(c[l] != '\0')
l++;
    for (int i=0;i<l;i++)
    if(c[i] == ' ' )
    t++;
    
    printf("the numberof alphabet is : %d ",l);
    printf("the number of words is :%d",t);
    for (int i=0;i<l;i++)
    if (c[i] == ' s ')
    c[i] = 'o';
    else 
    c[i] = 'a';
    printf("the new words is : %[^\n]s",c);

    return 0;
}