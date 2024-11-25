/*
 
 If the index value of size 10 is completely divisible by 5 then it will print 1 ortherwise it will print 0
 
 */

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
