#include<stdio.h>

main()
{
    //input 
    int num ;
    while( 1 )
    {
	scanf("%d", &num );
	int i = 1;
	int temp = 0;
	for ( ; i<= num ; i++ )//point 1
	{
	    temp = i*i ;
	    if ( temp == num )
	    {
		printf("%d*%d=%d\n", i, i, num );
		break ;
	    }else if ( temp > num )//point 2
	    {
		printf ("No\n");
		break;//point 3
	    }
	}
    }
}

