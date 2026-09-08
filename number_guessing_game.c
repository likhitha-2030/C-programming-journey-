#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    printf("Guess the number: ");
    scanf("%d", &guess);

    while (guess != secret) {

        if (guess < secret)
            printf("Too low! Try again: ");
        else
            printf("Too high! Try again: ");

        scanf("%d", &guess);
    }

    printf("Correct! 🎉\n");

    return 0;
}