#include <stdio.h>

#include "myfunc.h"

int main()
{
    int a, b, c;
    printf("Enter variables A B C \n");
    scanf("%d %d %d", &a, &b, &c);

    double *result = solutionSquareEquation(a,b,c);
    if(result==NULL) printf("There are no roots.\n");
        else   if(result[0]== result[1]) printf("One root: %f\n", result[0]);
                    else  printf("Roots: %f %f\n", result[0], result[1]);
    return(0);
}
