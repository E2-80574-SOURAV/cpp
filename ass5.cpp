//default argument
// 5> write a function that has the default values for multiple parameters. 
// Call the function where the parameters will use the default values 
// and where the values will be passed to
//  the function.

#include<stdio.h>
void printvalue(int a,int b=0,int c=0)
{
    int res;
    res=a+b+c;
    printf("a=%d b=%d c=%d res=%d\n",a,b,c,res);
}
int main(void)
{
    printvalue(10,20,30);
    printvalue(10,20);
    printvalue(10);
    printvalue(10,2);



    return 0;
}

