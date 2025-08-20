#include <stdio.h>
int main(){
    
int matriz[10][6];//10 alunos terão suas notas estipuladas em 6 colunas que representam as disciplinas.
float notas[10][1];//media(coluna) de 10 alunos(linhas). 


//vasculha media
for(int l=0; l<1;l++){
    for(int c=0;c<10;c++){

for(int i=0; i<6;i++){

    for(int j=0;j<10;j++){
        
    matriz[j][i]= (i + j) * 10;
    printf("j=%d \n i=%d \n", j,i);
             printf("valor %d \n", matriz[j][i]);
    } //laço for para linhas(j) que possui um outro laço for(i) para colunos onde aplica valores fictícios para cada aluno
    
    for(int j=0; j<10; j++){
        float soma=0;
        for(int i=0;i<6;i++){
            soma=soma + matriz[j][i];
            if(i==5){  
                //condição para somar as notas e fazer a média, atribuindo à matriz notas nas posições corretas.
                float res=soma/6;
                notas[l][c]=res;
                printf("%f\n",res);       
            }
        }
    }
}
    }
}

return 0;
}