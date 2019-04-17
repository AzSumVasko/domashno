#include <iostream>
#include <stdio.h>
using namespace std;
int c=0;
int count(){
++c;
return c;
}


int main()
{
   printf("%d\n", count());
   printf("%d\n", count());
   printf("%d\n", count());
}


