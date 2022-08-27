int main () {

    int meta = 12000;
    float salario = 1000;
    float bonus = 0;

    switch (meta)
    {
    case 10000:
        printf("entrei caso 1\n");
        bonus = bonus + meta * 0.1;
        break;

    case 5000:
        printf("entrei caso 2\n");
        bonus = bonus + meta * 0.05;
        break;
    
    case 1000:
        printf("entrei caso 3\n");
        bonus = bonus + meta * 0.01;
        break;

    default:
        break;
    }
    
    salario = salario + bonus;
    printf("%f", salario);

    printf("\n");

    return 0;
    

}