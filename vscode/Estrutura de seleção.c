int main () {

    // exemplo 1:  (SI = if) (se não = else) (else if = um caminho ou outro)
    
    
    // APROVADO
    float nota1 = 6.1;
    if( nota1 >= 6.0 ){
        printf("aprovado");         
    } 
    else {
        printf("reprovado");
    }
     printf("\n");

     // REPROVADO

    float nota2 = 5.9;
    if( nota2 >= 6.0 ){
        printf("aprovado");         
    } 
    else {
        printf("reprovado");
    }
    printf("\n");

    // RECUPERAÇÃO
    
    float nota3 = 5.1;

    if( nota3 >= 6.0 ){
        printf("aprovado");         
    } 
    else if (5.0 <= nota3 <= 5.9) {
        printf("recuperacao");
    }
    else {
        printf("reprovado");
    }
    printf("\n");

    // 2 exemplo

    int valor = 1;
    if(valor > 1){
        printf("Opcao 1");         
    } 
    else if (valor > 2){
        printf("Opcao 2");
    }
    else if (valor > 3){
        printf("Opcao 3");
    }
    else {
        printf("Opcao 4");
    }    
    printf("\n");
  
    return 0; 
}