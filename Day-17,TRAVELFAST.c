#include <stdio.h>

int main(void) {
	int n,a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d%d",&a,&b);
	    if(a<b)
	    printf("BIKE\n");
	    else if(b<a)
	    printf("CAR\n");
	    else
	    printf("SAME\n");
	}
}


