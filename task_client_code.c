#include <unistd.h>
#include "task.h"

void
task_1(char *host, CLIENT *clnt, int option)
{
	int  *result_1;
	input1  doublify_1_arg;

	if(option == 1){
		int num;
		printf("Enter double subject:\n");
		scanf("%d", &num);
		doublify_1_arg.num = num;

		result_1 = doublify_1(&doublify_1_arg, clnt);
		if (result_1 == (int *) NULL) {
			clnt_perror (clnt, "call failed");
		}

		printf("%d doubled is %d\n", num, *result_1);
	}else if (option == 2){
		printf("Procedure Coming Soon");
	}else if (option == 3){
		printf("Procedure Coming Soon");
	}else{
		printf("Unknown procedure call.");
	}


}


int
main (int argc, char *argv[])
{
	char *host;
	CLIENT *clnt;
	int option;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];

	clnt = clnt_create (host, TASK, TASK_VER, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}

	printf("Welcome. Which remote procedure to you wanna call?\n");

	while(1){
		printf("\n1. Doublify\n2. Procedure 2\n3. Procedure 3\n4. Exit\n");
		scanf("%d", &option);
		if(option == 4){
			printf("Exiting...\n");
			sleep(1);
			printf("Goodbye!\n");
			break;
		}else {
			task_1 (host, clnt, option);
		}
	}

	clnt_destroy (clnt);
	exit (0);
}
