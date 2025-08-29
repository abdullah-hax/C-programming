/* 
    ---------------------Pyramid(star 1,3,5,7,9)-----------------

        ->  n = total row
        ->  row = th row (1st row,2nd row,3rd row.....), (n porjnto)
        ->  space = total row teke 1 ta km , trpr serially kmte takbe, (row teke shuru kore n-1 prjnto)
        ->  star = (2*row-1 prjnto)

*/



#include <stdio.h>
int main()
{
    int row, content, n;
    scanf("%d", &n);

    for(row = 1; row <= n; row++){
        for(content = row; content < n; content++){
            printf("  ");
        }

        for(content = 1; content <= 2*row - 1 ; content++){
            printf("* ");                // 1st space er pr jotota space dibe , star er pr totota space dite hbe .
        }

        printf("\n");
    }

// for inverted pyramid, change only the loop which generates row

    for(row = n; row >= 1; row--){
        for(content = row; content < n; content++){
            printf("  ");
        }

        for(content = 1; content <= 2*row - 1 ; content++){
            printf("* ");             
        }

        printf("\n");
    }
    return 0;
}


// note: to make the pyramid more beautiful just reduce 1 row,, for(row = n - 1; ......)

