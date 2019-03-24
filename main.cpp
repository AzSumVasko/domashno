#include <iostream>
#include <stdio.h>
using namespace std;

double krn(double S)
{
    double x0=69;
    double x1=1;
    int i=1;
    while(x0!=x1)
    {
        if(i%2==1)
        {
            x1=(x0+S/x0)/2;
        }
        else if(i%2==0)
        {
            x0=(x1+S/x1)/2;
        }
        i++;
    }


    return x0;
}
int main()
{

    printf("%f\n", krn(1234567));
}
