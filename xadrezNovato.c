#include <stdio.h>


int main() {

    printf ("\n Movimento Torre \n");
    int torre = 1;


    
    //sistema de repetição de numeros, em que cada soma de numero seria uma casa a mais movimentada
    while (torre <=5)
    {
        //Sistema de decisão somente para melhorar a nomenclatura para o plural (1 casa ou 2 casas)
        if (torre == 1)
        {
            printf ("\n Torre se moveu %d casa para Direita", torre); torre++;
        }else{
            printf ("\n Torre se moveu %d casas para Direita ", torre);
        torre++;}
        
       
    }
        printf ("\n\n Movimento Bispo \n");

        int bispo = 1;

        do
        {
            if (bispo == 1)
            {
              printf ("\n Bispo se moveu %d casa para Cima a Direita", bispo);
              bispo++;
            }else{
                printf ("\n Bispo se moveu %d casas para Cima a Direita ", bispo);
                bispo++;
            }
            
            
           
        } while (bispo <=5);


    printf ("\n\n Movimento Rainha \n");
        
    
        for (int rainha = 1; rainha <=8; rainha++)
        {
            if (rainha == 1)
            {
              printf ("\n Rainha se moveu %d casa para a Esquerda", rainha);
             
            }else{
                printf ("\n Rainha se moveu %d casas para a Esquerda", rainha);
                
            }
        }
        

        
        
    


    return 0;
}