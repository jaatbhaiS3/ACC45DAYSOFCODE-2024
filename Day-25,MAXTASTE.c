#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,a=0,val,i;
	    scanf("%d %d",&n,&k);
	    int c[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&val);
	        c[i]=val+k;
	        if(c[i]%7==0)
	        a++;
	    }
	    printf("%d\n",a);
	}
	return 0;
}
