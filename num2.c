#include<stdio.h>

main()
{
    //input 
    int num ;
    while( 1 )
    {
	scanf("%d", &num );
	int i = 1;
	int temp = 1;
	int low = 1;
	int high = num;
	for ( ; i <= num && i >= 1 && low <= high; )
	{
	    temp = i*i;
	    if ( temp == num )
	    {
		printf ("%d = %d*%d\n", num, i, i );
		break ;
	    }
	    else if( temp < num )
	    {
		low = i;
	    }
	    else 
	    {
		high = i;
	    }
	    temp = i;
	    i = ( low + high )/2;
	    if ( temp == i )
	    {
		low = low + 1;
		i = ( low + high )/2;
	    }
	}
	if (i > num || i < 1 || low > high )
	    printf("%d has no sqrt:(\n", num);
    }
}

