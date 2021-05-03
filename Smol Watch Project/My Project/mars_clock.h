/*
 * mars_clock.h
 *
 * Created: 4/29/2021 11:35:39 PM
 *  Author: joeycastillo
 */ 


#ifndef MARS_CLOCK_H_
#define MARS_CLOCK_H_
#include "hpl_calendar.h"
#include "watch-library/watch.h"

void update_display(Watch *watch, struct calendar_date_time date_time);


#endif /* MARS_CLOCK_H_ */