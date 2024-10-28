#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d;
	int z,x,y,i,t;
	
	scanf("%d",&t);
	
	for(i=1;i<=t;i++)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a>b)
	    {
	        x=a;
	    } 
	    else 
	    {
	        x=b;
	    }
	    if(c>d)
	    {
	        y=c;
	    } 
	    else
	    {
	        y=d;
	    }
	    
	    z=x+y;
	    printf("%d\n",z);
	}
	return 0;
}
