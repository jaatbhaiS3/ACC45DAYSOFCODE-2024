#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a+b+1)%4==1||(a+b+1)%4==2){
        printf("Alice\n");
    }
    else{
        printf("Bob\n");
    }
}
	return 0;
}
