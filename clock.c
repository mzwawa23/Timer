
/*
 * Clock related functions
 */
#include <stdio.h>
#include "clock.h"
#include "consts.h"
#include "inout.h"

static const int VERY_LOW = 1;
static const int LOW = 2;
static const int MEDIUM = 3;
static const int HIGH = 4;
static const int VERY_HIGH = 5;

static int value = 0;

static int power(int base, int exp)
{
    value = base;
    int power_value = -1;
    int i = 1;
    while (i<=exp && i>0)
    {
    	i++;
        value = value * base;
    }

    if (value <= 10)
    {
		power_value = VERY_LOW;
    }
     if (value > 10 && value <= 100)
    {
		power_value = LOW;
    }
    else if (value > 100 && value <= 5000)
    {
		power_value = MEDIUM;
    }
    else if (value > 5000 && value <= 50000)
    {
		power_value = HIGH;
    }
    else if (value > 50000)
    {
		power_value = VERY_HIGH;
    }
  return power_value;
}

/*
 * Print the current time
 */
void display_time()
{
    char buf[BUF_SIZE];
    time_t the_time = time(NULL);
    char *t = ctime(&the_time);
    
    sprintf(buf, "\n\nCurrent Time and Date is %s\n\n", t);
    print_string(buf);
}


/* 
 * Dummy Function -- time always taken from system
 */
void set_time(time_t new_time)
{
}

