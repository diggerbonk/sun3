#include <stdio.h>
#include <sys/time.h>

int main(argc, argv)
   int argc;
   char * argv[];
{
    struct timeval newTime;
    gettimeofday(&newTime, NULL);
    printf("start time: %i\r\n", newTime.tv_sec);

    printf("  set time: %s\r\n", argv[1]);
    newTime.tv_sec = atoi(argv[1]);
    settimeofday(&newTime, NULL);
    gettimeofday(&newTime, NULL);
    
    printf("  end time: %i\r\n", newTime.tv_sec);

    exit(0);
}
