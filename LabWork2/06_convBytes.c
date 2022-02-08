#include <stdio.h>

int main()
{
	int byte, kb, mb;
	printf("Enter number of bytes : ");
	scanf("%d", &byte);
	mb = byte / (1024 * 1024);
	kb = (byte - mb * (1024 * 1024)) / 1024;
	byte = byte - kb * 1024 - mb * (1024 * 1024);
	printf("byte : %d \n kb : %d \n mb : %d", byte, kb, mb);
	return 0;
}
