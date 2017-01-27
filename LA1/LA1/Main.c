#include <stdio.h>

/*******************************************************************************************
* Programmer: Niko Kent                                                                   *
* Class: CptS 121, Spring  2017; Lab Section 014                                          *
* Programming Assignment: Lab1Task1                                                       *
* Date: January 19, 2017                                                                  *
* Description: This program prints out a simple "hello world" message.                    *
*******************************************************************************************/
void ProjB(void) {
	int i = 0;
	int r = 0;
	
	printf("\nOhm's Law: V = IR\nHello User! Please enter an int for \"current\": ");
	scanf("%d", &i);
	printf("\nPlease enter an int for \"Resistance of the circuit\": ");
	scanf("%d", &r);
	printf("\nHere is your Voltage: %d\n", i*r);
	getc(0);
}
void ProjC(void) {
	int v = 0;
	int r = 0;
	
	printf("\nJoule's Law: P = (V^2)/R\nHello User! Please enter an int for \"Voltage\": ");
	scanf("%d", &v);
	printf("\nPlease enter an int for \"Resistance of the circuit\": ");
	scanf("%d", &r);
	printf("\nHere is your Power Value: %d\n", (v * v) / r );
	getc(0);
}
void ProjD(void) {
	int x = 0;	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("We are solving for y = 3 * ax3 + (1/4) * bx2 + 10 * cx + (-5) * d \nplease enter a value for x: ");
	scanf("%d", &x);	
	printf("please enter a value for a: ");
	scanf("%d", &a);
	printf("please enter a value for b: ");
	scanf("%d", &b);
	printf("please enter a value for c: ");
	scanf("%d", &c);
	printf("please enter a value for d: ");
	scanf("%d", &d);
	printf("Here is your outcome: %f ", 3 * ((float)a*((float)x*(float)x*(float)x)) + (1 / 4) * ((float)b * ((float)x*(float)x)) + 10 * ((float)c*(float)x) + (-5) * (float)d);
}
void ProjE() {
	float radius = 0;
	printf("Hello User! Please provide a radius: ");
	scanf("%f", &radius);
	printf("Here is the Circumference of your circle: %f\n", 2 * 3.1415 * radius);
}
int main() {
	ProjE();
	int number1_int = 0;
	int number2_int = 0;
	float number1_float = 0;
	float number2_float = 0;

	printf("Hello User! Please enter an int: ");
	scanf("%d", &number1_int);
	printf("\nNow enter another int: ");
	scanf("%d", &number2_int);
	printf("\nNow enter a float: ");
	scanf("%f", &number1_float);
	printf("\nNow enter another float: ");
	scanf("%f", &number2_float);

	printf("\nthe sum of the first two ints are: %d", number1_int + number2_int);
	printf("\nThe second float minus the first float: %f", number2_float - number1_float);
	printf("\nThe first int multiplied by the first float: %d", number1_int * (int)number1_float);
	printf("\nThe first int divided by the second int as an int: %d  as a float: %f ", number1_int / number2_int, (float)number1_int / (float)number2_int);
	printf("\nthe first int divided by the second float as an int: %d  as a float: %f ", number1_int / (int)number2_float, (float)number1_int / (float)number2_float);
	printf("\nThe first int cast as a float and divided by the second int: %f", (float)number1_int / number2_int);
	printf("\nThe first float mod by the second float: %d", (int)number1_float % (int)number2_float);
	printf("\nThe first int is: %d the second int is: %d  if even: \"0\" if odd: \"1\"", number1_int % 2, number2_int % 2);
	getc(0);
	return 0;
}
