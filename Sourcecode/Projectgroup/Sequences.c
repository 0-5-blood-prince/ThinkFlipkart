#include<stdio.h>
void AP(int s,int d,int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%d",s+(n-1)*d);
	}
}

void list(int n)
{
  for(int i=1;i<=n;i++)
  {
	  printf("%d",i);
  }
}
int main()
{
	print("Sequences Program");
	return 0;
}

