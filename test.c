#include "Mysimplecomputer.h"


int main(){
	int tmp;
	sc_memoryInit();
	sc_regInit();
	printf("Setting the value 45 to 30 cells \n");
	sc_memorySet(30, 45);
	printf("Getting cell value 30 \n");
	sc_memoryGet(30, tmp);
	printf("%d ", tmp);
	printf("\n Filling memory with an increasing sequence and writing to a file \n");
	for(int i = 0, i < N, i++)
		sc_memorySet(i, i);
	sc_memorySave("memory.bin");
	printf("\n Reinitialize RAM and read it from file \n");
	sc_memoryInit();
	sc_memoryLoad("memory.bin");
	for(int i = 0, i < N, i++){
		sc_memoryGet(i, tmp);
		printf("%d ", tmp);
	}
	printf("\n Checking the operation of the outgoing memory flag \n");
	sc_memorySet(1213, 45);
	sc_regGet(AOF, tmp);
	printf("%d ", tmp);
	sc_regSet(AOF, 0);
	return 0;
}
