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
void Polar(double x, double y, double *r, double *theta);
void Showit(double radius, double angle);
int AskQuestion(void);

double r, theta, radius, angle;

/* Main Program */

int main(int argc, char *argv[])
{
	if(argc > 3 || argc < 1) //check for 2 and only 2 parameters//
	{
		Usage(); //exit
		exit(0);
	}
	double x = atof(argv[1]);
	double y = atof(argv[2]);

	if(x == 0.0 || y == 0.0)// if x = 0.0 or y = 0.0
	{
		Usage(); //exit
		exit(0);
	}
	
	Polar(x, y, &r, &theta);// create a loop for response to ask question
	Showit(radius, angle);
	int question;
	question = AskQuestion();
	while(question ==1)
	{
		printf("please enter a x-coordinate: ");
		scanf("%lf", &x);
		printf("please enter a y-coordinate: ");
		scanf("%lf", &y);
		GetRec(&x, &y);
		AskQuestion();
		if(question ==0);
		{
			break;
		}
	}

	return 0;
}

/* FUNCTION DEFINITIONS */


//this is the help function//
void Usage(void)
{
	printf("Usage: ./barcelona_mod7_hw6 x-coordinate y-coordinate\nboth params are required.\nmust be floating points\n");
	return;
}

//this function accepts the input data//
void GetRec(double* x, double* y)
{
	double xcord, ycord;
	xcord= *x;
	ycord= *y;
	Polar(xcord, ycord, &r, &theta);
	Showit(radius, angle);
	return; 
} 
//this function performs the required calculations//
//r is distance from origin
//theta is the angle from the x-axis
void Polar(double x, double y, double* r, double* theta)
{
	//have to convert theta from radians to degree
	double dummy;
	*r = sqrt((pow(x,2)) + ((pow(y,2))));
	dummy = atan(y/x);
	*theta = dummy * 57.2958;

	return;
}

//this function displays the values of the two input parameters//
void Showit(double radius, double angle)
{ 
	printf("The polar cordinates are:\n");
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
	scanf("%d", &Response);

	return Response;

}
