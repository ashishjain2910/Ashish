#include<stdio.h>
#include<string.h>

int main()
{

    // write your code in C99 (gcc 6.2.0)
	int N=6;
	int A[6]={2,2,1,4,6,5};
    int B[6];

    memset( B, 0, N*sizeof(int) );
    for (int i = 0 ; i<N ;i++ )
    {
        if (A[i]>0 && A[i]-1<N)
        {
            B[A[i]-1] =A[i]; 
        }
    }
    for (int i = 0 ; i<N ;i++ )
    {
  //      if ( B[i] == 0)
    //    {
           printf("%d\n",B[i]); 
       // }
    

	}

           printf("%d\n",N+1); 
}

