#include <stdio.h>

int main(void) {
	int t,x,y,z;
	
	scanf("%d",&t);
	
	while(t--){
	    scanf("%d%d",&x,&y);
	    z = y * 2;
	    if(x < z){
	        printf("%d\n",0);
	    }
	    else{
	        printf("%d\n",x / z);
	    }
	    
	}
	return 0;
}
