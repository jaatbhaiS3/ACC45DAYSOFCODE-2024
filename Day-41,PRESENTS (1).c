#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int n;
        scanf("%d", &n);
         printf("%d \n",(n-(n/5)));
        t--;
    }
	// your code goes here
	return 0;
}
