#include <stdio.h>

int main(){

int szam;
int pozitiv=0;
int negativ=0;
do{
    printf("Adjon meg egy egész számot (vege:0): ");
    scanf("%d",&szam);
    if(szam>0){
        pozitiv++;
    }
    else if(szam<0){
        negativ++;
    }

}while(szam!=0);
printf("\n");
printf("A pozitiv elemek száma: %d\n",pozitiv);
printf("A negativ elemek száma: %d\n",negativ);
return 0;

}