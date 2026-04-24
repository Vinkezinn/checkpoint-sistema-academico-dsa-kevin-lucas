#include <stdio.h>

int main() {

    int opcao = 0;
    float nota1 = 0, nota2 = 0, media = 0;
    float a = 0, b = 0, c = 0;


    do {
        printf("\n==============================\n");
        printf("      SISTEMA EQUIPE L&K      \n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
                printf("Notas salvas com sucesso!\n");
                break;

            case 2:
                media = (nota1 + nota2) / 2;
                printf("Media calculada: %.2f\n", media);
                break;

            case 3:
                if (media >= 6) {
                    printf("Situacao: APROVADO\n");
                } else {
                    printf("Situacao: REPROVADO\n");
                }
                break;

            case 4:
                printf("\nRESULTADOS\n");
                printf("Notas: %.2f e %.2f | Media: %.2f\n", nota1, nota2, media);
                break;

            case 5:
                printf("\nDerivada de f(x) = ax^2 + bx + c\n");
                printf("Digite a: "); scanf("%f", &a);
                printf("Digite b: "); scanf("%f", &b);
                printf("Digite c: "); scanf("%f", &c);
                printf("Derivada: f'(x) = %.1fx + %.1f\n", (2 * a), b);
                break;
                
            case 6:
                printf("Saindo\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 6);

    return 0;
}