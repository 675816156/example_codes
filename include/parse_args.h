#ifndef __PARSE_ARGS_H
#define __PARSE_ARGS_H

#include <stdint.h>

typedef struct run_param {
	uint32_t data;
} run_param;

void parse_args(int argc, char *argv[], run_param *rp);

#endif
