   /*     
         * 
        * * 
       * * * 
      * * * * 
     * * * * * 
    * * * * * * 
   * * * * * * * 
  * * * * * * * * 
 * * * * * * * * * 
* * * * * * * * * * 

*/




#include<stdio.h>


int main()
{
    int i,j,n;
    scanf("%d",&n);
    /*run loop (parent loop) till number of rows*/
    for(i=0;i<n; i++)
    {
	    /*loop for initially space, before star printing*/
	    for(j=0;j<n-1-i;j++)
	    {
		    printf(" ");
            
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }
		
	    printf("\n");
	   	         
    }
    return 0;
}