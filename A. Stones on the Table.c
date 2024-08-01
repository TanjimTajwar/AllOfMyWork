#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char stones[51];
    scanf("%s", stones);

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (stones[i] == stones[i - 1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
