/*
 * TestApp.c
 *
 *  Created on: May 4, 2021
 *      Author: pmathapa
 */
#include <stdio.h>
#include "TestLib.h"

int main ( void )
{
	int res;

	printf("Hellow World! \n");
	res = Addition(5, 6);

	printf("%d \n", res);

	return 0;
}

