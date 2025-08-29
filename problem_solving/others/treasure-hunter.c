#include <stdio.h>
int main() {

   int N, M;
   // How many row & colomn you want on the grid?
   scanf("%d%d", &N, &M);

   if (N>=1 && M<=100){
    char a[N][M];
    int i,j;
    
    for ( i=0; i<N; i++){
        for ( j=0 ; j<M; j++){
            scanf(" %c", &a[i][j]);
        }
    }

    int count=0;

    if (a[0][0] == 'T') {
        count++;
    }

    for ( i=0, j=1; i<N, j<M; i++, j++) {
        if (a[i][j] == 'T'){
            count++;
        }

        if (a[j][j] == 'T')
        {
            count++;
        }
    }
    
    // The maximum number of treasure you will get.
    printf("%d", count);
    }
}

