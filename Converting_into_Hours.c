#include <stdio.h>

int main()
{
    int years;
    int choice;
    long long result;
    int daysInYear = 365;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("\nChoose what you want to convert the years into:\n");
    printf("1. Minutes\n");
    printf("2. Hours\n");
    printf("3. Days\n");
    printf("4. Months\n");
    printf("5. Seconds\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = years * daysInYear * 24 * 60;
        printf("%d years is equal to %lld minutes.\n", years, result);
        break;
    case 2:
        result = years * daysInYear * 24;
        printf("%d years is equal to %lld hours.\n", years, result);
        break;
    case 3:
        result = years * daysInYear;
        printf("%d years is equal to %lld days.\n", years, result);
        break;
    case 4:
        result = years * 12;
        printf("%d years is equal to %lld months.\n", years, result);
        break;
    case 5:
        result = years * daysInYear * 24 * 60 * 60;
        printf("%d years is equal to %lld seconds.\n", years, result);
        break;
    default:
        printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
