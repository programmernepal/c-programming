/*program to calculate area of a circle  */
/*program code by programmer nepal  */
#include <stdio.h>
 #define PI 3.142
 float area_of_circle(float radius)/*return value */
 {
     return(PI*radius*radius);
 }
 void main()
 {
     float r,a;
     r=7.0;
     a=area_of_circle(r);
     printf("Area of circle of radius %f is %f",r,a);
 }
