#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int a = 1; a <= n; a++) {
        for(int b = 1; b <= n; b++) {
            if((a == 2 && b == 1) || (a == 2 && b == 2) || (a == 2 && b == 4) || (a == 2 && b == 5) || (a == 4 && b == 4) || (a == 4 && b == 1) || (a == 4 && b == 2) || (a == 4 && b == 4) || (a == 4 && b == 5)) {
                printf("*");
            } else if ((a == 3 && b == 3) || (a == 1 && b == 3) || (a == 5 && b == 3)) {
                printf("0");
            } else {
                printf("$");
            }
        }
        printf("\n");
    }
}
