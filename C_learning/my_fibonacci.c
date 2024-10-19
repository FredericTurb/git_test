#include <stdio.h>

int main() 
{
    int length = 19;
    
    int a = 0;
    int b = 1;
    int next; 

    for (int i = 0; i < length; i++) 
        {
            next = a + b; 
            a = b;
            b = next; 
            printf("%02d) La valeur est: %d\n", i, a);
        }
 return(0);   
}