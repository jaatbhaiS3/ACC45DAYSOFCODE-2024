#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a+c==180&&b+d==180)
	    {
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}
