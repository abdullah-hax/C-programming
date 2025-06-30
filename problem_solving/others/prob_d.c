#include<stdio.h>
int main()
{
    int N,L,i,count=0;
    scanf("%d %d",&N,&L);
    int A[100];
    if(L>=1 && L<=1000)
    {
        for(i=0; i<N; i++)
        {
        scanf("%d",&A[i]);
        }
        if(A[i]>=0 && A[i]<=1000)
        {
            for(i=0; i<N; i++)
            {
                if(A[i]>=L)
                {
                    count++;
                }   
            }
            printf("%d",count);
        }
        else printf("Invalid Point/Points");
    }
    else printf("Invalid Pass Marks.");
}
