#include <stdio.h>
#include <math.h>
#include <assert.h>

extern "C"
{
#include "taylor_sine.h"
#include "stack.h"
}
// Add your test cases for Exercise 1b,c) here

int main(void)
{
   
    double testcases[10] = {0.0, 0.3, 1.7, 2.4, 3.3, 3.1415, 5.8, 8.0, 11.0, 14.0};
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("Test function: %lf\n", taylor_sine(testcases[i], 5));
        printf("Built in sin function: %lf\n\n", sin(testcases[i]));
        
    }
    

}