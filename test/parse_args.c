#include <stdio.h>
#include <stdlib.h>

#include "parse_args.h"

void main(int argc, char *argv[])
{
	run_param rp = {0};

	parse_args(argc, argv, &rp);
}
