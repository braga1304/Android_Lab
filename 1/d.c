#include <stdio.h>
int main() {
    float length, breadth, r, areac, peri, acirc, ccirc;
    printf("Length and Breadth of the Rectangle = ");
    scanf("%f %f", &length, &breadth);
    areac = length*breadth;
    peri = 2.0*length+2.0*breadth;
    printf("Area of the Rectangle = %.2f\nPerimeter of the Rectangle = %.2f\n\n", areac, peri);
    printf("Radius of the Circle = ");
    scanf("%f", &r);
    acirc = 3.14*r*r;
    ccirc = 2*3.14*r;
    printf("Area of the Circle = %.2f\nCircumference of the Circle = %.2f\n", acirc, ccirc);
    return 0;
}