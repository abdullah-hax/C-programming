// Que: take a value as input & show its factorial.

#include <stdio.h>
int main()
{
    int i, n;
    int s = 1;
    scanf("%d", &n);

    for(i = n; i >=1 ;i--){
        s = s * i;
    }
    
    printf("%d", s);
    return 0;
}

// 0 or 1 input dileo correct output asbe.




// for long number like 20!, use long long (%lld)

/*

#include <stdio.h>
int main()
{
    int i, n;
    long long s = 1;
    scanf("%d", &n);

    for(i = n; i >=1 ;i--){
        s = s * i;
    }
    
    printf("%lld", s);
    return 0;
}


*/