#include <stdio.h>

int main(void) {
    int t; 
    scanf("%d",&t); 
    while(t--){
        int a, b, c; 
        scanf("%d%d",&a, &b); 
        c= 21 - (a + b);
        if( c>=1 && c<=10 )
        printf("%d\n",c); 
        else 
        printf("-1\n");
    }
	return 0;
}
