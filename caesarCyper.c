#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void encrypt(int shift) {

	char stringToEncrypt[1024];
	printf("Please enter the string to encrypt \n");
	fgets(stringToEncrypt, sizeof(stringToEncrypt), stdin);

	int i = 0;
	for(i = 0; i < strlen(stringToEncrypt); i++)
	{
		if(stringToEncrypt[i] < 97 ||  stringToEncrypt[i] > 122)
			continue;


		char c = ((stringToEncrypt[i] - 'a' + shift) % 26);

		if(c  < 0)
		{
			c = 26 - c;
		}

		stringToEncrypt[i] =  c + 'a';
	}

	printf("Encrypted String is: %s\n",stringToEncrypt);

}
void decrypt(int shift) {

	char stringToDecrypt[1024];
	printf("Please enter the string to decrypt\n");
	fgets(stringToDecrypt, sizeof(stringToDecrypt), stdin);

	int i = 0;
	for(i = 0; i < strlen(stringToDecrypt); i++)
	{

		if(stringToDecrypt[i] < 97 ||  stringToDecrypt[i] > 122)
			continue;

		char c = ((stringToDecrypt[i] - 'a' - shift));	
		if(c  < 0)
		{
			c = 26 + c;
		}

		stringToDecrypt[i] =  c + 'a';

	}

	printf("Decrypted String is: %s\n",stringToDecrypt);

}


int main() {


	char method [1];
	char shift [3];

	printf("Please enter e for encrypt, or d for decrypt\n");
	scanf("%c",method);
	getchar();

	printf("Please enter shift char\n");
	fgets(shift, sizeof(shift), stdin);
	getchar();

	if(*method == 'e') 
	{
		encrypt(atoi(shift));

	} else if(* method == 'd') 
	{
		decrypt(atoi(shift));
	}

	return 0;
}

