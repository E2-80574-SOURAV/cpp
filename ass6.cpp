//inline functiom

// 6> Write a inline function to calculate area of triangle.
// Input base and Height from user and print the result.

#include<stdio.h>

inline int triangle_area(int ,int);


int main(void)
{
    int b,h,res;
    res=triangle_area(b,h);
    printf("Area of the triangle=%d\n",res);


    return 0;
}

 int triangle_area(int base ,int height)
 {
    int area;
    printf("Enter the base and height of the triangle..\n");
    scanf("%d%d",&base,&height);
    area=0.5*base*height;
   
    return area;
 }
