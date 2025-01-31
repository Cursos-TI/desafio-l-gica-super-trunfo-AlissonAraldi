//     // Comparação de Cartas:
//     // Desenvolva a lógica de comparação entre duas cartas.
//     // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

//     // Exemplo:
//     // if (populacaoA > populacaoB) {
//     //     printf("Cidade 1 tem maior população.\n");
//     // } else {
//     //     printf("Cidade 2 tem maior população.\n");
//     // }

//     // Exibição dos Resultados:
//     // Após realizar as comparações, exiba os resultados para o usuário.
//     // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

//     // Exemplo:
//     // printf("A cidade vencedora é: %s\n", cidadeVencedora);

//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char pais1[30], Aestado[30], A1cidade[30], A2cidade[30], A3cidade[30], A4cidade[30], Bestado[30], B1cidade[30], B2cidade[30], B3cidade[30], B4cidade[30];
    int A1turist, A2turist, A3turist, A4turist, B1turist, B2turist, B3turist, B4turist;
    int decisao, decisao2, cadastro, Mcarta, Jcarta, jogador, maquina;
    long int A1popul, A1area, A2popul, A2area, A3popul, A3area, A4popul, A4area, B1popul, B1area, B2popul, B2area, B3popul, B3area, B4popul, B4area;
    float A1pib, A1dens, A1pcap, A2pib, A2dens, A2pcap, A3pib, A3dens, A3pcap, A4pib, A4dens, A4pcap, B1pib, B1dens, B1pcap, B2pib, B2dens, B2pcap, B3pib, B3dens, B3pcap, B4pib, B4dens, B4pcap;
    float A1sup, A2sup, A3sup, A4sup, B1sup, B2sup, B3sup, B4sup;

    cadastro = 1;
    srand(time(0));
    Mcarta = rand() % 4 + 1;
    //Mcarta = 1;
    Jcarta = 0;
    jogador = 0;
    maquina = 0;
    decisao = 0;
    decisao2 = 0;

    // Cadastro
    strcpy(pais1, "Brasil");
    //Estado
    strcpy(Aestado, "Goias");
    // Carta1
    strcpy(A1cidade, "Goiania");
    A1popul = 1494599; 
    A1area = 739;
    A1pib = 34000.0;
    A1turist = 10; 
    A1dens = (float) A1popul / A1area;
    A1pcap = (float) A1pib / A1popul;
    // Carta2
    strcpy(A2cidade, "Aparecida");
    A2popul = 550925;
    A2area = 290;
    A2pib = 22000.0;
    A2turist = 5; 
    A2dens = (float) A2popul / A2area;
    A2pcap = (float) A2pib / A2popul;
    // Carta3
    strcpy(A3cidade, "Anapolis");
    A3popul = 415847;
    A3area = 918;
    A3pib = 45000.0;
    A3turist = 8;
    A3dens = (float) A3popul / A3area;
    A3pcap = (float) A3pib / A3popul;
    // Carta4
    strcpy(A4cidade, "Rio_Verde");
    A4popul = 238025;
    A4area = 8379;
    A4pib = 65900.0;
    A4turist = 6;
    A4dens = (float) A4popul / A4area;
    A4pcap = (float) A4pib / A4popul;

    // Estado
    strcpy(Bestado, "Tocantins");
    // Carta1
    strcpy(B1cidade, "Palmas");
    B1popul = 313349;
    B1area = 2218;
    B1pib = 21500.0;
    B1turist = 12; 
    B1dens = (float) B1popul / B1area;
    B1pcap = (float) B1pib / B1popul;
    // Carta2
    strcpy(B2cidade, "Araguaina");
    B2popul = 183381;
    B2area = 4000;
    B2pib = 18000.0;
    B2turist = 6; 
    B2dens = (float) B2popul / B2area;
    B2pcap = (float) B2pib / B2popul;
    // Carta3
    strcpy(B3cidade, "Gurupi");
    B3popul = 89074;
    B3area = 1836;
    B3pib = 16500.0;
    B3turist = 5; 
    B3dens = (float) B3popul / B3area;
    B3pcap = (float) B3pib / B3popul;
    // Carta4
    strcpy(B4cidade, "Porto_Nacional");
    B4popul = 53772;
    B4area = 4200;
    B4pib = 15200.0;
    B4turist = 4; 
    B4dens = (float) B4popul / B4area;
    B4pcap = (float) B4pib / B4popul;
 
    //limpando a tela
    system("clear");

    //Inicio
    printf("#####Bem vindo ao jogo de Super Trunfo!#####\n\n");
    printf("\t\tMENU\n");
    printf("1. Cadastrar as Cartas\n");
    printf("2. Usar Cartas Ja Cadastrada\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &decisao);
    
    //limpando a tela
    system("clear");

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    if (decisao == 1){
        printf("*************************\n");
        printf("Vamos Começar o Cadastro!\n");
        printf("*************************\n");
    
    //Cadastro Base 1
        printf("Informe o o nome do pais que deseja cadastrar:\n");
        scanf("%29s", pais1);
        printf("Informe o estado qe deseja cadastrar:\n");
        scanf("%29s", Aestado);
        

    //limpando a tela
        system("clear");

        printf("*******************************\n");
        printf("Vamos cadastrar as suas Cartas!\n");
        printf("*******************************\n");


        printf("O Nome do Pais e %s e o Estado %s \n\n", pais1, Aestado);
        
        //Carta1
        printf("\nCARTA A1\n");
        printf("Informe o nome da Cidade:\n");
        scanf("%29s", A1cidade);
        printf("informe o total de população de %s:\n ", A1cidade);
        scanf("%ld", &A1popul);
        printf("informe a Area total de %s:\n ", A1cidade);
        scanf("%ld", &A1area);
        printf("informe o total do PIB de %s:\n ", A1cidade);
        scanf("%f", &A1pib);
        printf("informe o total de pontos turisticos de %s:\n ", A1cidade);
        scanf("%d", &A1turist);
        //Cauculos
        A1dens = (float) A1popul / A1area;
        A1pcap = (float) A1pib / A1popul; 
        
        //limpando a tela
        system("clear");
        
        //Apresentação
        printf("\nCarta A1 Cadastrada!\n");
        printf("PAIS: %s - %s\n", pais1, Aestado);
        printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f \tPontos T.: %d \tDensidade: %.2f \tPer Capta: %.2f\n\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    
        //Carta2
        printf("\nCARTA A2\n");
        printf("Informe o nome da Cidade:\n");
        scanf("%29s", A2cidade);
        printf("informe o total de população de %s:\n ", A2cidade);
        scanf("%ld", &A2popul);
        printf("informe a Area total de %s:\n ", A2cidade);
        scanf("%ld", &A2area);
        printf("informe o total do PIB de %s:\n ", A2cidade);
        scanf("%f", &A2pib);
        printf("informe o total de pontos turisticos de %s:\n ", A2cidade);
        scanf("%d", &A2turist);
        //Cauculos
        A2dens = (float) A2popul / A2area;
        A2pcap = (float) A2pib / A2popul; 

        //limpando a tela
        system("clear");
        
        //Apresentação
        printf("\nCarta A2 Cadastrada!\n");
        printf("PAIS: %s - %s\n", pais1, Aestado);
        printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
        printf("Carta A2 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
        
        // Carta 3
        printf("\nCARTA A3\n");
        printf("Informe o nome da Cidade:\n");
        scanf("%29s", A3cidade);
        printf("Informe o total de população de %s:\n", A3cidade);
        scanf("%ld", &A3popul);
        printf("Informe a Área total de %s:\n", A3cidade);
        scanf("%ld", &A3area);
        printf("Informe o total do PIB de %s:\n", A3cidade);
        scanf("%f", &A3pib);
        printf("Informe o total de pontos turísticos de %s:\n", A3cidade);
        scanf("%d", &A3turist);
        // Cálculos
        A3dens = (float)A3popul / A3area;
        A3pcap = (float)A3pib / A3popul;

        //limpando a tela
        system("clear");
        
        // Apresentação
        printf("\nCarta A3 Cadastrada!\n");
        printf("PAIS: %s - %s\n", pais1, Aestado);
        printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
        printf("Carta A2 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap); 
        printf("Carta A3 - Cidade: %s \tPopulação: %ld \tÁrea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);

        // Carta 4
        printf("\nCARTA A4\n");
        printf("Informe o nome da Cidade:\n");
        scanf("%29s", A4cidade);
        printf("Informe o total de população de %s:\n", A4cidade);
        scanf("%ld", &A4popul);
        printf("Informe a Área total de %s:\n", A4cidade);
        scanf("%ld", &A4area);
        printf("Informe o total do PIB de %s:\n", A4cidade);
        scanf("%f", &A4pib);
        printf("Informe o total de pontos turísticos de %s:\n", A4cidade);
        scanf("%d", &A4turist);
        // Cálculos
        A4dens = (float)A4popul / A4area;
        A4pcap = (float)A4pib / A4popul;
    
        //limpando a tela
        system("clear");
        
        // Apresentação
        printf("\nCarta A4 Cadastrada!\n");
        printf("PAIS: %s - %s\n", pais1, Aestado);
        printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
        printf("Carta A2 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap); 
        printf("Carta A3 - Cidade: %s \tPopulação: %ld \tÁrea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);
        printf("Carta A4 - Cidade: %s \tPopulação: %ld \tÁrea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A4cidade, A4popul, A4area, A4pib, A4turist, A4dens, A4pcap);

        cadastro ++;        
        
        // Pause
        getchar();
        printf("Pressione Enter para continuar...");
        getchar();

        //printf("%d", cadastro);

    }else if (decisao != 2){
        printf("Opção Invalida, Comece novamente!!!!\n\n");
    }else {
    
    //limpando a tela
    system("clear");

    //Inicio
    printf("#####Bem vindo ao jogo de Super Trunfo!#####\n\n");
    printf("    MENU\n");
    printf("1. Jogar Vale Tudo\n");
    printf("2. Jogar 2x2\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &decisao2);

    if(decisao2 == 1){ 
        //Jogar 
        
        //limpando a tela
        system("clear");

        printf("********VAMOS JOGAR********\n");
        printf("***Apresento a sua Carta***\n\n");
        printf("PAÍS: %s - %s\n", pais1, Aestado);
        printf("1. Carta A1 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
        printf("2. Carta A2 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
        printf("3. Carta A3 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);
        printf("4. Carta A4 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A4cidade, A4popul, A4area, A4pib, A4turist, A4dens, A4pcap);

    // printf("\nPAÍS: %s - %s\n", pais1, Bestado);
        // printf("Carta B1 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B1cidade, B1popul, B1area, B1pib, B1turist, B1dens, B1pcap);
        // printf("Carta B2 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B2cidade, B2popul, B2area, B2pib, B2turist, B2dens, B2pcap);
        // printf("Carta B3 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B3cidade, B3popul, B3area, B3pib, B3turist, B3dens, B3pcap);
        // printf("Carta B4 - Cidade: %s \tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B4cidade, B4popul, B4area, B4pib, B4turist, B4dens, B4pcap);
        
        printf("\nEscolha a sua Carta: ");
        scanf("%d", &Jcarta);
    
        if (Jcarta > 0 && Jcarta < 5)
        {
            switch (Jcarta)
            {
    //#############################################################################################################################################################################
            case 1:
                switch (Mcarta)
                {
    //#############################################################################################################################################################################         
                case 1:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B1 - %s\n", A1cidade, B1cidade);

                    //Populacao
                    if (A1popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B1 - Derrota ", A1popul, B1popul);
                        jogador ++;
                    } else if (A1popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B1 - Vitoria ", A1popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B1 - Empate ", A1popul, B1popul);
                    }

                    //area
                    if (A1area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B1 - Derrota", A1area, B1area);
                        jogador ++;
                    } else if (A1area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B1 - Empate", A1area, B1area);
                    }
                    //PIB
                    if (A1pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B1 - Derrota", A1pib, B1pib);
                        jogador ++;
                    } else if (A1pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B1 - Empate", A1pib, B1pib);
                    }

                    //Pontos Tur
                    if (A1turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B1 - Derrota", A1turist, B1turist);
                        jogador ++;
                    } else if (A1turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B1 - Empate", A1turist, B1turist);
                    }

                    //Dens Popul
                    if (A1dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B1 - Derrota", A1dens, B1dens);
                        jogador ++;
                    } else if (A1dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B1 - Empate ", A1dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B1 - Derrota", A1pcap, B1pcap);
                        jogador ++;
                    } else if (A1pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B1 - Empate", A1pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B1 - Derrota \n", A1sup, B1sup);
                        jogador ++;
                    } else if (A1sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B1 - Vitoria \n", A1sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B1 - Empate \n", A1sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B2 - %s\n", A1cidade, B2cidade);

                    //Populacao
                    if (A1popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B2 - Derrota ", A1popul, B2popul);
                        jogador ++;
                    } else if (A1popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B2 - Vitoria ", A1popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B2 - Empate ", A1popul, B2popul);
                    }

                    //area
                    if (A1area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B2 - Derrota", A1area, B2area);
                        jogador ++;
                    } else if (A1area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B2 - Empate", A1area, B2area);
                    }

                    //PIB
                    if (A1pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B2 - Derrota", A1pib, B2pib);
                        jogador ++;
                    } else if (A1pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B2 - Empate", A1pib, B2pib);
                    }

                    //Pontos Tur
                    if (A1turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B2 - Derrota", A1turist, B2turist);
                        jogador ++;
                    } else if (A1turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B2 - Empate", A1turist, B2turist);
                    }

                    //Dens Popul
                    if (A1dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B2 - Derrota", A1dens, B2dens);
                        jogador ++;
                    } else if (A1dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B2 - Empate ", A1dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B2 - Derrota", A1pcap, B2pcap);
                        jogador ++;
                    } else if (A1pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B2 - Empate", A1pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B2 - Derrota \n", A1sup, B2sup);
                        jogador ++;
                    } else if (A1sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B2 - Vitoria \n", A1sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B2 - Empate \n", A1sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B3 - %s\n", A1cidade, B3cidade);

                    //Populacao
                    if (A1popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B3 - Derrota ", A1popul, B3popul);
                        jogador ++;
                    } else if (A1popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B3 - Vitoria ", A1popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B3 - Empate ", A1popul, B3popul);
                    }

                    //area
                    if (A1area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B3 - Derrota", A1area, B3area);
                        jogador ++;
                    } else if (A1area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B3 - Empate", A1area, B3area);
                    }

                    //PIB
                    if (A1pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B3 - Derrota", A1pib, B3pib);
                        jogador ++;
                    } else if (A1pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B3 - Empate", A1pib, B3pib);
                    }

                    //Pontos Tur
                    if (A1turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B3 - Derrota", A1turist, B3turist);
                        jogador ++;
                    } else if (A1turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B3 - Empate", A1turist, B3turist);
                    }

                    //Dens Popul
                    if (A1dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B3 - Derrota", A1dens, B3dens);
                        jogador ++;
                    } else if (A1dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B3 - Empate ", A1dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B3 - Derrota", A1pcap, B3pcap);
                        jogador ++;
                    } else if (A1pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B3 - Empate", A1pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B3 - Derrota \n", A1sup, B3sup);
                        jogador ++;
                    } else if (A1sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B3 - Vitoria \n", A1sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B3 - Empate \n", A1sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B4 - %s\n", A1cidade, B4cidade);

                    //Populacao
                    if (A1popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B4 - Derrota ", A1popul, B4popul);
                        jogador ++;
                    } else if (A1popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B4 - Vitoria ", A1popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B4 - Empate ", A1popul, B4popul);
                    }

                    //area
                    if (A1area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B4 - Derrota", A1area, B4area);
                        jogador ++;
                    } else if (A1area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B4 - Empate", A1area, B4area);
                    }

                    //PIB
                    if (A1pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B4 - Derrota", A1pib, B4pib);
                        jogador ++;
                    } else if (A1pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B4 - Empate", A1pib, B4pib);
                    }

                    //Pontos Tur
                    if (A1turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B4 - Derrota", A1turist, B4turist);
                        jogador ++;
                    } else if (A1turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B4 - Empate", A1turist, B4turist);
                    }

                    //Dens Popul
                    if (A1dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B4 - Derrota", A1dens, B4dens);
                        jogador ++;
                    } else if (A1dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B4 - Empate ", A1dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B4 - Derrota", A1pcap, B4pcap);
                        jogador ++;
                    } else if (A1pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B4 - Empate", A1pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B4 - Derrota \n", A1sup, B4sup);
                        jogador ++;
                    } else if (A1sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B4 - Vitoria \n", A1sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B4 - Empate \n", A1sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    }
            break;
    //#############################################################################################################################################################################       
            case 2:
                switch (Mcarta)
                {
    //############################################################################################################################################################################# 
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B1 - %s\n", A2cidade, B1cidade);

                    //Populacao
                    if (A2popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B1 - Derrota ", A2popul, B1popul);
                        jogador ++;
                    } else if (A2popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B1 - Vitoria ", A2popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B1 - Empate ", A2popul, B1popul);
                    }

                    //area
                    if (A2area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B1 - Derrota", A2area, B1area);
                        jogador ++;
                    } else if (A2area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B1 - Empate", A2area, B1area);
                    }

                    //PIB
                    if (A2pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B1 - Derrota", A2pib, B1pib);
                        jogador ++;
                    } else if (A2pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B1 - Empate", A2pib, B1pib);
                    }

                    //Pontos Tur
                    if (A2turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B1 - Derrota", A2turist, B1turist);
                        jogador ++;
                    } else if (A2turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B1 - Empate", A2turist, B1turist);
                    }

                    //Dens Popul
                    if (A2dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B1 - Derrota", A2dens, B1dens);
                        jogador ++;
                    } else if (A2dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B1 - Empate ", A2dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B1 - Derrota", A2pcap, B1pcap);
                        jogador ++;
                    } else if (A2pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B1 - Empate", A2pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B1 - Derrota \n", A2sup, B1sup);
                        jogador ++;
                    } else if (A2sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B1 - Vitoria \n", A2sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B1 - Empate \n", A2sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B2 - %s\n", A2cidade, B2cidade);

                    //Populacao
                    if (A2popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B2 - Derrota ", A2popul, B2popul);
                        jogador ++;
                    } else if (A2popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B2 - Vitoria ", A2popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B2 - Empate ", A2popul, B2popul);
                    }

                    //area
                    if (A2area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B2 - Derrota", A2area, B2area);
                        jogador ++;
                    } else if (A2area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B2 - Empate", A2area, B2area);
                    }

                    //PIB
                    if (A2pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B2 - Derrota", A2pib, B2pib);
                        jogador ++;
                    } else if (A2pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B2 - Empate", A2pib, B2pib);
                    }

                    //Pontos Tur
                    if (A2turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B2 - Derrota", A2turist, B2turist);
                        jogador ++;
                    } else if (A2turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B2 - Empate", A2turist, B2turist);
                    }

                    //Dens Popul
                    if (A2dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B2 - Derrota", A2dens, B2dens);
                        jogador ++;
                    } else if (A2dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B2 - Empate ", A2dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B2 - Derrota", A2pcap, B2pcap);
                        jogador ++;
                    } else if (A2pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B2 - Empate", A2pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B2 - Derrota \n", A2sup, B2sup);
                        jogador ++;
                    } else if (A2sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B2 - Vitoria \n", A2sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B2 - Empate \n", A2sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################       

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B3 - %s\n", A2cidade, B3cidade);

                    //Populacao
                    if (A2popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B3 - Derrota ", A2popul, B3popul);
                        jogador ++;
                    } else if (A2popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B3 - Vitoria ", A2popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B3 - Empate ", A2popul, B3popul);
                    }

                    //area
                    if (A2area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B3 - Derrota", A2area, B3area);
                        jogador ++;
                    } else if (A2area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B3 - Empate", A2area, B3area);
                    }

                    //PIB
                    if (A2pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B3 - Derrota", A2pib, B3pib);
                        jogador ++;
                    } else if (A2pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B3 - Empate", A2pib, B3pib);
                    }

                    //Pontos Tur
                    if (A2turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B3 - Derrota", A2turist, B3turist);
                        jogador ++;
                    } else if (A2turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B3 - Empate", A2turist, B3turist);
                    }

                    //Dens Popul
                    if (A2dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B3 - Derrota", A2dens, B3dens);
                        jogador ++;
                    } else if (A2dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B3 - Empate ", A2dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B3 - Derrota", A2pcap, B3pcap);
                        jogador ++;
                    } else if (A2pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B3 - Empate", A2pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B3 - Derrota \n", A2sup, B3sup);
                        jogador ++;
                    } else if (A2sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B3 - Vitoria \n", A2sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B3 - Empate \n", A2sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B4 - %s\n", A2cidade, B4cidade);

                    //Populacao
                    if (A2popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B4 - Derrota ", A2popul, B4popul);
                        jogador ++;
                    } else if (A2popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B4 - Vitoria ", A2popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B4 - Empate ", A2popul, B4popul);
                    }

                    //area
                    if (A2area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B4 - Derrota", A2area, B4area);
                        jogador ++;
                    } else if (A2area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B4 - Empate", A2area, B4area);
                    }

                    //PIB
                    if (A2pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B4 - Derrota", A2pib, B4pib);
                        jogador ++;
                    } else if (A2pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B4 - Empate", A2pib, B4pib);
                    }

                    //Pontos Tur
                    if (A2turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B4 - Derrota", A2turist, B4turist);
                        jogador ++;
                    } else if (A2turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B4 - Empate", A2turist, B4turist);
                    }

                    //Dens Popul
                    if (A2dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B4 - Derrota", A2dens, B4dens);
                        jogador ++;
                    } else if (A2dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B4 - Empate ", A2dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B4 - Derrota", A2pcap, B4pcap);
                        jogador ++;
                    } else if (A2pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B4 - Empate", A2pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B4 - Derrota \n", A2sup, B4sup);
                        jogador ++;
                    } else if (A2sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B4 - Vitoria \n", A2sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B4 - Empate \n", A2sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    }
            break;
    //#############################################################################################################################################################################
            case 3:
                switch (Mcarta)
                    {
    //#############################################################################################################################################################################         
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B1 - %s\n", A3cidade, B1cidade);

                    //Populacao
                    if (A3popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B1 - Derrota ", A3popul, B1popul);
                        jogador ++;
                    } else if (A3popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B1 - Vitoria ", A3popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B1 - Empate ", A3popul, B1popul);
                    }

                    //area
                    if (A3area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B1 - Derrota", A3area, B1area);
                        jogador ++;
                    } else if (A3area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B1 - Empate", A3area, B1area);
                    }

                    //PIB
                    if (A3pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B1 - Derrota", A3pib, B1pib);
                        jogador ++;
                    } else if (A3pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B1 - Empate", A3pib, B1pib);
                    }

                    //Pontos Tur
                    if (A3turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B1 - Derrota", A3turist, B1turist);
                        jogador ++;
                    } else if (A3turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B1 - Empate", A3turist, B1turist);
                    }

                    //Dens Popul
                    if (A3dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B1 - Derrota", A3dens, B1dens);
                        jogador ++;
                    } else if (A3dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B1 - Empate ", A3dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B1 - Derrota", A3pcap, B1pcap);
                        jogador ++;
                    } else if (A3pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B1 - Empate", A3pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B1 - Derrota \n", A3sup, B1sup);
                        jogador ++;
                    } else if (A3sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B1 - Vitoria \n", A3sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B1 - Empate \n", A3sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B2 - %s\n", A3cidade, B2cidade);

                    //Populacao
                    if (A3popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B2 - Derrota ", A3popul, B2popul);
                        jogador ++;
                    } else if (A3popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B2 - Vitoria ", A3popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B2 - Empate ", A3popul, B2popul);
                    }

                    //area
                    if (A3area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B2 - Derrota", A3area, B2area);
                        jogador ++;
                    } else if (A3area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B2 - Empate", A3area, B2area);
                    }

                    //PIB
                    if (A3pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B2 - Derrota", A3pib, B2pib);
                        jogador ++;
                    } else if (A3pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B2 - Empate", A3pib, B2pib);
                    }

                    //Pontos Tur
                    if (A3turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B2 - Derrota", A3turist, B2turist);
                        jogador ++;
                    } else if (A3turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B2 - Empate", A3turist, B2turist);
                    }

                    //Dens Popul
                    if (A3dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B2 - Derrota", A3dens, B2dens);
                        jogador ++;
                    } else if (A3dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B2 - Empate ", A3dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B2 - Derrota", A3pcap, B2pcap);
                        jogador ++;
                    } else if (A3pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B2 - Empate", A3pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B2 - Derrota \n", A3sup, B2sup);
                        jogador ++;
                    } else if (A3sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B2 - Vitoria \n", A3sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B2 - Empate \n", A3sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B3 - %s\n", A3cidade, B3cidade);

                    //Populacao
                    if (A3popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B3 - Derrota ", A3popul, B3popul);
                        jogador ++;
                    } else if (A3popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B3 - Vitoria ", A3popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B3 - Empate ", A3popul, B3popul);
                    }

                    //area
                    if (A3area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B3 - Derrota", A3area, B3area);
                        jogador ++;
                    } else if (A3area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B3 - Empate", A3area, B3area);
                    }

                    //PIB
                    if (A3pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B3 - Derrota", A3pib, B3pib);
                        jogador ++;
                    } else if (A3pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B3 - Empate", A3pib, B3pib);
                    }

                    //Pontos Tur
                    if (A3turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B3 - Derrota", A3turist, B3turist);
                        jogador ++;
                    } else if (A3turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B3 - Empate", A3turist, B3turist);
                    }

                    //Dens Popul
                    if (A3dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B3 - Derrota", A3dens, B3dens);
                        jogador ++;
                    } else if (A3dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B3 - Empate ", A3dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B3 - Derrota", A3pcap, B3pcap);
                        jogador ++;
                    } else if (A3pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B3 - Empate", A3pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B3 - Derrota \n", A3sup, B3sup);
                        jogador ++;
                    } else if (A3sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B3 - Vitoria \n", A3sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B3 - Empate \n", A3sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B4 - %s\n", A3cidade, B4cidade);

                    //Populacao
                    if (A3popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B4 - Derrota ", A3popul, B4popul);
                        jogador ++;
                    } else if (A3popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B4 - Vitoria ", A3popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B4 - Empate ", A3popul, B4popul);
                    }

                    //area
                    if (A3area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B4 - Derrota", A3area, B4area);
                        jogador ++;
                    } else if (A3area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B4 - Empate", A3area, B4area);
                    }

                    //PIB
                    if (A3pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B4 - Derrota", A3pib, B4pib);
                        jogador ++;
                    } else if (A3pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B4 - Empate", A3pib, B4pib);
                    }

                    //Pontos Tur
                    if (A3turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B4 - Derrota", A3turist, B4turist);
                        jogador ++;
                    } else if (A3turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B4 - Empate", A3turist, B4turist);
                    }

                    //Dens Popul
                    if (A3dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B4 - Derrota", A3dens, B4dens);
                        jogador ++;
                    } else if (A3dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B4 - Empate ", A3dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B4 - Derrota", A3pcap, B4pcap);
                        jogador ++;
                    } else if (A3pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B4 - Empate", A3pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B4 - Derrota \n", A3sup, B4sup);
                        jogador ++;
                    } else if (A3sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B4 - Vitoria \n", A3sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B4 - Empate \n", A3sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    }             
            break;
    //#############################################################################################################################################################################       
            default:
                switch (Mcarta)
                    {
    //#############################################################################################################################################################################         
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B1 - %s\n", A4cidade, B1cidade);

                    //Populacao
                    if (A4popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B1 - Derrota ", A4popul, B1popul);
                        jogador ++;
                    } else if (A4popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B1 - Vitoria ", A4popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B1 - Empate ", A4popul, B1popul);
                    }

                    //area
                    if (A4area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B1 - Derrota", A4area, B1area);
                        jogador ++;
                    } else if (A4area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B1 - Empate", A4area, B1area);
                    }

                    //PIB
                    if (A4pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B1 - Derrota", A4pib, B1pib);
                        jogador ++;
                    } else if (A4pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B1 - Empate", A4pib, B1pib);
                    }

                    //Pontos Tur
                    if (A4turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B1 - Derrota", A4turist, B1turist);
                        jogador ++;
                    } else if (A4turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B1 - Empate", A4turist, B1turist);
                    }

                    //Dens Popul
                    if (A4dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B1 - Derrota", A4dens, B1dens);
                        jogador ++;
                    } else if (A4dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B1 - Empate ", A4dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B1 - Derrota", A4pcap, B1pcap);
                        jogador ++;
                    } else if (A4pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B1 - Empate", A4pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B1 - Derrota \n", A4sup, B1sup);
                        jogador ++;
                    } else if (A4sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B1 - Vitoria \n", A4sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B1 - Empate \n", A4sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B2 - %s\n", A4cidade, B2cidade);

                    //Populacao
                    if (A4popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B2 - Derrota ", A4popul, B2popul);
                        jogador ++;
                    } else if (A4popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B2 - Vitoria ", A4popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B2 - Empate ", A4popul, B2popul);
                    }

                    //area
                    if (A4area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B2 - Derrota", A4area, B2area);
                        jogador ++;
                    } else if (A4area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B2 - Empate", A4area, B2area);
                    }

                    //PIB
                    if (A4pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B2 - Derrota", A4pib, B2pib);
                        jogador ++;
                    } else if (A4pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B2 - Empate", A4pib, B2pib);
                    }

                    //Pontos Tur
                    if (A4turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B2 - Derrota", A4turist, B2turist);
                        jogador ++;
                    } else if (A4turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B2 - Empate", A4turist, B2turist);
                    }

                    //Dens Popul
                    if (A4dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B2 - Derrota", A4dens, B2dens);
                        jogador ++;
                    } else if (A4dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B2 - Empate ", A4dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B2 - Derrota", A4pcap, B2pcap);
                        jogador ++;
                    } else if (A4pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B2 - Empate", A4pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B2 - Derrota \n", A4sup, B2sup);
                        jogador ++;
                    } else if (A4sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B2 - Vitoria \n", A4sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B2 - Empate \n", A4sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B3 - %s\n", A4cidade, B3cidade);

                    //Populacao
                    if (A4popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B3 - Derrota ", A4popul, B3popul);
                        jogador ++;
                    } else if (A4popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B3 - Vitoria ", A4popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B3 - Empate ", A4popul, B3popul);
                    }

                    //area
                    if (A4area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B3 - Derrota", A4area, B3area);
                        jogador ++;
                    } else if (A4area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B3 - Empate", A4area, B3area);
                    }

                    //PIB
                    if (A4pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B3 - Derrota", A4pib, B3pib);
                        jogador ++;
                    } else if (A4pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B3 - Empate", A4pib, B3pib);
                    }

                    //Pontos Tur
                    if (A4turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B3 - Derrota", A4turist, B3turist);
                        jogador ++;
                    } else if (A4turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B3 - Empate", A4turist, B3turist);
                    }

                    //Dens Popul
                    if (A4dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B3 - Derrota", A4dens, B3dens);
                        jogador ++;
                    } else if (A4dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B3 - Empate ", A4dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B3 - Derrota", A4pcap, B3pcap);
                        jogador ++;
                    } else if (A4pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B3 - Empate", A4pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B3 - Derrota \n", A4sup, B3sup);
                        jogador ++;
                    } else if (A4sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B3 - Vitoria \n", A4sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B3 - Empate \n", A4sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B4 - %s\n", A4cidade, B4cidade);

                    //Populacao
                    if (A4popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B4 - Derrota ", A4popul, B4popul);
                        jogador ++;
                    } else if (A4popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B4 - Vitoria ", A4popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B4 - Empate ", A4popul, B4popul);
                    }

                    //area
                    if (A4area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B4 - Derrota", A4area, B4area);
                        jogador ++;
                    } else if (A4area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B4 - Empate", A4area, B4area);
                    }

                    //PIB
                    if (A4pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B4 - Derrota", A4pib, B4pib);
                        jogador ++;
                    } else if (A4pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B4 - Empate", A4pib, B4pib);
                    }

                    //Pontos Tur
                    if (A4turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B4 - Derrota", A4turist, B4turist);
                        jogador ++;
                    } else if (A4turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B4 - Empate", A4turist, B4turist);
                    }

                    //Dens Popul
                    if (A4dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B4 - Derrota", A4dens, B4dens);
                        jogador ++;
                    } else if (A4dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B4 - Empate ", A4dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B4 - Derrota", A4pcap, B4pcap);
                        jogador ++;
                    } else if (A4pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B4 - Empate", A4pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B4 - Derrota \n", A4sup, B4sup);
                        jogador ++;
                    } else if (A4sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B4 - Vitoria \n", A4sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B4 - Empate \n", A4sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    } 
            break;
    //#############################################################################################################################################################################                          
            }
        }

        else
            {
            printf("Opção Invalida! Comece novamente!! \n\n");
            }

    }
    else if (decisao2 == 2)
    {
         //Jogar 
        
        //limpando a tela
        system("clear");

        printf("*********VAMOS JOGAR**********\n");
        printf("***Apresento as suas Cartas***\n\n");
        printf("PAÍS: %s - %s\n", pais1, Aestado);
        printf("1. Carta A1 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
        printf("2. Carta A2 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
        printf("3. Carta A3 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);
        printf("4. Carta A4 - Cidade: %s \n\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A4cidade, A4popul, A4area, A4pib, A4turist, A4dens, A4pcap);

    // printf("\nPAÍS: %s - %s\n", pais1, Bestado);
        // printf("Carta B1 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B1cidade, B1popul, B1area, B1pib, B1turist, B1dens, B1pcap);
        // printf("Carta B2 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B2cidade, B2popul, B2area, B2pib, B2turist, B2dens, B2pcap);
        // printf("Carta B3 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B3cidade, B3popul, B3area, B3pib, B3turist, B3dens, B3pcap);
        // printf("Carta B4 - Cidade: %s \tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B4cidade, B4popul, B4area, B4pib, B4turist, B4dens, B4pcap);
        
        printf("\nEscolha a sua Carta: ");
        scanf("%d", &Jcarta);
    
        if (Jcarta > 0 && Jcarta < 5)
        {
            switch (Jcarta)
            {
    //#############################################################################################################################################################################
            case 1:
                switch (Mcarta)
                {
    //#############################################################################################################################################################################         
                case 1:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B1 - %s\n", A1cidade, B1cidade);

                    //Populacao
                    if (A1popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B1 - Derrota ", A1popul, B1popul);
                        jogador ++;
                    } else if (A1popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B1 - Vitoria ", A1popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B1 - Empate ", A1popul, B1popul);
                    }

                    //area
                    if (A1area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B1 - Derrota", A1area, B1area);
                        jogador ++;
                    } else if (A1area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B1 - Empate", A1area, B1area);
                    }

                    //PIB
                    if (A1pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B1 - Derrota", A1pib, B1pib);
                        jogador ++;
                    } else if (A1pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B1 - Empate", A1pib, B1pib);
                    }

                    //Pontos Tur
                    if (A1turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B1 - Derrota", A1turist, B1turist);
                        jogador ++;
                    } else if (A1turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B1 - Empate", A1turist, B1turist);
                    }

                    //Dens Popul
                    if (A1dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B1 - Derrota", A1dens, B1dens);
                        jogador ++;
                    } else if (A1dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B1 - Empate ", A1dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B1 - Derrota", A1pcap, B1pcap);
                        jogador ++;
                    } else if (A1pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B1 - Vitoria", A1pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B1 - Empate", A1pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B1 - Derrota \n", A1sup, B1sup);
                        jogador ++;
                    } else if (A1sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B1 - Vitoria \n", A1sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B1 - Empate \n", A1sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B2 - %s\n", A1cidade, B2cidade);

                    //Populacao
                    if (A1popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B2 - Derrota ", A1popul, B2popul);
                        jogador ++;
                    } else if (A1popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B2 - Vitoria ", A1popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B2 - Empate ", A1popul, B2popul);
                    }

                    //area
                    if (A1area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B2 - Derrota", A1area, B2area);
                        jogador ++;
                    } else if (A1area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B2 - Empate", A1area, B2area);
                    }

                    //PIB
                    if (A1pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B2 - Derrota", A1pib, B2pib);
                        jogador ++;
                    } else if (A1pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B2 - Empate", A1pib, B2pib);
                    }

                    //Pontos Tur
                    if (A1turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B2 - Derrota", A1turist, B2turist);
                        jogador ++;
                    } else if (A1turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B2 - Empate", A1turist, B2turist);
                    }

                    //Dens Popul
                    if (A1dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B2 - Derrota", A1dens, B2dens);
                        jogador ++;
                    } else if (A1dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B2 - Empate ", A1dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B2 - Derrota", A1pcap, B2pcap);
                        jogador ++;
                    } else if (A1pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B2 - Vitoria", A1pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B2 - Empate", A1pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B2 - Derrota \n", A1sup, B2sup);
                        jogador ++;
                    } else if (A1sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B2 - Vitoria \n", A1sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B2 - Empate \n", A1sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B3 - %s\n", A1cidade, B3cidade);

                    //Populacao
                    if (A1popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B3 - Derrota ", A1popul, B3popul);
                        jogador ++;
                    } else if (A1popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B3 - Vitoria ", A1popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B3 - Empate ", A1popul, B3popul);
                    }

                    //area
                    if (A1area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B3 - Derrota", A1area, B3area);
                        jogador ++;
                    } else if (A1area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B3 - Empate", A1area, B3area);
                    }

                    //PIB
                    if (A1pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B3 - Derrota", A1pib, B3pib);
                        jogador ++;
                    } else if (A1pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B3 - Empate", A1pib, B3pib);
                    }

                    //Pontos Tur
                    if (A1turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B3 - Derrota", A1turist, B3turist);
                        jogador ++;
                    } else if (A1turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B3 - Empate", A1turist, B3turist);
                    }

                    //Dens Popul
                    if (A1dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B3 - Derrota", A1dens, B3dens);
                        jogador ++;
                    } else if (A1dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B3 - Empate ", A1dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B3 - Derrota", A1pcap, B3pcap);
                        jogador ++;
                    } else if (A1pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B3 - Vitoria", A1pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B3 - Empate", A1pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B3 - Derrota \n", A1sup, B3sup);
                        jogador ++;
                    } else if (A1sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B3 - Vitoria \n", A1sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B3 - Empate \n", A1sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A1 x Carta B4 - %s\n", A1cidade, B4cidade);

                    //Populacao
                    if (A1popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A1 X Carta B4 - Derrota ", A1popul, B4popul);
                        jogador ++;
                    } else if (A1popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A1 X2 Carta B4 - Vitoria ", A1popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A1 X2 Carta B4 - Empate ", A1popul, B4popul);
                    }

                    //area
                    if (A1area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A1 X Carta B4 - Derrota", A1area, B4area);
                        jogador ++;
                    } else if (A1area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A1 X Carta B4 - Empate", A1area, B4area);
                    }

                    //PIB
                    if (A1pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A1 X Carta B4 - Derrota", A1pib, B4pib);
                        jogador ++;
                    } else if (A1pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A1 X Carta B4 - Empate", A1pib, B4pib);
                    }

                    //Pontos Tur
                    if (A1turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A1 X Carta B4 - Derrota", A1turist, B4turist);
                        jogador ++;
                    } else if (A1turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A1 X Carta B4 - Empate", A1turist, B4turist);
                    }

                    //Dens Popul
                    if (A1dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A1 X Carta B4 - Derrota", A1dens, B4dens);
                        jogador ++;
                    } else if (A1dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A1 X Carta B4 - Empate ", A1dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A1pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A1 X Carta B4 - Derrota", A1pcap, B4pcap);
                        jogador ++;
                    } else if (A1pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A1 X Carta B4 - Vitoria", A1pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A1 X Carta B4 - Empate", A1pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A1sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A1 X Carta B4 - Derrota \n", A1sup, B4sup);
                        jogador ++;
                    } else if (A1sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A1 X Carta B4 - Vitoria \n", A1sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A1 X Carta B4 - Empate \n", A1sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    }
            break;
    //#############################################################################################################################################################################       
            case 2:
                switch (Mcarta)
                {
    //############################################################################################################################################################################# 
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B1 - %s\n", A2cidade, B1cidade);

                    //Populacao
                    if (A2popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B1 - Derrota ", A2popul, B1popul);
                        jogador ++;
                    } else if (A2popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B1 - Vitoria ", A2popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B1 - Empate ", A2popul, B1popul);
                    }

                    //area
                    if (A2area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B1 - Derrota", A2area, B1area);
                        jogador ++;
                    } else if (A2area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B1 - Empate", A2area, B1area);
                    }

                    //PIB
                    if (A2pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B1 - Derrota", A2pib, B1pib);
                        jogador ++;
                    } else if (A2pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B1 - Empate", A2pib, B1pib);
                    }

                    //Pontos Tur
                    if (A2turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B1 - Derrota", A2turist, B1turist);
                        jogador ++;
                    } else if (A2turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B1 - Empate", A2turist, B1turist);
                    }

                    //Dens Popul
                    if (A2dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B1 - Derrota", A2dens, B1dens);
                        jogador ++;
                    } else if (A2dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B1 - Empate ", A2dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B1 - Derrota", A2pcap, B1pcap);
                        jogador ++;
                    } else if (A2pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B1 - Vitoria", A2pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B1 - Empate", A2pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B1 - Derrota \n", A2sup, B1sup);
                        jogador ++;
                    } else if (A2sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B1 - Vitoria \n", A2sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B1 - Empate \n", A2sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B2 - %s\n", A2cidade, B2cidade);

                    //Populacao
                    if (A2popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B2 - Derrota ", A2popul, B2popul);
                        jogador ++;
                    } else if (A2popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B2 - Vitoria ", A2popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B2 - Empate ", A2popul, B2popul);
                    }

                    //area
                    if (A2area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B2 - Derrota", A2area, B2area);
                        jogador ++;
                    } else if (A2area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B2 - Empate", A2area, B2area);
                    }

                    //PIB
                    if (A2pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B2 - Derrota", A2pib, B2pib);
                        jogador ++;
                    } else if (A2pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B2 - Empate", A2pib, B2pib);
                    }

                    //Pontos Tur
                    if (A2turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B2 - Derrota", A2turist, B2turist);
                        jogador ++;
                    } else if (A2turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B2 - Empate", A2turist, B2turist);
                    }

                    //Dens Popul
                    if (A2dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B2 - Derrota", A2dens, B2dens);
                        jogador ++;
                    } else if (A2dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B2 - Empate ", A2dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B2 - Derrota", A2pcap, B2pcap);
                        jogador ++;
                    } else if (A2pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B2 - Vitoria", A2pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B2 - Empate", A2pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B2 - Derrota \n", A2sup, B2sup);
                        jogador ++;
                    } else if (A2sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B2 - Vitoria \n", A2sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B2 - Empate \n", A2sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################       

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B3 - %s\n", A2cidade, B3cidade);

                    //Populacao
                    if (A2popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B3 - Derrota ", A2popul, B3popul);
                        jogador ++;
                    } else if (A2popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B3 - Vitoria ", A2popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B3 - Empate ", A2popul, B3popul);
                    }

                    //area
                    if (A2area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B3 - Derrota", A2area, B3area);
                        jogador ++;
                    } else if (A2area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B3 - Empate", A2area, B3area);
                    }

                    //PIB
                    if (A2pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B3 - Derrota", A2pib, B3pib);
                        jogador ++;
                    } else if (A2pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B3 - Empate", A2pib, B3pib);
                    }

                    //Pontos Tur
                    if (A2turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B3 - Derrota", A2turist, B3turist);
                        jogador ++;
                    } else if (A2turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B3 - Empate", A2turist, B3turist);
                    }

                    //Dens Popul
                    if (A2dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B3 - Derrota", A2dens, B3dens);
                        jogador ++;
                    } else if (A2dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B3 - Empate ", A2dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B3 - Derrota", A2pcap, B3pcap);
                        jogador ++;
                    } else if (A2pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B3 - Vitoria", A2pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B3 - Empate", A2pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B3 - Derrota \n", A2sup, B3sup);
                        jogador ++;
                    } else if (A2sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B3 - Vitoria \n", A2sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B3 - Empate \n", A2sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A2 x Carta B4 - %s\n", A2cidade, B4cidade);

                    //Populacao
                    if (A2popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A2 X Carta B4 - Derrota ", A2popul, B4popul);
                        jogador ++;
                    } else if (A2popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A2 X2 Carta B4 - Vitoria ", A2popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A2 X2 Carta B4 - Empate ", A2popul, B4popul);
                    }

                    //area
                    if (A2area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A2 X Carta B4 - Derrota", A2area, B4area);
                        jogador ++;
                    } else if (A2area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A2 X Carta B4 - Empate", A2area, B4area);
                    }

                    //PIB
                    if (A2pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A2 X Carta B4 - Derrota", A2pib, B4pib);
                        jogador ++;
                    } else if (A2pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A2 X Carta B4 - Empate", A2pib, B4pib);
                    }

                    //Pontos Tur
                    if (A2turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A2 X Carta B4 - Derrota", A2turist, B4turist);
                        jogador ++;
                    } else if (A2turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A2 X Carta B4 - Empate", A2turist, B4turist);
                    }

                    //Dens Popul
                    if (A2dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A2 X Carta B4 - Derrota", A2dens, B4dens);
                        jogador ++;
                    } else if (A2dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A2 X Carta B4 - Empate ", A2dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A2pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A2 X Carta B4 - Derrota", A2pcap, B4pcap);
                        jogador ++;
                    } else if (A2pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A2 X Carta B4 - Vitoria", A2pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A2 X Carta B4 - Empate", A2pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A2sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A2 X Carta B4 - Derrota \n", A2sup, B4sup);
                        jogador ++;
                    } else if (A2sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A2 X Carta B4 - Vitoria \n", A2sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A2 X Carta B4 - Empate \n", A2sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    }
            break;
    //#############################################################################################################################################################################
            case 3:
                switch (Mcarta)
                    {
    //#############################################################################################################################################################################         
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B1 - %s\n", A3cidade, B1cidade);

                    //Populacao
                    if (A3popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B1 - Derrota ", A3popul, B1popul);
                        jogador ++;
                    } else if (A3popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B1 - Vitoria ", A3popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B1 - Empate ", A3popul, B1popul);
                    }

                    //area
                    if (A3area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B1 - Derrota", A3area, B1area);
                        jogador ++;
                    } else if (A3area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B1 - Empate", A3area, B1area);
                    }

                    //PIB
                    if (A3pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B1 - Derrota", A3pib, B1pib);
                        jogador ++;
                    } else if (A3pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B1 - Empate", A3pib, B1pib);
                    }

                    //Pontos Tur
                    if (A3turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B1 - Derrota", A3turist, B1turist);
                        jogador ++;
                    } else if (A3turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B1 - Empate", A3turist, B1turist);
                    }

                    //Dens Popul
                    if (A3dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B1 - Derrota", A3dens, B1dens);
                        jogador ++;
                    } else if (A3dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B1 - Empate ", A3dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B1 - Derrota", A3pcap, B1pcap);
                        jogador ++;
                    } else if (A3pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B1 - Vitoria", A3pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B1 - Empate", A3pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B1 - Derrota \n", A3sup, B1sup);
                        jogador ++;
                    } else if (A3sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B1 - Vitoria \n", A3sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B1 - Empate \n", A3sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B2 - %s\n", A3cidade, B2cidade);

                    //Populacao
                    if (A3popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B2 - Derrota ", A3popul, B2popul);
                        jogador ++;
                    } else if (A3popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B2 - Vitoria ", A3popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B2 - Empate ", A3popul, B2popul);
                    }

                    //area
                    if (A3area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B2 - Derrota", A3area, B2area);
                        jogador ++;
                    } else if (A3area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B2 - Empate", A3area, B2area);
                    }

                    //PIB
                    if (A3pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B2 - Derrota", A3pib, B2pib);
                        jogador ++;
                    } else if (A3pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B2 - Empate", A3pib, B2pib);
                    }

                    //Pontos Tur
                    if (A3turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B2 - Derrota", A3turist, B2turist);
                        jogador ++;
                    } else if (A3turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B2 - Empate", A3turist, B2turist);
                    }

                    //Dens Popul
                    if (A3dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B2 - Derrota", A3dens, B2dens);
                        jogador ++;
                    } else if (A3dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B2 - Empate ", A3dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B2 - Derrota", A3pcap, B2pcap);
                        jogador ++;
                    } else if (A3pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B2 - Vitoria", A3pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B2 - Empate", A3pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B2 - Derrota \n", A3sup, B2sup);
                        jogador ++;
                    } else if (A3sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B2 - Vitoria \n", A3sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B2 - Empate \n", A3sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B3 - %s\n", A3cidade, B3cidade);

                    //Populacao
                    if (A3popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B3 - Derrota ", A3popul, B3popul);
                        jogador ++;
                    } else if (A3popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B3 - Vitoria ", A3popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B3 - Empate ", A3popul, B3popul);
                    }

                    //area
                    if (A3area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B3 - Derrota", A3area, B3area);
                        jogador ++;
                    } else if (A3area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B3 - Empate", A3area, B3area);
                    }

                    //PIB
                    if (A3pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B3 - Derrota", A3pib, B3pib);
                        jogador ++;
                    } else if (A3pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B3 - Empate", A3pib, B3pib);
                    }

                    //Pontos Tur
                    if (A3turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B3 - Derrota", A3turist, B3turist);
                        jogador ++;
                    } else if (A3turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B3 - Empate", A3turist, B3turist);
                    }

                    //Dens Popul
                    if (A3dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B3 - Derrota", A3dens, B3dens);
                        jogador ++;
                    } else if (A3dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B3 - Empate ", A3dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B3 - Derrota", A3pcap, B3pcap);
                        jogador ++;
                    } else if (A3pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B3 - Vitoria", A3pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B3 - Empate", A3pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B3 - Derrota \n", A3sup, B3sup);
                        jogador ++;
                    } else if (A3sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B3 - Vitoria \n", A3sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B3 - Empate \n", A3sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A3 x Carta B4 - %s\n", A3cidade, B4cidade);

                    //Populacao
                    if (A3popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A3 X Carta B4 - Derrota ", A3popul, B4popul);
                        jogador ++;
                    } else if (A3popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A3 X2 Carta B4 - Vitoria ", A3popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A3 X2 Carta B4 - Empate ", A3popul, B4popul);
                    }

                    //area
                    if (A3area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A3 X Carta B4 - Derrota", A3area, B4area);
                        jogador ++;
                    } else if (A3area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A3 X Carta B4 - Empate", A3area, B4area);
                    }

                    //PIB
                    if (A3pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A3 X Carta B4 - Derrota", A3pib, B4pib);
                        jogador ++;
                    } else if (A3pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A3 X Carta B4 - Empate", A3pib, B4pib);
                    }

                    //Pontos Tur
                    if (A3turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A3 X Carta B4 - Derrota", A3turist, B4turist);
                        jogador ++;
                    } else if (A3turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A3 X Carta B4 - Empate", A3turist, B4turist);
                    }

                    //Dens Popul
                    if (A3dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A3 X Carta B4 - Derrota", A3dens, B4dens);
                        jogador ++;
                    } else if (A3dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A3 X Carta B4 - Empate ", A3dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A3pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A3 X Carta B4 - Derrota", A3pcap, B4pcap);
                        jogador ++;
                    } else if (A3pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A3 X Carta B4 - Vitoria", A3pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A3 X Carta B4 - Empate", A3pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A3sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A3 X Carta B4 - Derrota \n", A3sup, B4sup);
                        jogador ++;
                    } else if (A3sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A3 X Carta B4 - Vitoria \n", A3sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A3 X Carta B4 - Empate \n", A3sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    }             
            break;
    //#############################################################################################################################################################################       
            default:
                switch (Mcarta)
                    {
    //#############################################################################################################################################################################         
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B1 - %s\n", A4cidade, B1cidade);

                    //Populacao
                    if (A4popul > B1popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B1 - Derrota ", A4popul, B1popul);
                        jogador ++;
                    } else if (A4popul < B1popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B1 - Vitoria ", A4popul, B1popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B1 - Empate ", A4popul, B1popul);
                    }

                    //area
                    if (A4area > B1area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B1 - Derrota", A4area, B1area);
                        jogador ++;
                    } else if (A4area < B1area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4area, B1area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B1 - Empate", A4area, B1area);
                    }

                    //PIB
                    if (A4pib > B1pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B1 - Derrota", A4pib, B1pib);
                        jogador ++;
                    } else if (A4pib < B1pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4pib, B1pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B1 - Empate", A4pib, B1pib);
                    }

                    //Pontos Tur
                    if (A4turist > B1turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B1 - Derrota", A4turist, B1turist);
                        jogador ++;
                    } else if (A4turist < B1turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4turist, B1turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B1 - Empate", A4turist, B1turist);
                    }

                    //Dens Popul
                    if (A4dens < B1dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B1 - Derrota", A4dens, B1dens);
                        jogador ++;
                    } else if (A4dens > B1dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4dens, B1dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B1 - Empate ", A4dens, B1dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B1pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B1 - Derrota", A4pcap, B1pcap);
                        jogador ++;
                    } else if (A4pcap < B1pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B1 - Vitoria", A4pcap, B1pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B1 - Empate", A4pcap, B1pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B1 - Derrota \n", A4sup, B1sup);
                        jogador ++;
                    } else if (A4sup < B1sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B1 - Vitoria \n", A4sup, B1sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B1 - Empate \n", A4sup, B1sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;               
        
    //#############################################################################################################################################################################
                    case 2:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B2 - %s\n", A4cidade, B2cidade);

                    //Populacao
                    if (A4popul > B2popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B2 - Derrota ", A4popul, B2popul);
                        jogador ++;
                    } else if (A4popul < B2popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B2 - Vitoria ", A4popul, B2popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B2 - Empate ", A4popul, B2popul);
                    }

                    //area
                    if (A4area > B2area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B2 - Derrota", A4area, B2area);
                        jogador ++;
                    } else if (A4area < B2area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4area, B2area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B2 - Empate", A4area, B2area);
                    }

                    //PIB
                    if (A4pib > B2pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B2 - Derrota", A4pib, B2pib);
                        jogador ++;
                    } else if (A4pib < B2pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4pib, B2pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B2 - Empate", A4pib, B2pib);
                    }

                    //Pontos Tur
                    if (A4turist > B2turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B2 - Derrota", A4turist, B2turist);
                        jogador ++;
                    } else if (A4turist < B2turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4turist, B2turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B2 - Empate", A4turist, B2turist);
                    }

                    //Dens Popul
                    if (A4dens < B2dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B2 - Derrota", A4dens, B2dens);
                        jogador ++;
                    } else if (A4dens > B2dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4dens, B2dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B2 - Empate ", A4dens, B2dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B2pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B2 - Derrota", A4pcap, B2pcap);
                        jogador ++;
                    } else if (A4pcap < B2pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B2 - Vitoria", A4pcap, B2pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B2 - Empate", A4pcap, B2pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B2 - Derrota \n", A4sup, B2sup);
                        jogador ++;
                    } else if (A4sup < B2sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B2 - Vitoria \n", A4sup, B2sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B2 - Empate \n", A4sup, B2sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }                        
                    
                    break;
    //#############################################################################################################################################################################

                    case 3:
                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B3 - %s\n", A4cidade, B3cidade);

                    //Populacao
                    if (A4popul > B3popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B3 - Derrota ", A4popul, B3popul);
                        jogador ++;
                    } else if (A4popul < B3popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B3 - Vitoria ", A4popul, B3popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B3 - Empate ", A4popul, B3popul);
                    }

                    //area
                    if (A4area > B3area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B3 - Derrota", A4area, B3area);
                        jogador ++;
                    } else if (A4area < B3area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4area, B3area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B3 - Empate", A4area, B3area);
                    }

                    //PIB
                    if (A4pib > B3pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B3 - Derrota", A4pib, B3pib);
                        jogador ++;
                    } else if (A4pib < B3pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4pib, B3pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B3 - Empate", A4pib, B3pib);
                    }

                    //Pontos Tur
                    if (A4turist > B3turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B3 - Derrota", A4turist, B3turist);
                        jogador ++;
                    } else if (A4turist < B3turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4turist, B3turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B3 - Empate", A4turist, B3turist);
                    }

                    //Dens Popul
                    if (A4dens < B3dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B3 - Derrota", A4dens, B3dens);
                        jogador ++;
                    } else if (A4dens > B3dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4dens, B3dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B3 - Empate ", A4dens, B3dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B3pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B3 - Derrota", A4pcap, B3pcap);
                        jogador ++;
                    } else if (A4pcap < B3pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B3 - Vitoria", A4pcap, B3pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B3 - Empate", A4pcap, B3pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B3 - Derrota \n", A4sup, B3sup);
                        jogador ++;
                    } else if (A4sup < B3sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B3 - Vitoria \n", A4sup, B3sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B3 - Empate \n", A4sup, B3sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
    //#############################################################################################################################################################################       
                    default:
                                    printf("\n\t****** Jogador x Máquina ******\n");
                    printf("%s - Carta A4 x Carta B4 - %s\n", A4cidade, B4cidade);

                    //Populacao
                    if (A4popul > B4popul) {
                        printf("\t**Populacao**\nVitoria - Carta A4 X Carta B4 - Derrota ", A4popul, B4popul);
                        jogador ++;
                    } else if (A4popul < B4popul) {
                        printf("D\t**Populacao**\nerrota - Carta A4 X2 Carta B4 - Vitoria ", A4popul, B4popul);
                        maquina ++;
                    } else {
                        printf("\t**Populacao**\nEmpate - Carta A4 X2 Carta B4 - Empate ", A4popul, B4popul);
                    }

                    //area
                    if (A4area > B4area) {
                        printf("\n\t**Area**\nVitoria - Carta A4 X Carta B4 - Derrota", A4area, B4area);
                        jogador ++;
                    } else if (A4area < B4area) {
                        printf("\n\t**Area**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4area, B4area);
                        maquina ++;
                    } else {
                        printf("\n\t**Area**\nEmpate - Carta A4 X Carta B4 - Empate", A4area, B4area);
                    }

                    //PIB
                    if (A4pib > B4pib) {
                        printf("\n\t**PIB**\nVitoria - Carta A4 X Carta B4 - Derrota", A4pib, B4pib);
                        jogador ++;
                    } else if (A4pib < B4pib) {
                        printf("\n\t**PIB**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4pib, B4pib);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB**\nEmpate - Carta A4 X Carta B4 - Empate", A4pib, B4pib);
                    }

                    //Pontos Tur
                    if (A4turist > B4turist) {
                        printf("\n\t**Pontos Turisticos**\nVitoria - Carta A4 X Carta B4 - Derrota", A4turist, B4turist);
                        jogador ++;
                    } else if (A4turist < B4turist) {
                        printf("\n\t**Pontos Turisticos**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4turist, B4turist);
                        maquina ++;
                    } else {
                        printf("\n\t**Pontos Turisticos**\nEmpate - Carta A4 X Carta B4 - Empate", A4turist, B4turist);
                    }

                    //Dens Popul
                    if (A4dens < B4dens) {
                        printf("\n\t**Densidade Populacional**\nVitoria - Carta A4 X Carta B4 - Derrota", A4dens, B4dens);
                        jogador ++;
                    } else if (A4dens > B4dens) {
                        printf("\n\t**Densidade Populacional**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4dens, B4dens);
                        maquina ++;
                    } else {
                        printf("\n\t**Densidade Populacional**\nEmpate - Carta A4 X Carta B4 - Empate ", A4dens, B4dens);
                    }

                    //PIB Pcapita
                    if (A4pcap > B4pcap) {
                        printf("\n\t**PIB Per Capita**\nVitoria - Carta A4 X Carta B4 - Derrota", A4pcap, B4pcap);
                        jogador ++;
                    } else if (A4pcap < B4pcap) {
                        printf("\n\t**PIB Per Capita**\nDerrota - Carta A4 X Carta B4 - Vitoria", A4pcap, B4pcap);
                        maquina ++;
                    } else {
                        printf("\n\t**PIB Per Capita**\nEmpate - Carta A4 X Carta B4 - Empate", A4pcap, B4pcap);
                    }
                    
                    //Super poder 
                    if (A4sup > B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Vitoria - Carta A4 X Carta B4 - Derrota \n", A4sup, B4sup);
                        jogador ++;
                    } else if (A4sup < B4sup) {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Derrota - Carta A4 X Carta B4 - Vitoria \n", A4sup, B4sup);
                        maquina ++;
                    } else {
                        printf("\nAgora ultilizando o Super poder da carta!!!!\n");
                        printf("Empate - Carta A4 X Carta B4 - Empate \n", A4sup, B4sup);
                    }
                    
                    printf("\n***CONTANDO OS PONTOS***");
                    printf("\nJogador %d x %d Maquina\n\n", jogador, maquina);
                    if (jogador > maquina){
                        printf("VOCE GANHOU!\n\n");
                    }else if (jogador < maquina){
                        printf("VOCE PERDEU!\n\n");
                    }else {
                        printf("EMPATE!!\n\n");
                    }  

                    break;
                    } 
            break;
    //#############################################################################################################################################################################                          
            }
        }

        else
            {
            printf("Opção Invalida! Comece novamente!! \n\n");
            }


    }
    else
        {
        printf("Opção Invalida! Comece novamente!! \n\n");
        }
    }


    return 0;
}