#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input the number of statements

    int x = 0; // Initial value of x

    // Process each statement
    for (int i = 0; i < n; i++) {
        char statement[3];
        scanf("%s", statement); // Input the statement

        // Update x based on the operation in the statement
        if (statement[0] == '+' || statement[2] == '+') {
            x++;
        } else {
            x--;
        }
    }

    // Print the final value of x
    printf("%d\n", x);

    return 0;
}
