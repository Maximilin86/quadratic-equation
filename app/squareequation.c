#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

double *solutionSquareEquation(int a,int b,int c) {
    double *solution = malloc(sizeof(double) * 2);
    int diskrimenant = b*b-4*a*c;
    if (diskrimenant == 0) {
        solution[0] = -b/2*a;
        solution[1] = solution[0];
                            }
        else if (diskrimenant > 0){
                solution[0] = (-b-diskrimenant)/(2*a);
                solution[1] = (-b+diskrimenant)/(2*a);
            }
                else solution=NULL;

    return solution;
}
