#include <stdio.h>
#include <getopt.h>

#include "parse_args.h"

static void usage(void)
{
	printf("Usage:\n");
	printf("  -h/--help \n");
}

void parse_args(int argc, char *argv[], run_param *rp)
{
	int c;
	int opt_idx = 0;

	struct option lopt[] = {
		{"help", no_argument, 0, 'h'},
		{0,      0          , 0,  0 },
	};

	while ((c = getopt_long(argc, argv, "h", lopt, &opt_idx)) != EOF) {
		switch (c) {
			case 'h':
				usage();
				break;
			default:
				printf("?? getopt returned character code 0%o ??\n", c);
		}
	}

	if (optind < argc) {
		printf("non-option ARGV-elements: ");
		while (optind < argc)
			printf("%s ", argv[optind++]);
		printf("\n");
	}
}
