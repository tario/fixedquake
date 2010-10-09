#ifndef __Q_TIME_H
#define __Q_TIME_H

struct time_interval {
	int tv_sec;
	int tv_usec;
};

struct itimerval {
	struct time_interval it_interval;
	struct time_interval it_value;
};

#define ITIMER_VIRTUAL 46

#endif