#include <stdio.h>

int main(void)
{
	int rounds, P1, P2, lead, difference = 0, total_P1 = 0, total_P2 = 0;
	
	scanf("%d", &rounds);
	
	while(rounds--)
	{
	    scanf("%d %d", &P1, &P2);
	    total_P1 += P1;  //total_P1 = total_P1 + P1;
	    total_P2 += P2;  //total_P2 = total_P1 + P2;
	    
	    if(total_P1 > total_P2 && total_P1 - total_P2 > difference)
	          {
	              lead = 1; //Player 1 will lead 
	              difference = total_P1 - total_P2;
	          }
	          else if(total_P2 > total_P1 && total_P2 - total_P1 > difference)
	          {
	              lead = 2; //Player 2 will lead 
	              difference = total_P2 -total_P1;
	          }
	    }
	    
	    printf("%d %d \n", lead, difference);
	return 0;
}

