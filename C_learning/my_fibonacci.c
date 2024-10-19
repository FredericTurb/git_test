#include <stdio.h>

int main() 
{
    int length = 19;
    
    int a = 0;
    int b = 1;
    int c; 

    for (int i = 0; i < length; i++) 
        {
            c = a + b; 
            a = b;
            b = c; 
            printf("%02d) The Value is: %d\n", i, a);
        }
 return(0);   
}