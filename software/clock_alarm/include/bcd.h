#ifndef APP_INCLUDE_APP_BCD_DISPLAY_H_
#define APP_INCLUDE_APP_BCD_DISPLAY_H_

#include "sys/alt_stdio.h"
#include "system.h"


int *h2, *h1, *m1, *m2, *s2, *s1;
void init_display();
void get_bits(int number, int *bcd_pointer);
void number_to_bcd(int number, int *bcd_pointer1, int *bcd_pointer2);
void display(int number, char type, char permitted);
void restart_display();

#endif /* APP_INCLUDE_APP_BCD_DISPLAY_H_ */
