#pragma once

#define NNN 20  //lengt of user name

typedef struct {
	int max, min;
	char rname[NNN];  
}rock;

void send_data(rock);

