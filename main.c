#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///2.Read two integers and compute their sum, average and sum of the squares of the numbers.
    int a, b, sum, sum_q;
    float average;
    printf("citeste a si b:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    average=(float)sum/2;
    sum_q=a*a+b*b;
    printf("Suma este %d, media este %f si suma partatelor este %d\n", sum, average,sum_q);

    ///1.Write a program to read a number of units of length (a float) and print out the area of a circle with that radius.
    ///Assume that the value of pi is 3.14159. After that, change the type to double and compare the results
    float r, pi=3.14159, area;
    double r2, new_area;
    printf("citeste r:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Aria este %.7g\n", area);
    printf("citeste r:");
    scanf("%lf",&r2);
    new_area=pi*r2*r2;
    printf("Aria este %.15g\n", new_area);

    return 0;
}
