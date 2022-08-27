int main () {

    int nota1;
    int nota2;
    float media;
    
    printf("primeira nota:");
    scanf("%d", &nota1);
    printf("segunda nota:");
    scanf("%d", &nota2);
    
    media= (nota1 + nota2) / 2;

    printf("A media foi de: %f", media);

return 0;
}
