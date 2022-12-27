#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task.h"

int *
doublify_1_svc(input1 *argp, struct svc_req *rqstp)
{
	static int  result;

  printf("doublify_1_svc called.");
	result = argp->num * 2;
	
	return &result;
}

float *
balance_1_svc(input2 *argp, struct svc_req *rqstp)
{
	static float  result;
	char *name = argp->text;

  printf("balance_1_svc called.");
  printf("Verified!\n");
  printf("Fetching balance for user: %s...\n", name);

  result = (0 + rand() / (float) RAND_MAX * (10000 - 0));

	return &result;
}