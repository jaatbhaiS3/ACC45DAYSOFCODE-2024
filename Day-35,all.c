#include <stdio.h>
#include<math.h>

int main(void) 
{
	int i,t,n,a,b,rounds;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&n,&a,&b);
	    rounds = log2(n);
	    printf("%d\n",(rounds*a)+(rounds-1)*b);
	}
	return 0;
}

