#include <stdio.h>
int main(void)
{
    int magic = 425; // ก ําหนดค่ํา 123 ให้กับตัวแปร
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    if (guess == magic)

        printf("**Right**");

    return (0);
}

