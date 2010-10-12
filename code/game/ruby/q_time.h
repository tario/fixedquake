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

struct tm
{
  int tm_sec;			/* Seconds.	[0-60] (1 leap second) */
  int tm_min;			/* Minutes.	[0-59] */
  int tm_hour;			/* Hours.	[0-23] */
  int tm_mday;			/* Day.		[1-31] */
  int tm_mon;			/* Month.	[0-11] */
  int tm_year;			/* Year	- 1900.  */
  int tm_wday;			/* Day of week.	[0-6] */
  int tm_yday;			/* Days in year.[0-365]	*/
  int tm_isdst;			/* DST.		[-1/0/1]*/

  long int tm_gmtoff;		/* Seconds east of UTC.  */
  char *tm_zone;	/* Timezone abbreviation.  */
};

extern struct tm *gmtime (time_t *__timer);
extern struct tm *localtime (time_t *__timer);
extern char *asctime (struct tm *__tp);


#define ITIMER_VIRTUAL 46

#endif