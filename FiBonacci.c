#include<stdio.h>
int i=1,n,res1,res2=0,res3=1;              
main()
{             
       
       printf("programa que te dice el fibonacci\n");
       printf("dame el numero\n");  
       scanf("%i",&n);                    
       n=n-2;  
       printf("%i\n",res2);            
       printf("%i\n",res3);              
      for(i=1;n>=i;i++)
      {
      			
                     res1=res2+res3;
                     res2=res3;         
                     printf("%i\n",res1);   
                     res3=res1;       
                          
                       }          
                                    
                           }     
