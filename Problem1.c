#include <stdio.h>
int main ( void)
{
    int i;
    int t = 0;
    for ( i = 0 ; i < 1000 ; i++)
    if ( i % 3 == 0 || i % 5 == 0)
    {
        t = t+ i ;    
    }

    printf ("%d \n" ,t);
 
}
