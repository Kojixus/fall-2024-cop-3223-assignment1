// Header file for input-output functions
#include <stdio.h>
#include <math.h>

// Preprocessor directive fo PI
#define PI 3.14159

//function for user input with a return
double askForUserInput() {
    double input;
    //take user input
    scanf("%lf", &input);

    return input;
}

//Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Get the coordinates of the first point x1
    printf("Enter the x value of the first point: ");
    x1 = askForUserInput();

    //Get the coordinates of the second paint but for y2
    printf("Enter the y value of the first point: ");
    y1 = askForUserInput();

    // Get the coordinates of the second point
    printf("Enter the x value of the second point: ");
    x2 = askForUserInput();

    //Get the coordinates of the second paint but for y2
    printf("Enter the y value of the second point: ");
    y2 = askForUserInput();

    //Output the points
    printf("The first point is (%.2lf, %.2lf)\nThe second point is (%.2lf, %.2lf)\n", x1, y1, x2, y2);

    //Calculating the distance between the two points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //Output the distance
    printf("The distance between the two points is %.2lf\n", distance);

    //Rating on function difficulty
    return 4.0;
}

//Function to calculate the perimeter of the city
double calculatePerimeter() {
    //Calculate diameter and perimeter
    double diameter = calculateDistance();

    //Calculate the perimeter using the formula PI * diameter
    double Perimeter = (PI * diameter);

    //Output of the calculated perimeter
    printf("The perimeter of the city is %.2lf\n", Perimeter);

    //Rating on function difficulty
    return 2.0;
}

//Function to calculate the area of the city
double calculateArea() {
    //Calculate diameter and area
    double diameter = calculateDistance();

    //Calculate the are using the formula: PI * radius^2
    double area = PI *pow(diameter, 2/2);

    //Output of the calculated area
    printf("This is the area of the city %.2lf\n", area);

    //Rating on function difficulty
    return 3.0;
}

//Function to calculate the area of the width
double calculateWidth() {
    //Calculate diameter and width
    double width = calculateDistance();

    //Output of the calculated width
    printf("The city's width %.2lf\n", width);

    //Rating on function difficulty
    return 1.0;
}

//Function to calculate the area of the height
double calculateHeight() {
    //Calculate diameter and height
    double height = calculateDistance();

    //Output of the calculated height
    printf("The city's height %.2lf\n", height);

    //Rating on function difficulty
    return 2.0;
}

//Main Function
int main(int argc, char **argv) {
    //Call the functions

    //Calculate Perimeter
    calculatePerimeter();

    //Calculate height 
    calculateArea();

    //Calculate width
    calculateWidth();

    //Calculate height 
    calculateHeight();

    // Return 0 to indicate successful program execution
    return 0;
}