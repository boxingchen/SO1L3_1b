/* File: lab3_1b.c */
/* Alexander Ustyuzhanin, IE SO1 group 1, WS14, 26.10.2014 */

#define _CRT_SECURE_NO_WARNINGS									// suppress warnings about unsafe scanf (C4996)
#include <stdio.h>
#include <stdlib.h>

short set_MSB_to_one(short);

int main()
{
	short maskMSB = 0x8000;										// 1000 0000 0000 0000
	short short_val_16bit;
	short funcResult;

	printf("Enter an integer value: ");
	fflush(stdin);
	scanf("%hi", &short_val_16bit);
	printf("Got value %hd, HEX %#hx\n", short_val_16bit, short_val_16bit);
	
	funcResult = set_MSB_to_one(short_val_16bit);
	short_val_16bit = short_val_16bit | maskMSB;				// set MSB to 1
	printf("Set MSB to 1, result is %hd, HEX %#hx\n", short_val_16bit, short_val_16bit);
	printf("Function set_MSB_to_one returned %hd, HEX %#hx\n", funcResult, funcResult);

	system("pause");
	return 0;
}

short set_MSB_to_one(short value)
{
	short maskMSB = 0x8000;
	return value = value | maskMSB;
}