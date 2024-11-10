/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: ALMASRIA
 */

/**********************************************************************************

                                    HomeWork 1_EX5

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	signed char ch;

	printf("Enter a character:\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &ch);

	printf("ASCII value of G = %d\n" , ch);

	return 0;
}
