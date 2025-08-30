#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    // Get coordinates of the first point
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Get coordinates of the second point
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance using the formula
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Print the calculated distance
    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}
