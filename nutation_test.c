/*
 * @Description: 
 * @Version: 1.0.0
 * @Author: lax
 * @Date: 2023-12-20 00:25:27
 * @LastEditors: lax
 * @LastEditTime: 2023-12-29 08:33:45
 */
#include <sofa.h>
#include "sofam.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    double dt,dt_,dpsi,deps;
    double pi;
    pi = 3.141592653589793;
    dt = 2400000.5;
    dt_ = 46895.0;
    iauNut80(dt,dt_,&dpsi,&deps);
    printf("dpsi: %.15lf\n",((dpsi*180)/pi));
    printf("deps: %.15lf\n",((deps*180)/pi));
    system("pause");
    return 0;
}