#include <stdio.h>
#include <math.h>

/*******************************************************************************************
* Programmer: Your Name                                                                    *
* Class: CptS 121, Spring  2017; Lab Section X                                             *
* Programming Assignment: Lab1Task1                                                        *
* Date: January 16, 2017                                                                   *
* Description: This program prints out a simple "hello world" message.                     *
*******************************************************************************************/
#define PI 3.14159265358979323846
#define Const1 63
#define Const2 -17

int main() {
	
	//part 1                        i'd like to point out that throughout the code I individually addressed the user for each unit needed which i felt
	double mass;                 // provided a better user interface
	double acceleration;
	printf("Hello User! To calculate for Newton's Second Law please Enter a (Floating-Point) Value for Mass:"); //address user for mass
	scanf("%lf", &mass); //grabs the mass input
	printf("then a second value for acceleration: "); //readdresses for acceleration
	scanf("%lf", &acceleration); // gets acceleration data
	printf("Newton's Second Law: \"mass * acceleration = Force\" %lf * %lf = %lf\n", mass, acceleration, mass * acceleration);

	//part 2
	double radius;
	double height;
	printf("\nTo calculate the volume of a Cylinder please enter a (Floating-Point) value for the radius: ");
	scanf("%lf", &radius);
	printf("then a second value for Height: ");
	scanf("%lf", &height);
	printf("Volume of a Cylinder: \"PI * radius^2 * height = volume_cylinder\" %lf * %lf^2 * %lf = %lf", PI, radius, height, PI * (radius * radius) * height);

	//part 3
	char plaintext_character;
	char encoded_character;
	printf("\n\nTo calculate for an encoded character please enter a plain text character: ");
	scanf(" %c", &plaintext_character);
	encoded_character = plaintext_character - 'a' + 'A'; //I allowed lower case characters to be uppercased then reput through the same equation so that there will always be an encoded character returned
	printf("\nCharacter encoding: \"(plaintext_character - 'a') + 'A' = encoded_character\"  (%c - 'a') + 'A' = %c", plaintext_character, encoded_character - 'a' + 'A');

	//part4
	double u;
	double v;
	printf("\n\nTo calculate Gauss Lens Formula (solve for f) please enter a (Floating-Point) value for object distance: ");
	scanf("%lf", &u);
	printf("\nthen a second value for image distance: ");
	scanf("%lf", &v);
	printf("Gauss Lens Formula: \"1 / f = 1 / u + 1 / v\"   1 / f = 1 / %lf + 1 / %lf  f = %lf", u, v, 1 / (1 / u + 1 / v));

	//part5
	double theta;       // math.h was brought in to properly use sin() and cos()
	printf("\n\nTo calculate a Tangent please enter a (Floating-Point) value for theta: ");
	scanf("%lf", &theta);
	printf("\nTangent: \"sin(theta) / cos(theta) = tan_theta\"  sin(%lf) / cos(%lf) = %lf", theta, theta, sin(theta) / cos(theta)); 

	//part6
	double r1;
	double r2;
	double vin;
	printf("\n\nTo Calculate Resistive Divider please first enter a (Floating-Point) value for r1: ");
	scanf("%lf", &r1);
	printf("\nthen a second value for r2: ");
	scanf("%lf", &r2);
	printf("\nthen a third value for vin: ");
	scanf("%lf", &vin);
	printf("\nResistive Divider: \"r2 / (r1 + r2) * vin = vout\"   %lf / (%lf + %lf) * %lf = %lf", r2, r1, r2, vin, r2 / (r1 + r2) * vin);
	
	//part7
	double x1;
	double x2;
	double y1;
	double y2;
	printf("\n\nTo Calculate the distance between two (Floating-Point) value points please enter an x value: ");
	scanf("%lf", &x1);
	printf("\nthen a y value: ");
	scanf("%lf", &y1);
	printf("\nNow for the second point enter a value of x: ");
	scanf("%lf", &x2);
	printf("\nthen a y value for this second point: ");
	scanf("%lf", &y2);
	printf("Distance between two points: \"square root of ((x1 - x2)^2 + (y1 - y2)^2) = distance\"  square root of ((%lf - %lf)^2 + (%lf - %lf)^2 = %lf\n", x1, x2, y1, y2, sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2))));
	
	//part8
	double x;
	double z;
	int a;                                                                                     //I added this text based exception for '2' to prevent the program crashing
	printf("\n\nTo calculate the general equation: \"y = a / (a % 2) - (63 / -17) + x * z\" Please enter an Int-value for 'a' (except 2 due to math error): ");
	scanf("%d", &a);
	printf("\nNow enter a floating-point value for x: ");
	scanf("%lf", &x);
	printf("\nLastly another floating-point value for z: ");
	scanf("%lf", &z);
	printf("General Equation: \"a / (a mod 2) - (63 / -17) + x * z = y\"  %d / (%d mod 2) - (%lf / %lf) + %lf * %lf = %lf\n", a, a, (double)Const1, (double)Const2, x, z, a / (a % 2) - ((double)Const1 / (double)Const2) + x * z);
	return 0;
}