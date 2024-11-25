#include "stdio.h"
        
         int main()
         {

            int table[10];
             
                for (int i = 0; i < 10; i++)
                {
                   if  (i % 5 == 0)
                   {
                           table[i] = 1;
                     }
                     else
                     {
                          table[i] = 0;
                   }

                   printf("%d\n", table[i]);
                }
              
               
         }