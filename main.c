#include <stdio.h>
int main(void) {
    int magic = 111;
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    if (guess == magic)
    printf("RIGHT");
    return(0);
}