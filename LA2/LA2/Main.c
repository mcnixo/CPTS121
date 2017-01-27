#include <stdio.h>

int main() {
	part3();


	return 0;
}

int part1() {
	double x1, x2, y1, y2;
	printf("Hello! Enter Coordinates for one point (x y): ");
	scanf("%lf %lf", &x1, &y1);
	printf("Enter Coordinates for another point (x y): ");
	scanf("%lf %lf", &x2, &y2);
	printf("\nSlope between points = %lf", (y2 - y1) / (x2 - x1));
	printf("\nMidpoint = (%lf , %lf)", (x2 + x1) / 2, (y2 + y1) / 2);
	printf("\nReverse slope = %lf", -1 / (y2 - y1) / (x2 - x1));
	printf("\nY_inter = %lf", ((y2 + y1) / 2) - ((y2 - y1) / (x2 - x1)) * ((x2 + x1) / 2));
	printf("\nPoint 1 = (%lf %lf)", x1, y1);
	printf("\nPoint 2 = (%lf %lf)", x2, y2);
	printf("\n%lf = %lf * %lf + %lf\n", (y2 + y1) / 2, (y2 - y1) / (x2 - x1), (x2 + x1) / 2, -1 / (y2 - y1) / (x2 - x1));

	return 0;
}
int part2() {
	int ft, in;
	double weight;
	printf("Enter your weight: ");
	scanf("%lf", &weight);
	printf("Enter Feet then In: ");
	scanf("%d %d", &ft, &in);
	printf("BMI = %lf\n", weight / ((ft * 12 + in)*(ft * 12 + in)) * 703);

}
int part3() {
	int harris_poll, coaches_poll;
	double computer_ranking;
	printf("Enter Harris (1-2850): ");
	scanf("%d", &harris_poll);
	printf("Enter Coaches (1-1475): ");
	scanf("%d", &coaches_poll);
	printf("Enter Online (0-1): ");
	scanf("%lf", &computer_ranking);
	printf("BSC = %lf\n", ((double)harris_poll / 2850 + (double)coaches_poll / 1475 + computer_ranking / 1) / 3);
	return 0;
}