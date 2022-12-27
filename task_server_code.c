#include "task.h"

int *
doublify_1_svc(input1 *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->num * 2;
	
	return &result;
}
