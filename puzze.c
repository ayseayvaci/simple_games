#include <stdio.h>
#include <stdlib.h>
void yazdir(int matris[3][3]);
void degistirme(int matris[3][3]);
int oyunbittimi(int matris[3][3]);
int yerkontrol(int matris[3][3],int sayi);
int main()
{
    srand(time(NULL));
    int matris[3][3];
    int dizi[9];
    int i,j,k=0,l,sayi,degisecek;
    int secim;
    dizi[0]=rand()%9;
    for (i=1; i<8; i++)
    {
        sayi=rand()%8+1;
        for(j=0;j<i;j++)
        {
            if(dizi[j]!=sayi)
            {
                dizi[i]=sayi;
            }
            else
            {
                i--;
                break;
            }
        }
    }
    dizi[8]=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matris[i][j]=dizi[k];
            k++;
        }
    }

    yazdir(matris);
    while(1==1)
    {
        printf("[1]yeni oyun\n[2]cıkıs\nseciminiz:");
        scanf("%d",&secim);
        switch(secim)
        {
            case 1:
                while(1)
                {
                    int kontrol=oyunbittimi(matris);
                    if(kontrol==-1)
                    {
                      degistirme(matris);
                      yazdir(matris);
                    }
                    else
                    {
                        break;
                    }
                }
            break;
            case 2:
            exit(0);
            break;
        }
    }

    yazdir(matris);

}
void yazdir(int matris[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("-%d",matris[i][j]);
        }
        printf("\n");
    }

}
void degistirme(int matris[3][3])
{
    int degisecek,i,j,s1,s2,temp1,temp2,k;
     printf("degiştirmek istediginiz sayıyı giriniz");
     scanf("%d",&degisecek);
     k=yerkontrol(matris,degisecek);
     if(k==1)
     {
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            if(matris[i][j]==degisecek)
            {
                s1=i;
                s2=j;


            }
            else if(matris[i][j]==0)
            {
                temp1=i;
                temp2=j;

            }
        }

     }

     matris[temp1][temp2]=degisecek;
        matris[s1][s2]=0;
        }
        else
        {
            printf("bu sayi oynamaz yeniden basaka sayi gir\n");
        }

}
int oyunbittimi(int matris[3][3])
{
    int i,j,sayac=1;
    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            if(matris[i][j]!=sayac)
            {
                return -1;
            }
            sayac++;
        }
    }
    return 1;
}
int  yerkontrol(int matris[3][3],int sayi)
{
   int  i,j;
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        if(matris[i][j]==sayi)
        {
            if(matris[i][j+1]==0||matris[i][j-1]==0||matris[i+1][j]==0||matris[i-1][j]==0)
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
        }
    }
   }
}
