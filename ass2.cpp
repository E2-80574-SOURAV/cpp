// Question 2:

// Define a struct in C for to save time 
// struct members

// Time struct
// int hr,min,sec
// initTime()    ->0:0:0
// acceptTime()
// DisplayTime()
// increamentTimeBy1Min()


#include <stdio.h>

struct Time {
    int hr;
    int min;
    int sec;
};

void initTime(struct Time *t) {
    t->hr = 0;
    t->min = 0;
    t->sec = 0;
}

void acceptTime(struct Time *t) {
    printf("Enter hours: ");
    scanf("%d", &t->hr);
    
    printf("Enter minutes: ");
    scanf("%d", &t->min);
    
    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}

void displayTime(const struct Time *t) {
    printf("%02d:%02d:%02d\n", t->hr, t->min, t->sec);
}

void incrementTimeBy1Min(struct Time *t) {
    t->min++;
    
    if (t->min == 60) {
        t->min = 0;
        t->hr++;
        
        if (t->hr == 24) {
            t->hr = 0;
        }
    }
}

int main() {
    struct Time myTime;

    // Initializing time to 0:0:0
    initTime(&myTime);
    printf("Initialized Time: ");
    displayTime(&myTime);

    // Accepting user input for time
    acceptTime(&myTime);
    printf("Accepted Time: ");
    displayTime(&myTime);

    // Incrementing time by 1 minute
    incrementTimeBy1Min(&myTime);
    printf("Time after incrementing by 1 minute: ");
    displayTime(&myTime);

    return 0;
}