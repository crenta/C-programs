#include <stdio.h>

int main() 
{
    double width;
    double height;


    printf("Enter a width: ");
    scanf("%lf", &width);

    printf("Enter a height: ");
    scanf("%lf", &height);
    
    double perimeter = (height + width) * 2;
    double area = (width * height);

    printf("The perimeter of the rectangle is %f and its area is %f!", perimeter, area);

    return 0;

}