#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void decrypt(int shift, char * stringToDecrypt) {

	int i = 0;
	for(i = 0; i < strlen(stringToDecrypt); i++)
	{

		if(stringToDecrypt[i] < 98 ||  stringToDecrypt[i] > 122)
			continue;

		char c = ((stringToDecrypt[i] - 'a' - shift) % 26);	
		if(c  < 0)
		{
			c = 26 + c;
		}

		stringToDecrypt[i] =  c + 'a';

	}

	printf("%s\n",stringToDecrypt);

}


int main(int argc, char *argv[]) {


	if(argc != 4)
		printf("[-] e/d, shift amount, string\n");

	if(strcmp(argv[1],"e") == 0) 
	{
		encrypt(atoi(argv[2]), argv[3]);

	} else if(strcmp(argv[1],"d") == 0) 
	{
		decrypt(atoi(argv[2]), argv[3]);
	}

	return 0;
}

