#include "Mysimplecomputer.h"

int checkCommand(int command){
	if( 
		command == READ   ||	command == WRITE  ||
		command == LOAD   ||	command == STORE  ||
		command == ADD    ||	command == SUB    ||
		command == DIVIDE ||	command == MUL    ||
		command == JUMP   ||	command == JNEG   ||
		command == JZ     ||	command == HALT   ||
		command == NOT    ||	command == AND    ||
		command == OR     ||	command == XOR    ||
		command == JNS    ||	command == JC     ||
		command == JNC    ||	command == JP     ||
		command == JNP    ||	command == CHL    ||
		command == SHR    ||	command == RCL    ||
		command == RCR    ||	command == NEG    ||
		command == ADDC   ||	command == SUBC   ||
		command == LOGLC  ||	command == LOGRC  ||
		command == RCCL   ||	command == RCCR   ||
		command == MOVA   ||	command == MOVR   ||
		command == MOVCA  ||	command == MOVCR   
	)
		return 1;
	else
		return 0;
}
int sc_commandEncode(int command, int operand, int * value){
	
}
int sc_commandDecode(int value, int * command, int * operand){

}
