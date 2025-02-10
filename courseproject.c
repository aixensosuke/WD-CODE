#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For sleep() function

void clearScreen() {
    // Use system call to clear the screen
    printf("\033[H\033[J");
}

void displayTime(int hours, int minutes, int seconds) {
    // Display the time in a structured format
    printf("  +-------------------+\n");
    printf("  |   Digital Clock   |\n");
    printf("  +-------------------+\n");
    printf("  |                   |\n");
    printf("  |    %02d:%02d:%02d      |\n", hours, minutes, seconds);
    printf("  |                   |\n");
    printf("  +-------------------+\n");
}

int main() {
    while (1) {
        // Get the current time
        time_t now = time(NULL);
        struct tm *local = localtime(&now);

        int hours = local->tm_hour;
        int minutes = local->tm_min;
        int seconds = local->tm_sec;

        // Clear the screen and display the time
        clearScreen();
        displayTime(hours, minutes, seconds);

        // Wait for 1 second before updating the time
        sleep(1);
    }

    return 0;
}