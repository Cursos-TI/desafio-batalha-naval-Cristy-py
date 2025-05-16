#include    <stdio.h>

#define linhas 11 // INDICE LINHAS   
#define agua 10 // INDICE COLUNAS

int main () {


// INICIO LOOP ALFABETICO E NUMERICO
char letras = 'A';



                printf("    BATALHA NAVAL\t\n");  // TITULO



        for (letras = 'A'; letras <='J' ; letras++) // FOR DAS LETRAS 

            {    
          
    printf(" %1.c",letras);  //EXIBIR CABEÇALHO    
    
            }//FIM FOR LETRAS 

 printf("  \n"); // QUEBRA DE LINHAS 


// INICIO LOOP DE ZEROS  


    int matriz [11][11]= {{0,0,0}, {0,0,0}, {0,0,0}};
    matriz [2][5] = 5;        // INSERINDO NAVIO VERTICAL 
    matriz [2][6] = 5;       // INSERINDO NAVIO VERTICAL 
    matriz [2][4] = 5;      // INSERINDO NAVIO VERTICAL 

    matriz [6][2] = 5;        // INSERINDO NAVIO HORISONTAL
    matriz [7][2] = 5;       // INSERINDO NAVIO HORISONTAL
    matriz [8][2] = 5;      // INSERINDO NAVIO HORISONTAL
    matriz [9][2] = 5;     // INSERINDO NAVIO HORISONTAL



     matriz [1][0]=3;        // NAVIO NA DIAGONAL PRIMARIA  
     matriz [2][1]=3;       // NAVIO NA DIAGONAL PRIMARIA
     matriz [3][2]=3;      // NAVIO NA DIAGONAL PRIMARIA

     matriz [8][7]=3;        // NAVIO NA DIAGONAL SECUNDARIA 
     matriz [9][8]=3;       // NAVIO NA DIAGONAL SECUNDARIA
     matriz [10][9]=3;     // NAVIO NA DIAGONAL SECUNDARIA 


    










// INICIO FOR LINHAS 

    for (int i = 1; i < linhas; i++) {      
    {
        printf("%d ", i); 


    }   //  LINHAS PARA IMPRESSÃO

    

        for (int j = 0; j < agua; j++){
                       
                                
            // QUANTIDADE DE ZEROS
                     
             
               
            printf("%d ", matriz [i][j]);   

           
                          
        }
        
            printf("\n"); 
                        // QUEBRA DE LINHA
}                                          // FIM LOOP ZEROS




    
 
    

 return 0;
}


