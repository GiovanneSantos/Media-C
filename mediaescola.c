#include <stdio.h>
// Algoritimo para calculo media escolar

int main(){

// declaracao de variaveis

double m;
int bimestres, exame,j, nexames;
float notas, e, me, sm =0, se =0;
float nf;
double mt;
int i;

// entrada de dados

printf("Digite a quantidade de bimestre: \n");
scanf("%d", &bimestres);

// laco para somatorio de valores

for (i = 0; i <bimestres; i++){

    printf("Digite o valor da nota bimestral: \n");
    scanf("%f", &notas);

// restricao a uso de valores negativos

        while (notas <0 || notas >100){
        printf("Valor invalido, digite novamente: \n", i+1);
        scanf("%f", &notas);
}

// solucao matematica utilizando um omatorio dos valores da repeticao, valores acumulados

    sm = sm+notas;


}

// medica aritmetica dos valores das notas

m =((sm)/(double)bimestres);

// definido intervalos das variares exames e aprovacao

// estrutura de decisao

    if (m>=70){
        printf("Paraben voce foi aprovado, sua media foi: %.2f\n", m);
}   else {
        printf("Voce esta de exame\n");

// em caso de exame, calculo da media nova para tentativa de aprovacao

            if(m<70){
                printf("Digite a quantidade de exames \n");
                scanf("%d", &nexames);

for (j =0; j <nexames; j++){

    printf("Digite o valor do exame: \n");
    scanf("%f", &e);

    while (e <0 || e >100){
    printf("Valor invalido, digite novamente: \n", j+1);
    scanf("%f", &e);
}

    se = se+e;


}
// calculo para media total final

me = ((se)/(double)nexames);

nf = me+m;

mt = nf/(double)2;


// decisao de aprovacao ou reprovacao

            } if (mt>=50){
                printf("Parabens voce foi aprovado! sua media foi %.2f\n", mt);
            } else{
                printf("Reprovado sua media foi %.2f\n",mt);
            }

}
}

