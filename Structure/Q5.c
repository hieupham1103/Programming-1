#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Convert hh:mm:ss to seconds\n");
    printf("2. Convert seconds to hh:mm:ss\n");
    printf("3. Add two times (hh:mm:ss)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    struct time t1, t2;
    
    int totalSeconds;
    struct time sum;
    
    switch (choice) {
        case 1:
            printf("\nEnter time (hh mm ss): ");
            scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
            totalSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
            printf("Total seconds: %d\n", totalSeconds);
            break;
        
        case 2:
            printf("\nEnter seconds: ");
            scanf("%d", &totalSeconds);
            t1.hours = totalSeconds / 3600;
            t1.minutes = (totalSeconds % 3600) / 60;
            t1.seconds = totalSeconds % 60;
            printf("Time: %02d:%02d:%02d\n", t1.hours, t1.minutes, t1.seconds);
            break;

        case 3:
            printf("\nEnter 1st time (hh mm ss): ");
            scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
            printf("Enter 2nd time (hh mm ss): ");
            scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

            sum.seconds = t1.seconds + t2.seconds;
            sum.minutes = t1.minutes + t2.minutes;
            sum.hours = t1.hours + t2.hours;

            if (sum.seconds >= 60) {
                sum.minutes += sum.seconds / 60;
                sum.seconds %= 60;
            }
            if (sum.minutes >= 60) {
                sum.hours += sum.minutes / 60;
                sum.minutes %= 60;
            }

            printf("Sum: %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);
            break;
    }

    return 0;
}
