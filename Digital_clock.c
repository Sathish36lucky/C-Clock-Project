#include <stdio.h>
#include <time.h>   // for sleep function
#include <unistd.h> // for Unix sleep
#include <stdlib.h> // for system function

int main()
{
    int hour = 0, minute = 0, second = 0;

    while(1)
    {
        // clear output screen
        #ifdef _WIN32
            system("cls");  // Windows
        #else
            system("clear");  // Unix/Linux/Mac
        #endif

        // print time in HH : MM : SS format
        printf("%02d:%02d:%02d", hour, minute, second);

        // clear output buffer in gcc
        fflush(stdout);

        second++;
        if(second == 60)
        {
            minute++;
            second = 0;
        }
        if (minute == 60)
        {
            hour++;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 0;
        }

        // sleep for 1 second
        sleep(1);
    }

    return 0;
}
