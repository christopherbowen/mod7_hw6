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

/* FUNCTION DEFINITIONS */
{
	//this is the help function//
	void Usage(void)
	{
		printf("Usage: ./barcelona_mod7_hw6 x-coordinate y-coordinate\nboth params are required.\nmust be floating points");
		return;
	}

	//this function accepts the input data//
	void GetRec(double* x, double* y)
	{

		return; 
	} 
	//this function performs the required calculations//
	//r is distance from origin
	//theta is the angle from the x-axis
	void Polar(double x, double y, double* r, double* theta)
	{

		double x = atof(argv[1]);
		double y = atof(argv[2]);

		double r = sqrt((pow(x,2)) + ((pow(y,2))));
		double theta = atan(y/x);


		return (*r, *theta);
	}

	//this function displays the values of the two input parameters//
	void Showit(double radius, double angle)
	{ 
		printf("The polar cordinates are: \n");
		printf("The Distance from origin is %lf\n", r); 
		printf("Angle(in degrees) from x-axis is %lf\n", theta);

		return;
	}

	//this function asks if the user would want to perform another calculation//
	int AskQuestion(void)
	{
		int Response;
		printf("Do you want to calculate again(Y/N)?\n");
		printf("Y = 1, N = 0: \n");
		scanf("%d" &Response);

		if (Response != 1 || Response != 0)
		{
			printf("Bad input, try again\n");
			continue;
		}
		else if (Response == 1)
		{
			printf("Enter the x coordinate: ");
			scanf("%d" &x);
			printf("Enter the y coordinate: ");
			scanf("%d", &y);
		}
		else if (Response == 0)
		{
			break;
		}
		return Response;

	}
}






