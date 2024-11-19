#include<stdio.h>
int main()
{
    long int T;
    int N,X;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%d %d",&N,&X);
        if(N==X || X%N==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
    
}