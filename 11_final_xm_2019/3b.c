#include <stdio.h>

int main() {
    int m = -14, n = 3;

    printf("%d\n", m/n*10);
    
    n = -n;
    printf("%d\n", m/n*10);
    return 0;
}

// problem : output 46 & -46 asar kota.