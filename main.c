#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float pesototalg (float gramas, int quant){
     int pesototal;
     pesototal = quant*gramas;
     return pesototal;}
float pesototalq (float gramas, int quant){
    return (gramas*quant)/1000;}
float produto (int quant, float precouni){
    int PC;
    PC=quant*precouni;
    return PC;}
int main()
{
    int cod, quant;
    float precouni, gramas, pesototal, PC;

    setlocale(LC_ALL, "portuguese");
    printf("\t\t\t\tGIOVANA R.C");
    printf("\nDIGITE O CÓDIGO DO PRODUTO:");
    scanf("%d", &cod);
    while(cod!=0){
     printf("\nDIGITE A QUANTIDADE DE PRODUTOS:"); scanf("%d", &quant);
     printf("\nDIGITE O PREÇO UNITARIO DESSE PRODUTO:"); scanf("%f", &precouni);
     printf("\nDIGITE AS GRAMAS DO PRODUTO:"); scanf("%f", &gramas);
     pesototal=pesototalg(gramas, quant);
     PC=produto(quant, precouni);

      printf("\nCÓDIGO DO PRODUTO=%d", cod);
      printf("\tPESO TOTAL DO PRODUTO EM GRAMAS:%.2f", pesototal);
      printf("\t\tPESO TOTAL EM KG=%.2f", pesototalq(gramas, quant));
      printf("\tPREÇO TOTAL DO PRODUTO:%.2f", PC);

       printf("\n\nDIGITE O CÓDIGO DO PRODUTO:");
    scanf("%d", &cod);}


     printf("\n\nFIM DE PROGRAMA");
    return 0;
};

