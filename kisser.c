#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char joe[1024]; 
	char accum[8096];
	accum[0] = '\0';

	while(fgets(joe, 1024, stdin) != NULL){
		strcat(accum, joe);
	}
	printf("OOoooooh you like kissing\n %s don't you, you're a\n %s kisser\n", accum, accum);

	char *home = getenv("HOME");
	char file_path[1000];
    snprintf(file_path, sizeof(file_path), "%s/Documents/programming_things/c/actualstuff/kisser/kisser.txt", home);

    FILE *fp = fopen(file_path, "r");
	if(fp == NULL){
		perror("");
		return -1;
	}
	
	char chunk[512];
	while(fgets(chunk, 512, fp) != NULL){
		printf("%s", chunk);
	}
	fclose(fp);
}
