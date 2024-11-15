#include <stdio.h>

int main() {
    int minute, hour;
    printf("Given: ");
    scanf("%d", &minute);
    hour = minute/60;
    minute %= 60;
    printf("Converted hours: %d hours and %d minute/s", hour, minute);
}