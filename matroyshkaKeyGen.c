#include "stdafx.h"
#include "windows.h"
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Password 1
	
	char* codeStr = "ABCDEF123456";
	int length = strlen(codeStr);
	int i = 0;
	int currChar = 0;
	printf("Password1: ");
	while(i < length)
	{
		currChar = (int)codeStr[i];
		currChar += 5;
		printf("%c", (char)currChar);
		i++;
	}
	printf("\n");
	
	//Password 2
	
	codeStr = "ARCHIEMILLER";
	length = strlen(codeStr);
	i = 0;
	currChar = 0;
	printf("Password2: ");
	while(i < length)
	{
		currChar = (int)codeStr[i];
		currChar -= i;
		printf("%c", (char)currChar);
		i++;
	}
	printf("\n");
	
	//Password 3
	codeStr = "GO FLYERS!!!";
	length = strlen(codeStr);
	i = 0;
	currChar = 0;
	int xor = 0;
	printf("Password 3: ");
	while(i < length)
	{
		currChar = (int)codeStr[i];
		xor = currChar ^ i;
		printf("%c", (char)xor);
		i++;
	}
	printf("\n");
	
	//Password 4
	DWORD diskId;
	GetVolumeInformation(NULL, NULL, NULL, &diskId, NULL, NULL, NULL, NULL);
	printf("Password 4: %d", diskId); 
	
	printf("\n");
	
	
}