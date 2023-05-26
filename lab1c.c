#include <stdio.h>
#include <math.h>
#define PI 3.14159

void calc() {
	double radius = 0.0;     //Radius of circle input
	double side = 0.0;       //Side of square input
	double areaCircle = 0.0; //Area of circle
	double areaSquare = 0.0; //Area of square
	double difference = 0.0; //Difference output
	
	// Get radius
	printf("\nEnter radius: ");
	scanf("%lf", &radius);
	// Get side
	printf("\nEnter side: ");
	scanf("%lf", &side);
	
	// Calculate area of circle
	areaCircle = PI * radius * radius;
	printf("\nThe area of the circle is: %lf\n", areaCircle);
	// Calculate area of square
	areaSquare = side*side;
	printf("\nThe area of the square is: %lf\n", areaSquare); 
	// Calculate difference
	difference = fabs(areaCircle - areaSquare);
	
	
	// Print difference to screen
	//printf("\nThe difference is: %lf\n", difference);
	
	if(areaCircle > areaSquare){
		printf("\nThe circle is larger than the square by: %1.3lf\n", difference);
	}
	
	else if(areaSquare > areaCircle){
		printf("\nThe square is larger than the circle by: %1.3lf\n", difference);
	}
	else{
		printf("\nThey are equal because thier difference is: %1.3lf\n", difference);
	}
}

int main(int argc, char *argv[]) {
	//Call calc() function 3 times
	calc();
	calc();
	calc();
	
	printf("\nPress a key to exit");
	
}
