#include <stdio.h>

void torre (int casas) {
    if (casas > 0) {
        printf ("Direita\n");
        torre(casas - 1);
    }
}

void bispo (int casas) {
    if (casas > 0) {
        for (int i = 5; i > 0 ; i--) { // movimento vertical
            printf ("Cima,");
            for (int j = 1; j > 0; j--) { // movimento horizontal
                printf (" Direita");
                printf ("\n");
            }    
        }
        bispo(casas - 1);
    }
}

void rainha (int casas) {
    if (casas > 0) {
        printf ("Esquerda\n");
        rainha(casas - 1);
    }
}

void cavalo() {
    int movimentos = 1; // Numero de movimentos em L
    for (int i = 0; i < movimentos; i++){
        for (int j = 0; j < 3; j++){
            if (j == 0 || j == 1){
                printf ("Cima\n"); // Duas casas pra cima  
                continue;
            }
            if (j == 2){
                printf ("Direita\n"); // Uma casa pra direita 
                break;
            }
        }
    }


}


int main (){

    int escolha;   

    //Inicio do jogo  
    printf ("Bem vindo ao jogo de xadrez!\n");
    printf ("Escolha qual peca deseja mover\n");
    printf ("1. Torre\n");
    printf ("2. Bispo\n");
    printf ("3. Rainha\n");
    printf ("4. Cavalo\n");
    printf ("Escolha: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
    case 1:  
        printf ("Voce escolheu mover a Torre\n");

        torre(5);
        break;
    case 2:
        printf ("Voce escolheu mover o Bispo\n");
    
        bispo(1);
        break;
    case 3:
        printf ("Voce escolheu mover a Rainha\n");

        rainha(8);
        break;
    case 4:
        printf ("Voce escolheu mover o Cavalo\n");

        cavalo();
        break;
    default:
        printf ("### *Opcao invalida* ###");
        break;
    }

    return 0;

}