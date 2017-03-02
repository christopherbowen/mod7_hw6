/*
 * =====================================================================================
 *
 *       Filename:  barcelona_mod7_hw6.c
 *    Description:  homework number 6
 *
 *        Created:  02/28/2017 05:05:59 PM
 *         Author:  Christopher Bowen (), christopherbowen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <math.h>
/* Function Prototypes */
void Usage(void);
void GetRec(double* x, double* y);
void Polar(double x, double y, double* theta);
void Showit(double radius, double angle);
int AskQuestion(void);
/* Main Program */
int main(int argc, char *argv[])
{
	double x = atof(argv[1]);
	double y = atof(argv[2]);
	Usage();
	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("Usage: ./barcelona_mod7_hw6 x-coordinate y-coordinate\nboth params are required.\nmust be floating points");
	return;
}

void GetRec(double* x, double* y)
{
	
	return; 
} 

void Polar(double x, double y, double* theta)
{
	double r = sqrt((x*x)+(y*y)
	return;
}
