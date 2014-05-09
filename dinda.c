#include <stdio.h>
#include <conio.h>

main ()//main program
{
//judul
       printf ("Test Your Brain Now\n");
       
       int a,b,c,score;
       score = 0;
       printf("Hitung kemampuan berhitungmu: ");
       scanf("%d",&a);
       printf("Hitung kemampuanmu berhitungmu: ");
       scanf("%d",&b);
       c=a+b;
       printf("? %d + %d = %d",a,b,c);
       
       printf("4 + 4 = ");
       scanf("%d",&c);
        
          if(c = 8)
          {
               printf("\nJawaban anda benar\n");
               score = score + 25;
               printf("Score anda %d",&score);
               printf("\nKetik sembarang untuk melanjutkan\n");
               getch();
               
               if(score = 25)
               {
                   printf("18-12 = ");
                   scanf("%d",&c);
                   
                   if(c = 6)
                   {
                      printf("\nJawaban anda benar\n");
                      score = score + 25;
                      printf("Score anda %d",&score);
                      getch()  
                      
                      if(score = 50)
                      {
                          printf("2 x 7 = ");
                          scanf("%d",&c);
                          
                          if(c= 14)
                          {
                            printf("\nJawaban anda benar\n");
                            score = score + 25;
                            printf("Score anda %d",&score);
                            getch();
                            
                            if(score = 75)
                            {
                             printf("100 / 2 = ");
                             scanf("%d",&c);
                             
                             if(c = 50)
                             {
                                printf("\nJawaban anda benar\n");
                                score = score + 25;
                                printf("Score anda %d",&score);
                                Printf("Selesai");
                                getch();
                                break;
                                       
                             }
                            
                            }else
                            {
                                 break;
                            }
                            
                            
                            
                          }       
                      }else
                      {
                         break; 
                      } 
                      
                      
                   }else
                   {
                        break;
                   }
               }    
          }else
           {
            printf("Jawaban anda salah\n");
            printf("Score anda %d",&score);   
           }         
       
       
getch();
return 0;
}


