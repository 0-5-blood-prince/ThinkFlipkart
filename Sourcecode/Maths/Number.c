#include <stdio.h>
#include <math.h>
int mult(int a,int b)
{
 return a*b;
}
int sub(int a,int b)
{
	//Changes in bF
	int result = 0;
       	//Conflict resolved in Master									
	result = b-a;//Messing in bF	
	return result;
}
int main()
{
	printf("Numbers");
	printf(mult(5,6));
	printf(sub(8,7));
}
