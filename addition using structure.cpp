#include<stdio.h>
struct first
{
	int a,b;
} pa;
int main()

{
	int d;
	pa.a=20;
	pa.b=3;
	d=pa.a+ pa.b;
	printf(" sum of two no is : %d ",d);
}
