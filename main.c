#include <stdio.h>
#include "operators.h"
#include "my_fscanf.h"

int main(void) {
	
	fp = fopen("read.txt", "r");
	if(fp!=NULL) {
		my_fscanf(fp, "%d", &line);
		for(int i=0; i<line && !feof(fp); i++) {
			my_fscanf(fp, "%d %c %d", &operand1, &operator, &operand2);
		}
	}
	int i = 65;
	
	printf("%c\n", i);
	
	return 0;
}
