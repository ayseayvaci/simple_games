#include <stdio.h>
#include <stdlib.h>

void mayin();
int matris[10][10];
char matris2[10][10];
int main()
{
     srand(time(NULL));
     int i,j,secim,k=0,satir,sutun;
     char secim2;

     while (1)
     {
        printf("oyuna baslamak icin 1'e cikmak icin 2'ye basınınz");
        scanf("%c",&secim2);
        switch(secim2)
        {
        case '1':
        {
        printf("[1]Kolay\n[2]Orta\n[3]Zor\nSseciminiz:");
        scanf("%d",&secim);
        printf("\n");

            if(secim==1)
         {
            k=0;
              for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    matris2[i][j]='X';
                    matris[i][j]=rand()%2;
                    if(matris[i][j]==1)
                    {
                        k++;
                    }
                    if(k>10)
                    {
                        matris[i][j]=0;
                    }
                }
            }
            while(1)
            {
            for (i=0; i<10; i++)
            {
                for (j=0; j<10; j++)
                {
                    printf(" %c |",matris2[i][j]);
                }
                printf("\n");
            }
            printf("satır giriniz");
            scanf("%d",&satir);
            printf("sutun giriniz");
            scanf("%d",&sutun);

            if(matris[satir][sutun]==1)
            {
                for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                        if(matris[i][j]==1)
                        {
                           matris2[i][j]='1';
                        }
                    }
                }
                break;

            }
            else
            {
                matris2[satir][sutun]='0';
            }
            }
            printf("BOMBA\a\a\n");

             for (i=0; i<10; i++)
            {
                for (j=0; j<10; j++)
                {
                    printf(" %c |",matris2[i][j]);
                }
                printf("\n");
            }

         }
         else if(secim==2)
         {
            k=0;
              for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    matris2[i][j]='X';
                    matris[i][j]=rand()%2;
                    if(matris[i][j]==1)
                    {
                        k++;
                    }
                    if(k>25)
                    {
                        matris[i][j]=0;

                    }
                }

            }
            while(1)
            {
            for (i=0; i<10; i++)
            {
                for (j=0; j<10; j++)
                {
                    printf(" %c |",matris2[i][j]);
                }
                printf("\n");
            }
            printf("satır giriniz");
            scanf("%d",&satir);
            printf("sutun giriniz");
            scanf("%d",&sutun);

            if(matris[satir][sutun]==1)
            {
                for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                        if(matris[i][j]==1)
                        {
                           matris2[i][j]='1';
                        }
                    }
                }
                break;

            }
            else
            {
                matris2[satir][sutun]='0';
            }
            }
            printf("BOMBA\a\a\n");

             for (i=0; i<10; i++)
            {
                for (j=0; j<10; j++)
                {
                    printf(" %c |",matris2[i][j]);
                }
                printf("\n");
            }


     }
     else if(secim==3)
     {
        k=0;
          for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                matris2[i][j]='X';
                matris[i][j]=rand()%2;
                if(matris[i][j]==1)
                {
                    k++;
                }
                if(k>40)
                {
                    matris[i][j]=0;

                }
            }

        }
        while(1)
            {
            for (i=0; i<10; i++)
            {
                for (j=0; j<10; j++)
                {
                    printf(" %c |",matris2[i][j]);
                }
                printf("\n");
            }
            printf("satır giriniz");
            scanf("%d",&satir);
            printf("sutun giriniz");
            scanf("%d",&sutun);

            if(matris[satir][sutun]==1)
            {
                for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                        if(matris[i][j]==1)
                        {
                           matris2[i][j]='1';
                        }
                    }
                }
                break;

            }
            else
            {
                matris2[satir][sutun]='0';
            }
            }
            printf("BOMBA \a\a\n");

             for (i=0; i<10; i++)
            {
                for (j=0; j<10; j++)
                {
                    printf(" %c |",matris2[i][j]);
                }
                printf("\n");
            }



     }
     else
     {
        printf("böyle bir zorluk derecesi yoktur kendini fazla zorlama bebegim\n");
     }
     break;
     }
     case '2':
      exit(0);
     break;
     }
    }
}
