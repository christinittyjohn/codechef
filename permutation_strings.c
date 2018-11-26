#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char **s, int a, int b)
{
	char *temp;
	temp=s[a];
	s[a]=s[b];
	s[b]=temp;
}	
void reverse(char **s, int a, int b)
{
	int i=a,j=b-1,k=(i+j)/2;
	printf("i=%d,k=%d\n",i,k);
	while(i<=k){
	swap(s,i,j);
	
	i++;
	j--;
	}
}	
	
int next_permutation(int n ,char ** s)
{
	int k=n-2,l=n-1;
	while(k>=0)
	{
		if(strcmp(s[k],s[k+1])<0)
		break;
		k--;
		if(k<0)
		return 0;
	}
	while(l>=k)
	{
			if(strcmp(s[k],s[l])<0)
			break;
			l--;
	}
	printf("k=%d l=%d\n",k,l);
	swap(s,k,l);
	reverse(s,k+1,n);
	return 1;
	if(k==0)
	return 0;
	
}	
			

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
