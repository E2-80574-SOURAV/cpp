// //function overloading
// 4) write a function 'Add' which is able to add 
// 3 int value and 1 float value 
// 2 int value and 2 float value ,
// 1 int value and 3 float value,
// 4 int value ,
// 4 float value,

#include<stdio.h>

void addition(int ,int ,int ,float);
void addition(int ,int ,float ,float );
void addition(int ,float ,float ,float );
void addition(int ,int ,int ,int );
void addition(float ,float ,float ,float );



int main(void)
{
   
    addition(10,20,30,40.5f);
    return 0;

}

void addition(int a,int b,int c,float d)
{
    float res;
    res=a+b+c+d;
    printf("Addition of 3 int value and 1 float value=%f\n",res);
}

void addition(int a,int b,float c,float d)
{
    float res;
    res=a+b+c+d;
    printf(" Addition of 2 int value and 2 float value =%f\n",res);
}

void addition(int a,float b,float c,float d)
{
    float res;
    res=a+b+c+d;
    printf(" Addition of 1 int value and 3 float value =%f\n",res);
}

void addition(int a,int b,int c,int d)
{
    int res;
    res=a+b+c+d;
    printf(" Addition of 4 int value  =%d\n",res);
}

void addition(float a,float b,float c,float d)
{
    float res;
    res=a+b+c+d;
    printf(" Addition of 4  float value =%f\n",res);
}