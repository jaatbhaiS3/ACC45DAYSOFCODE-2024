#include <stdio.h>
#include<string.h> 
int main(void) 
{
	int i,t,n,j,c1,c2;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    char str[10];
	    c1=c2=0;
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%s",str);
	        if(strcmp(str,"START38")==0)
	            c1++;
	        else if(strcmp(str,"LTIME108")==0)
	            c2++;
	    }
	    printf("%d %d\n",c1,c2);
	}
	return 0;
}
