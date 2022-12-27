#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "task.h"

int *
doublify_1_svc(input1 *argp, struct svc_req *rqstp)
{
	static int  result;

  printf("doublify_1_svc called.\n");
	result = argp->num * 2;
	
	return &result;
}

float *
balance_1_svc(input2 *argp, struct svc_req *rqstp)
{
	static float  result;
	char *name = argp->text;

  printf("balance_1_svc called.\n");
  printf("Verified!\n");
  printf("Fetching balance for user: %s...\n", name);

  result = (0 + rand() / (float) RAND_MAX * (10000 - 0));

	return &result;
}

to_string_res *
to_string_1_svc(input3 *argp, struct svc_req *rqstp)
{
	static to_string_res  result;
	static char str[20];
	int num = *argp->num;

	memset(&result, '\0', sizeof(to_string_res));                                
	memset(str, '\0', sizeof(str));     

	printf("to_string_1_svc called.\n");
	printf("Converting into to string...\n");

	sprintf(str, "%d", num);

	result.data = str;

	printf("Result: %s\n", result.data);

	return &result;
}
