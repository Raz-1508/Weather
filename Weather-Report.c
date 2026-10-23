#include <stdio.h> // The header that allows you to use printf

int main() {
    char days[7][4]= {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int weekly_temps[7];
    int total = 0;
    int freezing_days = 0;
for(int i = 0; i < 7; i++) {
        printf("Enter the temperature for day %s: ", days[i]);
        scanf("%d", &weekly_temps[i]);
    }
    printf("--- Weather Monitor ---\n");

    for (int i = 0; i < 7; i++) {
        int current_temp = weekly_temps[i];
        total += current_temp;

        if (current_temp < 32) {
            // %d acts as a placeholder for the integer variable
            printf("Alert: Freezing day detected on %s\n",days[i]);
            freezing_days++;
        }
    }

    double average = (double)total / 7;

    printf("\nWeekly Summary:\n");
    printf("Average Temperature: %.2f F\n", average);
    printf("Total Freezing Days: %d\n", freezing_days);

    return 0;
}