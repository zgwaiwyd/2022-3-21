#include<conio.h>
#include<math.h>
#include<stdio.h>
int fun(int t)
{
	int i=1;
	int j=1;
	while(j<t)
	{
		i=i+j;
		j=i+j;
	}
	if(i>t)
		return i;
	else
		return j;

}
main()
{
	int n;
	n=1000;
	printf("n=%d,f=%d\n",n,fun(n));
}