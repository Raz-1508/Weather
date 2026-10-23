#include <stdio.h> // The header that allows you to use printf

int main() {
    int weekly_temps[7] = {28, 32, 15, 40, 12, 35, 22};
    int total = 0;
    int freezing_days = 0;

    printf("--- Weather Monitor ---\n");

    for (int i = 0; i < 7; i++) {
        int current_temp = weekly_temps[i];
        total += current_temp;

        if (current_temp < 32) {
            // %d acts as a placeholder for the integer variable
            printf("Alert: Freezing day detected at %d F\n", current_temp);
            freezing_days++;
        }
    }

    double average = (double)total / 7;

    // \n moves the cursor to a new line, %.2f formats the double to 2 decimal places
    printf("\nWeekly Summary:\n");
    printf("Average Temperature: %.2f F\n", average);
    printf("Total Freezing Days: %d\n", freezing_days);

    return 0;
}