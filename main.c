#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_FILENAME_STRLEN 20
#define MAX_HOUR_STRLEN 5
#define MAX_TASK_STRLEN 50
#define true 1
#define false 0

int main(int argc, char* argv[]){
	// Initial variables
	char hour[MAX_HOUR_STRLEN], task[MAX_TASK_STRLEN], *zero = "0";
	// Openning file
	FILE *file = fopen("TODAY.txt","a+");
	// Asking for an hour and task
	while(true){
		printf("Hour: ");
		gets(hour);
		if(strcmp(hour,zero) == 0)
			break;
		printf("Task: ");
		gets(task);
		fprintf(file, "\n%s -> %s",hour, task);
	}
	// CLosing file
	fclose(file);
	return 0;
}
