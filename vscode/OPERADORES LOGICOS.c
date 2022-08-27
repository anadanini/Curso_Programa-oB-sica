int main () {

// e ou não

// && =  operador e

printf(" Verdadeiro e Verdadeiro: %d\n", 1 && 1 );

printf(" Verdadeiro e falso: %d\n", 1 && 0 );

printf(" falso e Verdadeiro: %d\n", 0 && 1 );

printf(" falso e falso: %d\n", 0 && 0 );

printf(" teste1 : %d\n", 10 > 5  && 3 != 3 );


// || = operador ou

printf(" Verdadeiro e Verdadeiro: %d\n", 1 || 1 );

printf(" Verdadeiro e falso: %d\n", 1 || 0 );

printf(" falso e Verdadeiro: %d\n", 0 || 1 );

printf(" falso e falso: %d\n", 0 || 0 );

printf(" teste2 : %d\n", 10 > 5  || 3 != 3 );


// ! = operador NÃO

printf(" negar o verdadeiro: %d\n", !1);
printf(" negar o falso: %d\n", !0);
printf("\n");








    return 0;
}