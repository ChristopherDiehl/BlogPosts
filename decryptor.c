#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void decrypt(int shift, char * stringToDecrypt) {

	int i = 0;
	for(i = 0; i < strlen(stringToDecrypt); i++)
	{

		if(stringToDecrypt[i] < 97 ||  stringToDecrypt[i] > 122)
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


	if(argc != 3)
		printf("[-] shift amount, string\n");

	decrypt(atoi(argv[1]), argv[2]);

	return 0;
}

