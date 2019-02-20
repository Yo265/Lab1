#include <stdio.h>
#include "Mysimplecomputer.h"

int sc_memoryInit(){
    for(int i;i < N; i++)
	mass[i] = 0;
    return 1;
}

int sc_memorySet(int adress, int value){
    if(adress > N)
	return 0; ///razobratsya s registrom flagov
    else {
	mass[adress] = value;
	return 1;
    }
}

int sc_memoryGet(int adress, int* value){
    if(adress > N)
	return 0; ///razobratsya s registrom flagov
    else {
	*value = mass[adress];
	return 1;
    }
}

int sc_memorySave(char* filename){
    	FILE *file = fopen(filename, "wb");
	if (file) {
		fwrite(mass, sizeof(int), N, file);
		printf("\n%d", ftell(file));
	}
	fclose(file);
	return 1;
}

int sc_memoryLoad(char *filename) {
	FILE *file = fopen(filename, "rb");
	fread(mass, sizeof(int), N, file);
	printf("\n%d\n", mass[0]);
	return 1;
}
