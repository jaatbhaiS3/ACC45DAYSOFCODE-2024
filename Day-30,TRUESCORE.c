#include <stdio.h>

int main(void) {
	int n,a,b,c,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d%d",&a,&b);
	    scanf("%d%d",&c,&d);
	    if(c>=a && d>=b)
	    printf("POSSIBLE\n");
	   
	    else
	    printf("IMPOSSIBLE\n");
	}
}
