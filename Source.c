/*
Author: Samuel Bostic
Version: 3.0
Date: 5/1/18

This program asks the user to input two numbers, the height and width of their rectangle and
it will find the perimeter and the area of the rectangle with those two inputs.

*/
#include <time.h>
#include <cstdlib>
#include <stdio.h>//standard output
#include <string.h>//used to modify and read strings
#include <math.h>
#define M_PI 3.14159265358979323846//Needed for PI



int main()
{
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	/*
	Variables

	  height: an integer that is the height of the rectangle the user inputs
	  width: an integer that is the width of the rectangle the user inputs
	  perimeter: an integer that is found by adding the width times two, with the height times two.
	  area: an integer that is found by multiplying the width and the height together.
	  shape: is a char that is checked to determine what formula used to calculate the area and perimeter.
	  Circle, Rectangle, Square: are used for comparison between the input and which formulas to use
	  radius: just used to store the input when we are calculating circles
	  result: used to compare strings
	*/
	char Triangle[] = "Triangle";
	char Circle[] = "Circle";
	char Rectangle[] = "Rectangle";
	char Square[] = "Square";
	char shape[50];
	register unsigned  int result;


	/*
	Promts the user to input what kind of shape they have, and scans in what they input
	result = 0 here if the user input "Circle or circle"
	*/
	printf("\n \nWhat shape would you like?\nCircle, Rectangle, Square, or Triangle\n");
	scanf("%s", shape);
	/*
	==================================================================================

											Circle

	==================================================================================

	Finding Area and Circumfrence
			Area = PI * (radius * radius)
					Circumfrence = 2 * PI * radius


Output is in the format of:
==========Circle!==========
With a radius of :
The Circumfrence of your Circle is:
The Area of your Circle isis:
===========================

*/
	result = strcmp(shape, Circle);
	if (result == 0 || result == 32)
	{
		//Input
		register unsigned int Circle_Radius;
		printf("Please input your Radius\n");
		scanf("%d", &Circle_Radius);
		printf("\n");
		register unsigned int Circle_Circumfrence = (M_PI * (Circle_Radius * Circle_Radius));
		register unsigned int Circle_Area = 2 * M_PI * Circle_Radius;
		//Output
		printf("==========%s!==========\n", shape);
		printf("With a radius of: %d\nThe Circumfrence of your Circle is: %d\nThe Area of your Circle is: %d\n",
			Circle_Radius, Circle_Circumfrence, Circle_Area);
		printf("===========================\n");
		printf("\n");
	}
	/*
	==================================================================================

									Rectangle

	==================================================================================
	Finding Perimeter
	  The Formula to find the Perimeter and Area of a Rectangle is:
			Perimeter = ( 2 * Width) + ( 2 * Height)
			Area = Width * Height
	Output will be in the format of:
	==========Rectangle!==========
	With a height of:
	And a width of:
	Your Perimeter of your rectangle is:
	The area of your rectangle would be:
	=============================

	*/

	result = strcmp(shape, Rectangle);
	if (result == 0 || result == 32)
	{
		//Input
		register unsigned int Rectangle_Height, Rectangle_Width;
		printf("Please input the height of your rectangle\n");
		scanf("%d", &Rectangle_Height);
		printf("Please input the width of your rectangle\n");
		scanf("%d", &Rectangle_Width);
		printf("\n");
		register unsigned int Rectangle_Perimeter = (2 * Rectangle_Width + 2 * Rectangle_Height);
		register unsigned int Rectangle_Area = Rectangle_Height * Rectangle_Width;
		//Output
		printf("==========%s!==========\n", shape);
		printf("With a Height of: %d\nAnd a Width of: %d\nYour Perimeter of your Rectangle is: %d\nThe Area of you Rectangle is: %d\n"
			, Rectangle_Height, Rectangle_Width, Rectangle_Perimeter, Rectangle_Area);
		printf("===========================\n");
		printf("\n");

	}

	/*
	==================================================================================

									Square

	==================================================================================
	Finding Perimeter

	  The formula to find the Perimeter and Area of a Square is:
			Perimeter = 4 * Side
			Area = Side * Side

	Output will be in the format of:
	===========Square!===========
	With a side of:
	The Perimeter of the Sqaure is:
	The Area of your Square is:
=============================
*/
	result = strcmp(shape, Square);
	if (result == 0 || result == 32)
	{
		//Input
		register unsigned int Square_Side;
		printf("Please input one side of the Square\n");
		scanf("%d", &Square_Side);
		printf("\n");
		register unsigned int Perimeter_Square = (4 * Square_Side);
		register unsigned int Area_Square = (Square_Side * Square_Side);
		//Output
		printf("==========%s!==========\n", shape);
		printf("With a side of: %d\nThe Perimeter of the Square is: %d\nThe Area of your Square is: %d\n"
			, Square_Side, Perimeter_Square, Area_Square);
		printf("===========================\n");
		printf("\n");


	}
	/*
	==================================================================================

									Triangle

	==================================================================================
	Finding Perimeter
  The formula to find the Perimeter and Area of a Triangle is:
		Perimeter = Side_a
		Area = ( Base * Height ) / 2
Outputs will be in the format is:
===========Triangle!===========
With a Base of:
With a Height of:
The Area of your Triangle is:
The Perimeter of your Triangle is:
===============================

*/
	result = strcmp(shape, Triangle);
	if (result == 0 || result == 32)
	{
		char AorP[50];
		char Perimeter[] = "Perimeter";
		char Area[] = "Area";
		printf("Would you like to find the Area or Perimeter?\n");
		scanf("%s", AorP);

		/*
		==========
		Perimeter
		==========
		*/
		result = strcmp(AorP, Perimeter);
		if (result == 0 || result == 32)
		{
			//Input
			register unsigned  int Triangle_Side_One, Triangle_Side_Two, Triangle_Side_Three;
			printf("Please input the Side 1 of the Triangle\n");
			scanf("%d", &Triangle_Side_One);
			printf("Please input the Side 2 of the Triangle\n");
			scanf("%d", &Triangle_Side_Two);
			printf("Please input the Side 3 of the Triangle\n");
			scanf("%d", &Triangle_Side_Three);
			register unsigned int Triangle_Perimeter = Triangle_Side_One + Triangle_Side_Two + Triangle_Side_Three;
			//Output
			printf("==========%s!==========\n", shape);
			printf("Your Triangle has sides of \n Side One: %d\n Side Two: %d\n Side Three: %d\nYour Perimeter is: %d\n"
				, Triangle_Side_One, Triangle_Side_Two, Triangle_Side_Three, Triangle_Perimeter);
			printf("===========================\n");
			printf("\n");

		}

		/*
		=====
		Area
		=====
		*/              result = strcmp(AorP, Area);
		if (result == 0 || result == 32)
		{
			//Input
			register unsigned int Triangle_Base, Triangle_Height;
			printf("Please input the Height of your Triangle.\n");
			scanf("%d", &Triangle_Height);
			printf("Please input the Base of your Triangle\n");
			scanf("%d", &Triangle_Base);
			register unsigned int Triangle_Area = (Triangle_Base * Triangle_Height) / 2;
			//Output
			printf("==========%s!==========\n", shape);
			printf("Your Triangle has a Height of: %d\nAnd a Base of: %d\nYour Triangles Area is: %d\n"
				, Triangle_Height, Triangle_Base, Triangle_Area);
			printf("===========================\n");
			printf("\n");
		}
	}
	//Time Stop and print out.
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Time Taken to run the program: %f\n", cpu_time_used);
}
