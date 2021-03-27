#include<stdio.h>
int main()
{
    int n=9;
    int angle=0,ex_angle=0;
    angle=(n-2)*180/n;
    ex_angle=180-angle;
    printf("===9 polygons===\n");
    printf("Interior Angle of polygon :%d Degree\n",angle);
    printf("Interior Angle of polygon :%d Degree",ex_angle);
return 0;
}
