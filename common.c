#include <sys/time.h>
#include "common.h"

// Busy-wait for a given number of seconds
void spin(int seconds) {
    struct timeval start, now;
    gettimeofday(&start, NULL);

    do {
        gettimeofday(&now, NULL);
    } while ((now.tv_sec - start.tv_sec) < seconds);
}