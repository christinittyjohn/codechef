#include<stdio.h>
int main()

{
long int n,k,j,m=0;
scanf("%li",&n);
scanf("%li",&k);
long int i[n];
if((k<=10e7)&&(n<=10e7))
{
for(j=0;j<n;j++)
{
scanf("%li",&i[j]);
if(i[j]>10e9)
{
continue;
if(j>0)
j--;
else if (j==0)
j=0;
}
if(i[j]%k==0)
m++;
}
printf("%li",m);
}
return 0;
}
