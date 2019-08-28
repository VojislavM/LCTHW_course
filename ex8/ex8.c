#include <stdio.h>

int main(int argc, char *argv[]){
	//int age = 100;
	//int hight = 175;
	int i;
	printf("there are %d argc \n", argc);
	if(argc > 1 && argc < 4){
		for(i = 0; i < argc; i ++){
			printf("your arg[%d] = %s\n", i+1, argv[i]);
		}
	}
	return 0;
}
