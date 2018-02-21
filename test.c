#include<stdio.h>
int main()
{
int i[1000],j=0,k=0;
while(i[j]!=42&&i[j]<100)
{
scanf("%i",&i[j]);
if(i[j]>100)
break;
if(i[j]==42)
break;
j++;
}
while(i[k]!=42&&i[k]<100)
{
printf("%i\n",i[k]);
k++;
}
return 0;
}
