#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    int x,y,k;
	    scanf("%d %d %d",&x,&y,&k);
	    if(x==y){
	        printf("\n0");
	    }
	    else{
	        if(x>y){
	            x=x-y;
	            if(x%k==0){
	                x=x/k;
	                printf("\n%d",x);
	            }
	            else{
	                x=(x/k)+1;
	                printf("\n%d",x);
	            }
	        }
	        else{
	            x=y-x;
	             if(x%k==0){
	                x=x/k;
	                printf("\n%d",x);
	            }
	            else{
	                x=(x/k)+1;
	                printf("\n%d",x);
	            }
	        }
	  
	    }
	}
	return 0;
}
