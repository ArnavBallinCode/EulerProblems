#include <stdio.h>
int main(void)
{
    // initialising  the first and second terms 
    int t1 = 0 , t2 = 1;

    // initialise the next term t3
    int t3 = t2 + t1;

    // get number of terms from user 
    int n;
    printf("Enter the number of terms you want ");
    scanf("%d", &n);

    //print first 2 terms 
    printf("%d %d " , t1 , t2 );

    // print 3rd to nth terms
    int i , t ;

  for ( i = 3; i <=n ; i++)

  {
    t = t1 + t2;

    printf("%d " , t );

    t1 = t2;
    t2 = t;
  
  }
}