#include <sys/time.h>
#include <stdio.h>

int gettimeofday(struct timeval *tv, struct timezone *tz);

/*struct timeval {
    time_t      tv_sec;
    suseconds_t tv_usec;
};*/

int main()
{
	struct timeval t;
	gettimeofday(&t, NULL);
	printf("Output: seconds=%lu, microseconds=%lu\n", t.tv_sec, t.tv_usec);
	return 0;
}
