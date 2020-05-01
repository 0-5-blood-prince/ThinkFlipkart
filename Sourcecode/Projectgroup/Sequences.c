#include<stdio.h>
#include <math.h>
void Fib(int n)
{
	int fib[n];
	fib[0]=1;
	fib[1]=1;
	for(int i=0;i<n;i++)
	{
	  if(i<2)
	  {
		  printf("%d\n",fib[i]);
	 	continue;
	  }
	  fib[i]=fib[i-1]+fib[i-2];
	  printf("%d\n",fib[i]);
	}
}

void AP(int s,int d,int n)
{
	for(int i=1;i<=n;i++)
	{
		//Testing Edit
		printf("%d\n",s+(n-1)*d);
	}
}

void list(int n)
{
  for(int i=1;i<=n;i++)
  {
	  //Testing edit
	  printf("%d\n",i);
  }
}
int power(int i,int j)
{
	//Testing addition
	int res = 1;
	for(int k=0;k<j;k++) res*=i;
}
void GP(int s,int d,int n)
{	
	for(int i=1;i<=n;i++)
	{
		printf("%d",s*power(d,i-1));
	}
}
int main()
{
	//Testing edit
	printf("Sequences Program");
	return 0;
}

