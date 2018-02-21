#include<stdio.h>
#include<string.h>
long int Z(long int x);
int main()
{
long int T,i,s,j;
scanf("%ld",&T);
long int N[T];
{
	for(i=0;i<T;i++)
	{
	scanf("%ld",&N[i]);
	if(N[i]>10e9)
	break;
	printf("\n");
		
	}
	for(j=0;j<T;j++)
	{
	s = Z(N[j]);
	printf("%ld\n",s);
			
	}
}
}

long int Z(long int x)
{
long int a=1,count=0,i,l;
char num[30];
while (x>0)
{
a=a*x;
x--;
continue;
}
sprintf(num,"%ld",a);
//puts(num);
l=strlen(num);
for(i=0;i<l;i++)
{
if(num[i]=='0')
count++;
if(i<l-1)
{
if(num[i+1]!='0')
count=0;
}
}

return count;
}
