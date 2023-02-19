#include <stdio.h>
double calcArea(double radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    double radius, area;
    printf("Enter The Radius: ");
    scanf("%lf", &radius);
    area = calcArea(radius);
    printf("The area is: %lf", area);
}
