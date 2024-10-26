#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a;
	    scanf("%d",&a);
	    if (a % 7 == 1 || a % 7 == 0)
            printf("%d\n", a / 7);
        else
            printf("%d\n", a / 7 + 1);
	}
	return 0;
}
