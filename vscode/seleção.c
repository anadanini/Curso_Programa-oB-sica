int main () {

    int meta = 12000;
    float salario = 1000;
    float bonus = 0;

    if (meta >= 10000){
        bonus = bonus + meta*0.01;
    }

    if (meta >= 5000){
        bonus = bonus + meta*0.05;
    }

    if (meta >= 1000){
        bonus = bonus + meta *0.01;
    }
    
    salario = salario + bonus;
    
    printf("%f", salario);
    printf("\n");

    return 0;   
    



}