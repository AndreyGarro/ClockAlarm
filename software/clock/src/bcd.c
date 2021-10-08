#include "../include/bcd.h"

void init_display() {
	h2 = (int*) (REG_H2_BASE);
	h1 = (int*) (REG_H1_BASE);
	m2 = (int*) (REG_M2_BASE);
	m1 = (int*) (REG_M1_BASE);
	s2 = (int*) (REG_S2_BASE);
	s1 = (int*) (REG_S1_BASE);
}

void get_bits(int number, int *time_pointer) {
	int active_bits[10] =  { 1, 79, 18, 6, 76, 36, 32, 15, 0, 4};     

	if(number >= 0 && number < 10) {
		*time_pointer = active_bits[number];	
	}
	else{
		*time_pointer = 126;
	}
}

void number_to_bcd(int number, int *time_pointer1, int *time_pointer2) {
	get_bits(number / 10, time_pointer1);
	get_bits(number % 10, time_pointer2);
}

void display(int number, char type, char permitted) {
	if (permitted == '1'){
		if (type == 'h')
			number_to_bcd(number, h1, h2);
		else if(type == 'm')
			number_to_bcd(number, m1, m2);
		else if (type == 's')
			number_to_bcd(number, s1, s2);
	}		
}

void restart_display() {
	display(0, 'h', '1');
	display(0, 'm', '1');
	display(0, 's', '1');
}
