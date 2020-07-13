#include <stdio.h>
#include <stdint.h>

#include "add-nbo.h"

int main(int argc, char* argv[]){
	FILE* fp1, *fp2;
	uint32_t num1, num2;

	if(argc != 3){
		printf("syntax: ./add_nbo [file1] [file2]");
		return -1;
	}

	fp1 = fopen(argv[1], "rb");
	fp2 = fopen(argv[2], "rb");

	if(fp1 == NULL || fp2 == NULL){
		printf("file open error!");
		return -1;
	}
	
	fread(&num1, 1, 4, fp1);
	fread(&num2, 1, 4, fp2);

	add_nbo(num1, num2);

	fclose(fp1);
	fclose(fp2);

	return 0;
}

