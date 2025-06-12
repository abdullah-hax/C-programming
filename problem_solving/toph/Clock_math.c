/*

   **** hours hand ****
       For 60 min ->For 60 min -> 30
       For 1 min  ->  30/60 = .5

   **** minutes hand ****
       For 60 min -> 360
       For 1 min  -> 360/60 = 6


    *** Angle between two clock hands ***
      ( (12 - H) * 30  -  (M * .5) ) + M * 6
   or, (360 - .....)

*/

#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    float angle = ( (12 - H) * 30  -  (M * .5) ) + M * 6 ;

    if(angle <= 180){
        printf("%f", angle);
    }
    else printf("%f", 360 - angle);

    return 0;
}


// test case : 12.00, 12.30, 6.00, 6.30, 10.15, 7.20