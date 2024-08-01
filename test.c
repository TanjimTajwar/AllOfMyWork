#include<stdio.h>

int main() {
    char Choice = 'R'; // Use single quotes for character literals
    switch(Choice) {
        case 'R':
            printf("RED ");
             // Add break to prevent fall-through
        case 'W':
            printf("WHITE ");
        case 'B':
            printf("BLUE ");
    }
}
