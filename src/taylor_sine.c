#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

double factorial(int x) //Factorial function to make the calculations easier
{
    if(x == 0)
        return 1;
    else 
        return(x * factorial(x - 1));
}

double taylor_sine(double x, int n)
{
    /* Implement your function here */
    int count = 2;
    double power = 5.0;
    double result = 0.0;

    result = x - (pow(x,3)/factorial(3)); //Result for the first two terms
    for(count; count <= n+5; count++) //Question for n terms. Here +5 is added for extra precision
    {
        if(count % 2 == 1)
            result -= (pow (x,power) / factorial(power));
        if(count % 2 == 0)
            result += (pow (x,power) / factorial(power));
        power += 2;  
    }
    return result;
}