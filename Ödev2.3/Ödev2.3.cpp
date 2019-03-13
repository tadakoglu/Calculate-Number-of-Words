#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
char dizi[1000], p;
int i, sayac=1;
printf("Cumleyi alalim: ");
gets(dizi);
for (i=0; dizi[i]!='\0'; i++)
{

if(dizi[i]==' ')
{
sayac++;
}

}


printf("%d tane sozcuk bulunuyor\n\n",sayac);
getchar();
return 0;
}