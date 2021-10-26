#include <stdio.h>
// Algorithm for calculating school average

int main(){

// variables
double m;
int tests, exam,j, retake;
float grades, re, me, sm =0, se =0;
float nf;
double mt;
int i;

// data input

printf("type number of tests: \n");
scanf("%d", &tests);

// loop

for (i = 0; i <tests; i++){

    printf("type the grades: \n");
    scanf("%f", &grades);

// role of values, no allowed grades <0 or >100

        while (grades <0 || grades >100){
        printf("invalid value, type again: \n", i+1);
        scanf("%f", &grades);
}

// summation

    sm = sm+grades;


}

// arithmetic average

m =((sm)/(double)tests);

// decision structure

    if (m>=70){
        printf("Congratulations you were approved, your average was: %.2f\n", m);
}   else {
        printf("You need do retake test\n");

            if(m<70){
                printf("Type number of ratake tests \n");
                scanf("%d", &retake);

for (j =0; j <retake; j++){

    printf("type the retake grades: \n");
    scanf("%f", &re);

    while (re <0 || re >100){
    printf("invalid value, type again: \n", j+1);
    scanf("%f", &re);
}

    se = se+re;


}
// calculation for final average

me = ((se)/(double)retake);

nf = me+m;

mt = nf/(double)2;


// decisao de aprovacao ou reprovacao

            } if (mt>=50){
                printf("Congratulations you were approved, your average was: %.2f\n", mt);
            } else{
                printf("Sorry you were disapproved, your average was: %.2f\n",mt);
            }

}
}

