#include "stdio.h"

  void multiply(int num)
    {
     for (int i = 0; i < 10; i++)
     {
            for (int j = 0; j < 10; j++)
            {
                printf("%d * %d = %d\n",i,j,i*j);
     }
    }
     int sum[num];
        printf("%d\n",sum[num]);
  }
    
    int main()
    {
          int num;
         printf("Enter a number :");
         scanf("%d",&num);
            multiply(num);

    }