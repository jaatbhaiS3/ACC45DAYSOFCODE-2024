#include <stdio.h>

int main(void) 
{
	int i,t;
	float x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%f %f",&x,&y);
	    if((y/x)*100>=50)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

