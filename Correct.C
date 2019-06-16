#include <stdio.h>
#define N 6
void main()
{
  int i,j,x;
  i=1;
  while(i<=N)
  {  
	 x=1;                   /*$ERROR$*/
	 for(j=1;j<=N;j++,x++)
	  	  if(x>N)     
			printf("%d",x%N);
		  else      
			printf("%d",x);   
	  printf("/n");      /*$ERROR$*/
      i+1;                  /*$ERROR$*/
  }
}

