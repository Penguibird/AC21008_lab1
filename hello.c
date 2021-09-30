#include <stdio.h>

// void convertTemperature() {
//     double temp;
//     printf("Input the temperature in fahrenheit: ");
//     scanf("The temperature is: %lf degrees Celsius.", &temp);

//     temp = (temp - 32) * ((double) 5 / 9);

//     printf("%lf \n", temp);
// }

// void timesTable() {
//     int number, limit;
//     printf("Input the number you want to multiply: ");
//     scanf("%d", &number);
//     printf("Input the limit of the table: ");
//     scanf("%d", &limit);

//     for (int i = 1; i <= limit; ++i)
//     {
//         printf("%d x %d = %d\n", number, i, number * i);
//     }


// }

void displayASCII() {
    int character;
    printf("Input the character: ");
    char input;
    scanf("%c", &input);
    character = (int) input;

    printf("\nNumber \t\t Character \n");
    for (int i = (character - 4); i <= (character + 5); ++i)
    {
        printf("%d \t \t %c \n", i, (char) i);
    }
}

int main() {
    displayASCII();
    return 0;
}