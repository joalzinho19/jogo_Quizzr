#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void main()
{
    char cont, resp;

    SetConsoleOutputCP(65001);
    boolean compq3f = 0, compq3d = 0, compq3m = 0, compq2f = 0, compq2d = 0, compq2m = 0, compq1f = 0, compq1d = 0, compq1m = 0;
    int opc, pont = 0, pontm = 0, pontd = 0, vida;
    printf("Para melhor experiencia, utilizar a tela cheia!\n\n\n");
    system("pause");
    system("cls");
    system("color 02");
    printf("\n\t\t+-------------------------------------------------------------------------------------------------------------------------------+");
    printf("\n\t\t|\t\t                                                                                                   \t\t|");
    printf("\n\t\t|\t\t     QQQQQQQQQ                         iiii                                                        \t\t|");
    printf("\n\t\t|\t\t   QQ:::::::::QQ                      i::::i                                                       \t\t|");
    printf("\n\t\t|\t\t QQ:::::::::::::QQ                     iiii                                                        \t\t|");
    printf("\n\t\t|\t\tQ:::::::QQQ:::::::Q                                                                                \t\t|");
    printf("\n\t\t|\t\tQ::::::O   Q::::::Quuuuuu    uuuuuu  iiiiiii zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzrrrrr   rrrrrrrrr   \t\t|");
    printf("\n\t\t|\t\tQ:::::O     Q:::::Qu::::u    u::::u  i:::::i z:::::::::::::::zz:::::::::::::::zr::::rrr:::::::::r  \t\t|");
    printf("\n\t\t|\t\tQ:::::O     Q:::::Qu::::u    u::::u   i::::i z::::::::::::::z z::::::::::::::z r:::::::::::::::::r \t\t|");
    printf("\n\t\t|\t\tQ:::::O     Q:::::Qu::::u    u::::u   i::::i zzzzzzzz::::::z  zzzzzzzz::::::z  rr::::::rrrrr::::::r\t\t|");
    printf("\n\t\t|\t\tQ:::::O     Q:::::Qu::::u    u::::u   i::::i       z::::::z         z::::::z    r:::::r     r:::::r\t\t|");
    printf("\n\t\t|\t\tQ:::::O     Q:::::Qu::::u    u::::u   i::::i      z::::::z         z::::::z     r:::::r     rrrrrrr\t\t|");
    printf("\n\t\t|\t\tQ:::::O  QQQQ:::::Qu::::u    u::::u   i::::i     z::::::z         z::::::z      r:::::r            \t\t|");
    printf("\n\t\t|\t\tQ::::::O Q::::::::Qu:::::uuuu:::::u   i::::i    z::::::z         z::::::z       r:::::r            \t\t|");
    printf("\n\t\t|\t\tQ:::::::QQ::::::::Qu:::::::::::::::uui::::::i  z::::::zzzzzzzz  z::::::zzzzzzzz r:::::r            \t\t|");
    printf("\n\t\t|\t\t QQ::::::::::::::Q  u:::::::::::::::ui::::::i z::::::::::::::z z::::::::::::::z r:::::r            \t\t|");
    printf("\n\t\t|\t\t   QQ:::::::::::Q    uu::::::::uu:::ui::::::iz:::::::::::::::zz:::::::::::::::z r:::::r            \t\t|");
    printf("\n\t\t|\t\t     QQQQQQQQ::::QQ    uuuuuuuu  uuuuiiiiiiiizzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz rrrrrrr            \t\t|");
    printf("\n\t\t|\t\t             Q:::::Q                                                                               \t\t|");
    printf("\n\t\t|\t\t              QQQQQQ                                                                               \t\t|");
    printf("\n\t\t|\t\t                                                                                                   \t\t|");
    printf("\n\t\t+-------------------------------------------------------------------------------------------------------------------------------+");

    printf("\n\n\n\n\n\n\n\n");
    Beep(277.18, 350);
    Sleep(1);
    Beep(369.99, 350);
    Sleep(1);
    Beep(415.3, 350);
    Sleep(1);
    Beep(440, 750);
    Sleep(1);
    Beep(415.3, 825);
    Beep(369.99, 825);
    system("pause");
menu:
    system("cls");
    printf("Menu Principal:");
    printf("\n            ,.  ,.");
    printf("\n            ||  ||");
    printf("\n           ,''--''.");
    printf("\n          : (.)(.) :");
    printf("\n         ,'        `.");
    printf("\n         :          :");
    printf("\n         :          :");
    printf("\n         `._m____m_,' ");
    printf("\n");
    printf("\n");
    printf("\n\n\t 1 - Jogar \n\n\t 2 - Créditos \n\n\t 3 - Conquistas\n\n\n\n\t Selecione sua opção: ");
    scanf("%d", &opc);
    switch (opc)
    {
    case 2:
        system("cls");
        printf("Créditos:\n\n\t Quizzr \n\n\t Feito por: Amanda Bravo e João Victor Gallo \n\n\n");

        system("pause");
        goto menu;

        break;
    case 1:
    quizes:
        system("cls");
        printf("\nSelecione seu Quizzr");
        printf("\n\n\t 1 - Quizzr Classic \n\n\t 2 - Quizzr Films \n\n\t 3 - Quizzr Anime\n\n\n\n\t Selecione sua opção: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            if (compq1f == 0)
            {
                goto dificuldade1;
            }
            else
            {
            dificuldade1:
                system("cls");
                printf("Seleciona a dificuldade:\n\n\t 1 - Fácil \n\n\t 2 - Médio \n\n\t 3 - Difícil\n\n\t Opção: ");
                scanf("%d", &opc);
                switch (opc)
                {
                case 1:
                    pont = 0;
                    vida = 3;
                    system("cls");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    printf("\n1 - Qual é o maior planeta do Sistema Solar?");
                    printf("\n\n\na-) Terra");
                    printf("\nb-) Júpiter");
                    printf("\nc-) Marte");
                    printf("\nd-) Saturno");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                    }

                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");

                    printf("\n2 - Quem escreveu 'Dom Quixote'?");
                    printf("\n\n\na-) William Shakespeare");
                    printf("\nb-) Johann Wolfgang von Goethe");
                    printf("\nc-) Miguel de Cervantes");
                    printf("\nd-) Fyodor Dostoyevsky");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n3 - Qual é o resultado da equação matemática 8 + 4 * 2 - 6 / 3?");
                    printf("\n\n\na-) 14");
                    printf("\nb-) 6");
                    printf("\nc-) 8");
                    printf("\nd-) 10");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        vida = vida - 1;
                        pont = pont;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n4 - Qual é o metal mais abundante na crosta terrestre?");
                    printf("\n\n\na-) Ouro");
                    printf("\nb-) Ferro");
                    printf("\nc-) Alumínio");
                    printf("\nd-) Prata");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n5 - Qual é o maior oceano do mundo?");
                    printf("\n\n\na-) Oceano Atlântico");
                    printf("\nb-) Oceano Pacífico");
                    printf("\nc-) Oceano Índico");
                    printf("\nd-) Oceano Ártico");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n6 - Quem é o autor da famosa obra 'Romeu e Julieta'?");
                    printf("\n\n\na-) Willian Shakespeare");
                    printf("\nb-) Oscar Wilde");
                    printf("\nc-) Fyodor Dostoyevsky");
                    printf("\nd-) Charles Dickens");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n7 - Qual é a capital do Canadá?");
                    printf("\n\n\na-) Toronto");
                    printf("\nb-) Vancouver");
                    printf("\nc-) Montreal");
                    printf("\nd-) Ottawa");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'd' || resp == 'D')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n8 - Qual é o símbolo químico do elemento ouro?");
                    printf("\n\n\na-) Ag");
                    printf("\nb-) Au");
                    printf("\nc-) Hg");
                    printf("\nd-) Fe");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n9 - Quantos continentes existem no mundo?");
                    printf("\n\n\na-) 4");
                    printf("\nb-) 5");
                    printf("\nc-) 6");
                    printf("\nd-) 7");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");
                    printf("\n10 - Quem foi o pintor do famoso quadro 'A Noite Estrelada'?");
                    printf("\n\n\na-) Vincent Van Gogh");
                    printf("\nb-) Pablo Picasso");
                    printf("\nc-) Claude Monet");
                    printf("\nd-) Salvador Dalí");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    compq1f = 1;
                    printf("\n\nParabéns! Você completou o Quizzr Classic na dificuldade Fácil! Sua pontuação foi de: %d", pont);
                    printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                    scanf("%s", &cont);
                    if (cont == 's' || cont == 'S')
                    {
                        pont = 0;
                        goto menu;
                    }
                    else
                        goto fim;
                    break;
                case 2:
                    pont = 0;
                    vida = 3;
                    system("cls");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    printf("\n1 - Em que ano ocorreu a Segunda Guerra Mundial?");
                    printf("\n\n\na-) 1914-1918");
                    printf("\nb-) 1939-1945");
                    printf("\nc-) 1945-1950");
                    printf("\nd-) 1950-1955");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                    }

                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");

                    printf("\n2 - Quem foi o primeiro homem a pisar na Lua?");
                    printf("\n\n\na-) Neil Armstrong");
                    printf("\nb-) Buzz Aldrin");
                    printf("\nc-) Yuri Gagarin");
                    printf("\nd-) Alan Shepard");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n3 - Qual é o maior país em área territorial do mundo?");
                    printf("\n\n\na-) China");
                    printf("\nb-) Canadá");
                    printf("\nc-) Brasil");
                    printf("\nd-) Rússia");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'd' || resp == 'D')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        vida = vida - 1;
                        pont = pont;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n4 - Quem escreveu a famosa obra 'O Pequeno Príncipe'?");
                    printf("\n\n\na-) J.R.R. Tolkien");
                    printf("\nb-) Gabriel García Márquez");
                    printf("\nc-) Antoine de Saint-Exupéry");
                    printf("\nd-) Jane Austen");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n5 - Qual é o principal gás presente na atmosfera terrestre?");
                    printf("\n\n\na-) Oxigênio");
                    printf("\nb-) Dióxido de carbono");
                    printf("\nc-) Metano");
                    printf("\nd-) Nitrogênio");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'd' || resp == 'D')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n6 - Qual é o maior produtor de café do mundo?");
                    printf("\n\n\na-) Brasil");
                    printf("\nb-) Colômbia");
                    printf("\nc-) Vietnã");
                    printf("\nd-) Indonésia");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n7 - Quem foi o famoso físico responsável pela teoria da relatividade?");
                    printf("\n\n\na-) Isaac Newton");
                    printf("\nb-) Albert Einstein");
                    printf("\nc-) Galileu Galilei");
                    printf("\nd-) Nikola Tesla");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n8 - Qual é a capital do Japão?");
                    printf("\n\n\na-) Kyoto");
                    printf("\nb-) Osaka");
                    printf("\nc-) Tóquio");
                    printf("\nd-) Hiroshima");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                    printf("\n9 - Quem foi o pintor do famoso quadro 'A Persistência da Memória'?");
                    printf("\n\n\na-) Pablo Picasso");
                    printf("\nb-) Salvador Dalí");
                    printf("\nc-) Leonardo da Vinci");
                    printf("\nd-) Vincent van Gogh");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    if (vida == 3)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                    if (vida == 2)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                    if (vida == 1)
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");
                    printf("\n10 - Qual é o resultado da soma dos ângulos internos de um triângulo?");
                    printf("\n\n\na-) 90 graus");
                    printf("\nb-) 180 graus");
                    printf("\nc-) 270 graus");
                    printf("\nd-) 360 graus");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    compq1m = 1;

                    printf("\n\nParabéns! Você completou o Quizzr Classic na dificuldade Média! Sua pontuação foi de: %d", pont);
                    printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                    scanf("%s", &cont);
                    if (cont == 's' || cont == 'S')
                    {
                        pont = 0;
                        goto menu;
                    }
                    else
                        goto fim;
                    break;
                    break;

                case 3:
                    pont = 0;
                    vida = 1;
                    system("cls");
                    printf("\n\t\tAVISO:");
                    printf("\n\nNessa dificuldade as perguntas são mais difíceis, porém, você só tem UMA chance. Se perder já era!\n\n\n");
                    system("pause");
                    system("cls");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");
                    printf("\n1 - Quem foi o autor do famoso livro 'Crime e Castigo'?");
                    printf("\n\n\na-) Fyodor Dostoyevsky");
                    printf("\nb-) Leo Tolstoy");
                    printf("\nc-) Franz Kafka");
                    printf("\nd-) James Joyce");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }

                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n2 - Qual é a capital da Austrália?");
                    printf("\n\n\na-) Sydney");
                    printf("\nb-) Melbourne");
                    printf("\nc-) Canberra");
                    printf("\nd-) Brisbane");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n3 - Qual é o nome da pintura que retrata a deusa grega Afrodite emergindo do mar?");
                    printf("\n\n\na-) A Última Ceia");
                    printf("\nb-) O Nascimento de Vênus");
                    printf("\nc-) O Mergulho de Afrodite");
                    printf("\nd-) A Mona Lisa");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        vida = vida - 1;
                        pont = pont;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n4 - Qual é a velocidade da luz no vácuo?");
                    printf("\n\n\na-) 100.000 km/h");
                    printf("\nb-) 299.792 km/s");
                    printf("\nc-) 299.792 km/h");
                    printf("\nd-) 186.282 milhas/s");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'b' || resp == 'B')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n5 - Quem é o autor do livro '1984'?");
                    printf("\n\n\na-) George Orwell");
                    printf("\nb-) Aldous Huxley");
                    printf("\nc-) Ray Bradbury");
                    printf("\nd-) H.G. Wells");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n6 - Quem foi o líder político sul-africano e ativista contra o apartheid?");
                    printf("\n\n\na-) Martin Luther King Jr.");
                    printf("\nb-) Winston Churchill");
                    printf("\nc-) Mahatma Gandhi");
                    printf("\nd-) Nelson Mandela");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'd' || resp == 'D')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n7 - Qual é o maior deserto do mundo?");
                    printf("\n\n\na-) Deserto do Saara");
                    printf("\nb-) Deserto de Gobi");
                    printf("\nc-) Deserto da Antártica");
                    printf("\nd-) Deserto de Atacama");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n8 - Qual é o nome da nave espacial que levou o primeiro homem à Lua?");
                    printf("\n\n\na-) Challenger");
                    printf("\nb-) Soyuz");
                    printf("\nc-) Apollo 11");
                    printf("\nd-) Discovery");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'c' || resp == 'C')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n9 - Quem é o autor da teoria da evolução das espécies?");
                    printf("\n\n\na-) Charles Darwin");
                    printf("\nb-) Gregor Mendel");
                    printf("\nc-) Louis Pasteur");
                    printf("\nd-) Marie Curie");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'a' || resp == 'A')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                    printf("\n10 - Qual é o nome do famoso físico teórico que propôs a teoria das cordas?");
                    printf("\n\n\na-) Stephen Hawking");
                    printf("\nb-) Albert Einstein");
                    printf("\nc-) Richard Feynman");
                    printf("\nd-) Brian Greene");
                    printf("\n\nQual é a alternativa correta?: ");
                    scanf("%s", &resp);
                    if (resp == 'd' || resp == 'D')
                    {
                        system("cls");
                        system("color 2f");
                        system("color f2");
                        system("color 2f");
                        printf("\n\nAcertou!!");
                        Beep(450, 300);
                        Sleep(100);
                        Beep(550, 300);
                        Sleep(100);
                        Beep(700, 980);
                        pont = pont + 50;
                    }
                    else
                    {
                        system("cls");
                        system("color 4f");
                        system("color f4");
                        system("color 4f");
                        printf("\n\nErrou..");
                        Beep(400, 300);
                        Sleep(100);
                        Beep(375, 300);
                        Sleep(100);
                        Beep(350, 980);
                        pont = pont;
                        vida = vida - 1;
                        if (vida < 1)
                        {

                            system("cls");
                            system("color 02");
                            printf("Acabaram suas vidas...  :(\n\n");
                            printf("FIM DE JOGO.");
                            printf("Deseja voltar ao menu principal? (s/n)");
                            scanf("%s", &cont);
                            if (cont == 's')
                                goto menu;
                            else
                                goto fim;
                        }
                    }
                    printf("\n\n\n");
                    system("pause");
                    system("cls");
                    system("color 02");
                    compq1d = 1;

                    printf("\n\nParabéns! Você completou o Quizzr Classic na dificuldade Difícil! Sua pontuação foi de: %d", pont);
                    printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                    scanf("%s", &cont);
                    if (cont == 's' || cont == 'S')
                    {
                        pont = 0;
                        goto menu;
                    }
                    else
                        goto fim;
                    break;
                }
            case 2:
                if (compq1f == 0 && compq1m == 0 && compq1d == 0)
                {
                    printf("\nPeraí! Complete o Quizzr Classic na dificuldade Fácil para liberar outros Quizzr's!");
                    getch();
                    goto quizes;
                }
                else
                {
                dificuldade2:
                    system("cls");
                    printf("Seleciona a dificuldade:\n\n\t 1 - Fácil \n\n\t 2 - Médio \n\n\t 3 - Difícil\n\n\t Opção: ");
                    scanf("%d", &opc);
                    switch (opc)
                    {
                    case 1:
                        pont = 0;
                        vida = 3;
                        system("cls");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        printf("\n1 - Qual é o nome do protagonista da série 'Breaking Bad'?");
                        printf("\n\n\na-) Jesse Pinkman");
                        printf("\nb-) Walter Blanco");
                        printf("\nc-) Walter White");
                        printf("\nd-) Gustavo Fring");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'c' || resp == 'C')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                        }

                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");

                        printf("\n2 - Qual é o nome do protagonista da trilogia 'O Senhor dos Anéis'?");
                        printf("\n\n\na-) Bilbo Bolseiro");
                        printf("\nb-) Frodo Bolseiro");
                        printf("\nc-) Gandalf");
                        printf("\nd-) Saruman");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n3 -  Em que ano foi lançado o primeiro filme da saga 'Star Wars'?");
                        printf("\n\n\na-) 1980");
                        printf("\nb-) 1978");
                        printf("\nc-) 1976");
                        printf("\nd-) 1977");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'd' || resp == 'D')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            vida = vida - 1;
                            pont = pont;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n4 - Qual é o nome da série que se passa no reino fictício de Westeros?");
                        printf("\n\n\na-) Westworld");
                        printf("\nb-) Game of Thrones");
                        printf("\nc-) Stranger Things");
                        printf("\nd-) Os Simpsons");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n5 - Quem interpreta Tony Stark, o Homem de Ferro, no Universo Cinematográfico Marvel?");
                        printf("\n\n\na-) Robert Downey Jr");
                        printf("\nb-) Robert Downey Sr");
                        printf("\nc-) Chris Evans");
                        printf("\nd-) Tom Holland");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n6 - Qual é o nome do personagem principal da série 'Sherlock'?");
                        printf("\n\n\na-) James Bond");
                        printf("\nb-) Enola Holmes");
                        printf("\nc-) Sherlock Holmes");
                        printf("\nd-) Watson");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'c' || resp == 'C')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n7 - Qual é o nome do primeiro filme da franquia 'Harry Potter'?");
                        printf("\n\n\na-) Harry Potter e a Pedra Filosofal");
                        printf("\nb-) Harry Potter e a Câmara Secreta");
                        printf("\nc-) Harry Potter e o Prisioneiro de Azkaban");
                        printf("\nd-) Harry Potter 1");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n8 - Quem é o diretor dos filmes da trilogia 'O Poderoso Chefão'?");
                        printf("\n\n\na-) Francis Ford Coppola");
                        printf("\nb-) Stanley Kubrick");
                        printf("\nc-) Spike Lee");
                        printf("\nd-) Martin Scorsese");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n9 - Qual é o nome da série em que os personagens enfrentam desafios e enigmas em uma dimensão alternativa chamada 'Mundo Invertido'?");
                        printf("\n\n\na-) Stranger Stuffs");
                        printf("\nb-) Stranger Things");
                        printf("\nc-) The Upside Down");
                        printf("\nd-) Friends");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");
                        printf("\n10 - Qual é o nome do agente secreto da franquia de filmes '007'?");
                        printf("\n\n\na-) James Bond");
                        printf("\nb-) Ethan Hunt");
                        printf("\nc-) Jack Bauer");
                        printf("\nd-) Agente 47");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        compq2f = 1;
                        printf("\n\nParabéns! Você completou o Quizzr Films na dificuldade Fácil! Sua pontuação foi de: %d", pont);
                        printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                        scanf("%s", &cont);
                        if (cont == 's' || cont == 'S')
                        {
                            pont = 0;
                            goto menu;
                        }
                        else
                            goto fim;
                        break;
                    case 2:
                        pont = 0;
                        vida = 3;
                        system("cls");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        printf("\n1 - Qual é o nome da atriz que interpreta Daenerys Targaryen em 'Game of Thrones'?");
                        printf("\n\n\na-) Emilia Clarke");
                        printf("\nb-) Emma Watson");
                        printf("\nc-) Emma Stone");
                        printf("\nd-) Mary Stoichkov");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                        }

                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");

                        printf("\n2 - Qual é o nome da cidade onde se passa a série 'Stranger Things'?");
                        printf("\n\n\na-) Boston");
                        printf("\nb-) Bondkins");
                        printf("\nc-) Chicago");
                        printf("\nd-) Hawkins");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'd' || resp == 'D')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n3 -  Qual é o nome do primeiro filme da saga 'Star Wars' lançado em 1977?");
                        printf("\n\n\na-) Episódio I - A Ameaça Fantasma");
                        printf("\nb-) Epiódio IV - O Retorno do Jedi");
                        printf("\nc-) Episódio IV - Uma Nova Esperança");
                        printf("\nd-) Episódio IV - O Império Contra-Atava");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'c' || resp == 'C')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            vida = vida - 1;
                            pont = pont;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n4 - Qual é o nome do personagem interpretado por Johnny Depp na série de filmes 'Piratas do Caribe'?");
                        printf("\n\n\na-) Jack Sparrow");
                        printf("\nb-) Davy Jones");
                        printf("\nc-) Edward Kenway");
                        printf("\nd-) Percival");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n5 - Qual é o nome do filme de Christopher Nolan que se passa em um sonho compartilhado?");
                        printf("\n\n\na-) O Sonho");
                        printf("\nb-) A Origem");
                        printf("\nc-) O Regresso");
                        printf("\nd-) O Sono Eterno");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n6 - Qual é o nome da série de televisão baseada nos livros de George R.R. Martin?");
                        printf("\n\n\na-) Game of Thrones");
                        printf("\nb-) Game of Swords");
                        printf("\nc-) Westeros");
                        printf("\nd-) Breaking Bad");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n7 - Qual é o nome da atriz que interpreta Katniss Everdeen na série de filmes 'Jogos Vorazes'?");
                        printf("\n\n\na-) Jennifer Lopez");
                        printf("\nb-) Jennifer Anniston");
                        printf("\nc-) Jennifer Lawrance");
                        printf("\nd-) Bruna Marquezine");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'c' || resp == 'C')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n8 - Qual é o nome da nave espacial central na franquia 'Star Trek'?");
                        printf("\n\n\na-) USS Incorporated");
                        printf("\nb-) USS Enterprise");
                        printf("\nc-) Titanic");
                        printf("\nd-) Millenium Falcon");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                        printf("\n9 - Qual é o nome da série que se passa em uma prisão de segurança máxima chamada Litchfield?");
                        printf("\n\n\na-) Prison Break");
                        printf("\nb-) Breaking Prison");
                        printf("\nc-) Prison Breaking");
                        printf("\nd-) Orange is the New Black");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'd' || resp == 'D')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        if (vida == 3)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                        if (vida == 2)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                        if (vida == 1)
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");
                        printf("\n10 - Qual é o nome do diretor do filme 'Clube da Luta'?");
                        printf("\n\n\na-) David Fincher");
                        printf("\nb-) Quentin Tarantino");
                        printf("\nc-) Christopher Nolan");
                        printf("\nd-) Jordan Peele");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        compq2m = 1;

                        printf("\n\nParabéns! Você completou o Quizzr Films na dificuldade Média! Sua pontuação foi de: %d", pont);
                        printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                        scanf("%s", &cont);
                        if (cont == 's' || cont == 'S')
                        {
                            pont = 0;
                            goto menu;
                        }
                        else
                            goto fim;
                        break;
                        break;

                    case 3:
                        pont = 0;
                        vida = 1;
                        system("cls");
                        printf("\n\t\tAVISO:");
                        printf("\n\nNessa dificuldade as perguntas são mais difíceis, porém, você só tem UMA chance. Se perder já era!\n\n\n");
                        system("pause");
                        system("cls");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");
                        printf("\n1 - Qual filme de Stanley Kubrick é conhecido por sua abordagem controversa e violenta sobre a guerra do Vietnã?");
                        printf("\n\n\na-) 2001: Uma Odisséia no Espaço");
                        printf("\nb-) Laranja Mecânica");
                        printf("\nc-) Full Metal Jacket");
                        printf("\nd-) O Iluminado");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'c' || resp == 'C')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }

                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n2 - Qual filme ganhou o Oscar de Melhor Filme em 1994?");
                        printf("\n\n\na-) Pulp Fiction: Tempo de Violência");
                        printf("\nb-) Forrest Gump: O Contador de Histórias");
                        printf("\nc-) O Rei Leão");
                        printf("\nd-) O Piano");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n3 - Quem dirigiu o filme 'Cidadão Kane' (1941)?");
                        printf("\n\n\na-) Alfred Hitchcock");
                        printf("\nb-) Francis Ford Coppola");
                        printf("\nc-) Steven Spielberg");
                        printf("\nd-) Orson Welles");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'd' || resp == 'D')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            vida = vida - 1;
                            pont = pont;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n4 - Qual é o título original da série de TV conhecida como 'Game of Thrones'?");
                        printf("\n\n\na-) A Song of Ice and Fire");
                        printf("\nb-) The Seven Kingdoms");
                        printf("\nc-) The Iron Throne");
                        printf("\nd-) Game of Thrones");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n5 - Qual é o nome do personagem interpretado por Heath Ledger no filme 'Batman: O Cavaleiro das Trevas'?");
                        printf("\n\n\na-) Harvey Dent / Duas-Caras");
                        printf("\nb-) James Gordon");
                        printf("\nc-) Bruce Wayne / Batman");
                        printf("\nd-) Coringa");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'd' || resp == 'D')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n6 - Qual é o nome da série de TV que acompanha a vida de uma família do crime organizado em Birmingham, na Inglaterra, no pós-Primeira Guerra Mundial?");
                        printf("\n\n\na-) The Sopranos");
                        printf("\nb-) Mirashin no Jutsu");
                        printf("\nc-) Sons of Anarchy");
                        printf("\nd-) Peaky Blinders");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'd' || resp == 'D')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n7 - Qual é o nome da série de TV de ficção científica que segue a vida de um grupo de pessoas que tenta sobreviver em um mundo pós-apocalíptico após uma guerra nuclear?");
                        printf("\n\n\na-) The 100");
                        printf("\nb-) Lost");
                        printf("\nc-) The Expanse");
                        printf("\nd-) The Walking Dead");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n8 - Qual é o nome do filme dirigido por Quentin Tarantino que se passa durante a Segunda Guerra Mundial e apresenta uma história fictícia de vingança?");
                        printf("\n\n\na-) Kill Bill: Volume 1");
                        printf("\nb-) Pulp Fiction");
                        printf("\nc-) Bastardos Inglórios");
                        printf("\nd-) Django Livre");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'c' || resp == 'C')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n9 - Qual é o nome do filme de Stanley Kubrick que se passa em uma nave espacial e apresenta um computador chamado HAL 9000?");
                        printf("\n\n\na-) Laranja Mecânica");
                        printf("\nb-) 2001: Uma Odisséia no Espaço");
                        printf("\nc-) O Iluminado");
                        printf("\nd-) Nascido para Matar");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'b' || resp == 'B')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                        printf("\n10 - Qual é o nome do filme de Martin Scorsese que retrata a vida de um boxeador autodestrutivo?");
                        printf("\n\n\na-) Touro Indomável");
                        printf("\nb-) Os Bons Companheiros");
                        printf("\nc-) Cassino");
                        printf("\nd-) O Lobo de Wall Street");
                        printf("\n\nQual é a alternativa correta?: ");
                        scanf("%s", &resp);
                        if (resp == 'a' || resp == 'A')
                        {
                            system("cls");
                            system("color 2f");
                            system("color f2");
                            system("color 2f");
                            printf("\n\nAcertou!!");
                            Beep(450, 300);
                            Sleep(100);
                            Beep(550, 300);
                            Sleep(100);
                            Beep(700, 980);
                            pont = pont + 50;
                        }
                        else
                        {
                            system("cls");
                            system("color 4f");
                            system("color f4");
                            system("color 4f");
                            printf("\n\nErrou..");
                            Beep(400, 300);
                            Sleep(100);
                            Beep(375, 300);
                            Sleep(100);
                            Beep(350, 980);
                            pont = pont;
                            vida = vida - 1;
                            if (vida < 1)
                            {

                                system("cls");
                                system("color 02");
                                printf("Acabaram suas vidas...  :(\n\n");
                                printf("FIM DE JOGO.");
                                printf("Deseja voltar ao menu principal? (s/n)");
                                scanf("%s", &cont);
                                if (cont == 's')
                                    goto menu;
                                else
                                    goto fim;
                            }
                        }
                        printf("\n\n\n");
                        system("pause");
                        system("cls");
                        system("color 02");
                        compq2d = 1;

                        printf("\n\nParabéns! Você completou o Quizzr Anime na dificuldade Difícil! Sua pontuação foi de: %d", pont);
                        printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                        scanf("%s", &cont);
                        if (cont == 's' || cont == 'S')
                        {
                            pont = 0;
                            goto menu;
                        }
                        else
                            goto fim;
                        break;
                    }
                case 3:
                    if (compq1f == 0 && compq1m == 0 && compq1d == 0 )
                    {
                        printf("\nPeraí! Complete o Quizzr Classic na dificuldade Fácil para liberar outros Quizzr's!");
                        getch();
                        goto quizes;
                    }
                    else
                    {
                    dificuldade3:
                        system("cls");
                        printf("Seleciona a dificuldade:\n\n\t 1 - Fácil \n\n\t 2 - Médio \n\n\t 3 - Difícil\n\n\t Opção: ");
                        scanf("%d", &opc);
                        switch (opc)
                        {
                        case 1:
                            pont = 0;
                            vida = 3;
                            system("cls");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            printf("\n1 - Qual é o nome do protagonista em 'One Piece'?");
                            printf("\n\n\na-) Portgas D. Ace");
                            printf("\nb-) Sasuke Uchiha");
                            printf("\nc-) Roronoa Zoro");
                            printf("\nd-) Monkey D. Luffy");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                            }

                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");

                            printf("\n2 -  Em 'Naruto', qual é o nome do sensei de Naruto, Sasuke e Sakura?");
                            printf("\n\n\na-) Madara Uchiha");
                            printf("\nb-) Hiruzen Sarutobi");
                            printf("\nc-) Kakashi Hatake");
                            printf("\nd-) Minato Namikaze");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'c' || resp == 'C')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n3 -  Qual é o nome do robô gigante pilotado por Shinji em 'Neon Genesis Evangelion'?");
                            printf("\n\n\na-) Robô Ed");
                            printf("\nb-) Evangelion Unit-01");
                            printf("\nc-) Chat GPT");
                            printf("\nd-) Evangelion Unit-02");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                vida = vida - 1;
                                pont = pont;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n4 - Qual é o nome da protagonista em 'Sailor Moon'?");
                            printf("\n\n\na-) Usagi Tsukino");
                            printf("\nb-) Sailor Moon");
                            printf("\nc-) Rei Hino");
                            printf("\nd-) Minako Aino");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n5 - Qual é o nome do personagem principal em 'Pokémon'?");
                            printf("\n\n\na-) Red");
                            printf("\nb-) Ash Ketchum");
                            printf("\nc-) Gary");
                            printf("\nd-) Equipe Rocket");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n6 - Em 'Death Note', qual é o nome do detetive que tenta capturar Light Yagami?");
                            printf("\n\n\na-) Ryuk");
                            printf("\nb-) Misa Amane");
                            printf("\nc-) Sherlock");
                            printf("\nd-) L");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n7 - Em 'Dragon Ball', qual é a transformação mais poderosa de Goku?");
                            printf("\n\n\na-) Super Sayajin Blue");
                            printf("\nb-) Super Sayajin Green");
                            printf("\nc-) Super Sayajin");
                            printf("\nd-) Super Sayajin 3");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n8 - Qual é o nome da cidade em que se passa a história de 'Attack on Titan'?");
                            printf("\n\n\na-) Konohagakure");
                            printf("\nb-) Yokohama");
                            printf("\nc-) Tokyo");
                            printf("\nd-) Shiganshina");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n9 - Em 'Fullmetal Alchemist', qual é o nome dos irmãos protagonistas?");
                            printf("\n\n\na-) Fullmetal Brothers");
                            printf("\nb-) Edward e Alphonse Elric");
                            printf("\nc-) João e Maria");
                            printf("\nd-) Gaara e Kankuro");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");
                            printf("\n10 - Qual é o nome da criatura em 'As Aventuras de Chihiro'?");
                            printf("\n\n\na-) Chihiro");
                            printf("\nb-) Yuko Ogino");
                            printf("\nc-) No-Face");
                            printf("\nd-) Yubaba");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'c' || resp == 'C')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            compq3f = 1;
                            printf("\n\nParabéns! Você completou o Quizzr Anime na dificuldade Fácil! Sua pontuação foi de: %d", pont);
                            printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                            scanf("%s", &cont);
                            if (cont == 's' || cont == 'S')
                            {
                                pont = 0;
                                goto menu;
                            }
                            else
                                goto fim;
                            break;
                        case 2:
                            pont = 0;
                            vida = 3;
                            system("cls");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            printf("\n1 - Quem é o criador original do mangá 'One Piece'?");
                            printf("\n\n\na-) Yasuke Oda");
                            printf("\nb-) Michiro Oda");
                            printf("\nc-) Eiichiro Oda");
                            printf("\nd-) Masashi Kishimoto");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'c' || resp == 'C')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                            }

                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");

                            printf("\n2 - Em 'Naruto', qual é o nome da técnica proibida que permite ao usuário controlar os corpos de outras pessoas?");
                            printf("\n\n\na-) Chibaku Tensei");
                            printf("\nb-) Edo Tensei");
                            printf("\nc-) Rinne Tensei");
                            printf("\nd-) Izanagi");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n3 -  Qual é o nome da espada utilizada pelo protagonista em 'Sword Art Online'?");
                            printf("\n\n\na-) Elucidator");
                            printf("\nb-) Sword Art");
                            printf("\nc-) Katana");
                            printf("\nd-) Excalibur");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                vida = vida - 1;
                                pont = pont;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n4 -Em 'Fullmetal Alchemist: Brotherhood', qual é o nome do homúnculo que representa o pecado da Ganância?");
                            printf("\n\n\na-) Selim");
                            printf("\nb-) Lust");
                            printf("\nc-) Envy");
                            printf("\nd-) Greed");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n5 -Qual é o nome da espada usada por Roronoa Zoro em 'One Piece'");
                            printf("\n\n\na-) Kiribachi");
                            printf("\nb-) Wado Ichimonji");
                            printf("\nc-) Shigure");
                            printf("\nd-) Eisen Whip");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n6 - Qual é o nome do personagem principal em 'Cowboy Bebop'?");
                            printf("\n\n\na-) Spike Lee");
                            printf("\nb-) Spike Kagure");
                            printf("\nc-) Spike Seagal");
                            printf("\nd-) Spike Siegel");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n7 - Em 'Tokyo Ghoul', qual é o nome do protagonista que se torna meio-humano, meio-ghoul??");
                            printf("\n\n\na-) Bren Kaneki");
                            printf("\nb-) Zhen Kaneki");
                            printf("\nc-) Ken Kaneki");
                            printf("\nd-) Kaneki");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'c' || resp == 'C')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n8 - Qual é, atualmente, o nome do navio principal dos Piratas do Chapéu de Palha?");
                            printf("\n\n\na-) Thousand Sunny");
                            printf("\nb-) Going Merry");
                            printf("\nc-) Thousand Merry");
                            printf("\nd-) Going Sunny");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");

                            printf("\n9 - Em 'My Hero Academia', qual é o nome do personagem que herda o poder de All Might?");
                            printf("\n\n\na-) Toshinori Yagi");
                            printf("\nb-) Izuku Midoriya");
                            printf("\nc-) Katsuki Bakugo");
                            printf("\nd-) Ochaco Uraka");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            if (vida == 3)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X | X |");
                            if (vida == 2)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X | X |   |");
                            if (vida == 1)
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |   |   |");
                            printf("\n10 - Em 'One Piece' qual destas opções NÃO representa uma recompensa do personagem Tony Tony Chopper?");
                            printf("\n\n\na-) 50 berries");
                            printf("\nb-) 10.000 berries");
                            printf("\nc-) 1.000 berries");
                            printf("\nd-) 100 berries");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'b' || resp == 'B')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            compq3m = 1;

                            printf("\n\nParabéns! Você completou o Quizzr Anime na dificuldade Média! Sua pontuação foi de: %d", pont);
                            printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                            scanf("%s", &cont);
                            if (cont == 's' || cont == 'S')
                            {
                                pont = 0;
                                goto menu;
                            }
                            else
                                goto fim;
                            break;
                            break;

                        case 3:
                            pont = 0;
                            vida = 1;
                            system("cls");
                            printf("\n\t\tAVISO:");
                            printf("\n\nNessa dificuldade as perguntas são mais difíceis, porém, você só tem UMA chance. Se perder já era!\n\n\n");
                            system("pause");
                            system("cls");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");
                            printf("\n1 - No anime 'Code Geass', qual é o nome do personagem que recebe o poder do 'Geass'?");
                            printf("\n\n\na-) C.C.");
                            printf("\nb-) Susaku Kururugi");
                            printf("\nc-) Shirley Fenette");
                            printf("\nd-) Lelouch Lamperouge");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }

                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n2 - Em 'Attack on Titan', qual é o nome do líder da Tropa de Exploração?");
                            printf("\n\n\na-) Levi Ackerman");
                            printf("\nb-) Mikasa Ackerman");
                            printf("\nc-) Erwin Smith");
                            printf("\nd-) Armin Arlet");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'c' || resp == 'C')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n3 - Em 'Fullmetal Alchemist: Brotherhood', qual é o nome do pai dos protagonistas Edward e Alphonse Elric?");
                            printf("\n\n\na-) Van Hohenheim");
                            printf("\nb-) Van Horhenheim");
                            printf("\nc-) Van Homhenheim");
                            printf("\nd-) Van Henhonheim");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                vida = vida - 1;
                                pont = pont;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n4 - Quem é o autor do mangá 'Death Note'?");
                            printf("\n\n\na-) Kenjiro Hata");
                            printf("\nb-) Yana Toboso");
                            printf("\nc-) Takeshi Konomi");
                            printf("\nd-) Tsugumi Ohba");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n5 - Em 'Bleach', qual é o nome da zanpakutou de Ichigo Kurosaki'");
                            printf("\n\n\na-) Uchikudake");
                            printf("\nb-) Kanadero");
                            printf("\nc-) Zangetsu");
                            printf("\nd-) Futtobase");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'c' || resp == 'C')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n6 - Em 'Naruto Shippuden', qual é o nome da técnica usada por Minato Namikaze para teleportar-se instantaneamente?");
                            printf("\n\n\na-) Kagebushin no Jutsu");
                            printf("\nb-) Mirashin no Jutsu");
                            printf("\nc-) Kirashin no Jutsu");
                            printf("\nd-) Hirashin no Jutsu");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n7 - Em 'Death Note', qual destes NÃO recebeu o título de Kira?");
                            printf("\n\n\na-) Misa Amane");
                            printf("\nb-) Kyosuke Higuchi");
                            printf("\nc-) Light Yagami");
                            printf("\nd-) Jack Neylon");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n8 - Qual é o nome do estúdio de animação responsável pela produção do filme 'Your Name.'?");
                            printf("\n\n\na-) CoMix Wave Films");
                            printf("\nb-) Studio Ghibli");
                            printf("\nc-) Madhouse");
                            printf("\nd-) Ufotable");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n9 - Qual é o nome do personagem conhecido como o 'Espadachim Negro' em 'Berserk'?");
                            printf("\n\n\na-) Griffith");
                            printf("\nb-) Void");
                            printf("\nc-) Grunbeld");
                            printf("\nd-) Guts");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'd' || resp == 'D')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPontuação: %d", pont);
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Vidas : | X |");

                            printf("\n10 - Qual o nome do primeiro anime da história?");
                            printf("\n\n\na-) Katsudō Shashin");
                            printf("\nb-) Namakura Gatana");
                            printf("\nc-) Urashima Tarō");
                            printf("\nd-) Nakamura Katana");
                            printf("\n\nQual é a alternativa correta?: ");
                            scanf("%s", &resp);
                            if (resp == 'a' || resp == 'A')
                            {
                                system("cls");
                                system("color 2f");
                                system("color f2");
                                system("color 2f");
                                printf("\n\nAcertou!!");
                                Beep(450, 300);
                                Sleep(100);
                                Beep(550, 300);
                                Sleep(100);
                                Beep(700, 980);
                                pont = pont + 50;
                            }
                            else
                            {
                                system("cls");
                                system("color 4f");
                                system("color f4");
                                system("color 4f");
                                printf("\n\nErrou..");
                                Beep(400, 300);
                                Sleep(100);
                                Beep(375, 300);
                                Sleep(100);
                                Beep(350, 980);
                                pont = pont;
                                vida = vida - 1;
                                if (vida < 1)
                                {

                                    system("cls");
                                    system("color 02");
                                    printf("Acabaram suas vidas...  :(\n\n");
                                    printf("FIM DE JOGO.");
                                    printf("Deseja voltar ao menu principal? (s/n)");
                                    scanf("%s", &cont);
                                    if (cont == 's')
                                        goto menu;
                                    else
                                        goto fim;
                                }
                            }
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            system("color 02");
                            compq3d = 1;

                            printf("\n\nParabéns! Você completou o Quizzr Anime na dificuldade Difícil! Sua pontuação foi de: %d", pont);
                            printf("\n\n\nDeseja voltar ao menu? (s/n): ");
                            scanf("%s", &cont);
                            if (cont == 's' || cont == 'S')
                            {
                                pont = 0;
                                goto menu;
                            }
                            else
                                goto fim;
                            break;
                            break;
                        }
                    }
                default:
                    printf("Por favor, selecione uma opção válida.\n\n\n");
                    system("pause");
                    goto quizes;
                }
            }
        }
    case 3:
    conquistas:
        system("cls");
        printf("Conquistas:");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\n             ___________");
        printf("\n            '._==_==_=_.'");
        printf("\n            .-\:      /-.");
        printf("\n           | (|:.     |) |");
        printf("\n            '-|:.     |-'");
        printf("\n              \::.    /");
        printf("\n               '::. .'");
        printf("\n                 ) (");
        printf("\n               _.' '._");
        printf("\n              `''''''''");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        if (compq1d == 1 && compq1f == 1 && compq1m == 1 && compq2d == 1 && compq2f == 1 && compq2m == 1 && compq3d == 1 && compq3f == 1 && compq3m == 1 )
            printf("\n\n\t CONQUISTA SECRETA: \n\n\t Tudólogo - Complete TODOS os Quizzrs em TODAS as dificuldades. ");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\n\n\t 1 - Conquistas Quizzr Classic \n\n\t 2 - Conquistas Quizzr Films \n\n\t 3 - Conquistas Quizzr Anime\n\n\n\t 4 - Voltar ao menu principal \n\n\n\n\t Selecione sua opção: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            system("cls");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\n             ___________");
            printf("\n            '._==_==_=_.'");
            printf("\n            .-\:      /-.");
            printf("\n           | (|:.     |) |");
            printf("\n            '-|:.     |-'");
            printf("\n              \::.    /");
            printf("\n               '::. .'");
            printf("\n                 ) (");
            printf("\n               _.' '._");
            printf("\n              `''''''''");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            if (compq1d == 0 && compq1f == 0 && compq1m == 0)
            {
                printf("\n\n\tOps... Parece que você não completou nenhuma conquista ainda... Complete o Quizzr Classic na dificuldade 'Fácil' para receber uma conquista!");
                printf("\n\n\n");
            }
            if (compq1f == 1)
                printf("\n\n\tSó o básico - Complete o Quizzr Classic na dificuldade fácil.\n\n\n");
            if (compq1m == 1)
                printf("\tAprendiz de sabe tudo -  Complete o Quizzr Classic na dificuldade média.\n\n\n");
            if (compq1d == 1)
                printf("\tUm ja foi, faltam dois - Complete o Quizzr Classic na dificuldade difícil.\n\n\n");
            system("pause");
            goto conquistas;
            break;
        case 2:
            system("cls");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\n             ___________");
            printf("\n            '._==_==_=_.'");
            printf("\n            .-\:      /-.");
            printf("\n           | (|:.     |) |");
            printf("\n            '-|:.     |-'");
            printf("\n              \::.    /");
            printf("\n               '::. .'");
            printf("\n                 ) (");
            printf("\n               _.' '._");
            printf("\n              `''''''''");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            if (compq2d == 0 && compq2f == 0 && compq2m == 0)
            {
                printf("\n\n\tOps... Parece que você não completou nenhuma conquista ainda... Complete o Quizzr Films na dificuldade 'Fácil' para receber uma conquista!");
                printf("\n\n\n");
            }
            if (compq2f == 1)
                printf("\n\n\tComeçando os trabalhos - Complete o Quizzr Films na dificuldade fácil.\n\n\n");
            if (compq2m == 1)
                printf("\tTá indo bem -  Complete o Quizzr Films na dificuldade média.\n\n\n");
            if (compq2d == 1)
                printf("\tSimplesmente um cinéfilo - Complete o Quizzr Films na dificuldade difícil.\n\n\n");
            system("pause");
            goto conquistas;

            break;
        case 3:
            system("cls");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\n             ___________");
            printf("\n            '._==_==_=_.'");
            printf("\n            .-\:      /-.");
            printf("\n           | (|:.     |) |");
            printf("\n            '-|:.     |-'");
            printf("\n              \::.    /");
            printf("\n               '::. .'");
            printf("\n                 ) (");
            printf("\n               _.' '._");
            printf("\n              `''''''''");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
            if (compq3d == 0 && compq3f == 0 && compq3m == 0)
            {

                printf("\n\n\tOps... Parece que você não completou nenhuma conquista ainda... Complete o Quizzr Anime na dificuldade 'Fácil' para receber uma conquista!");
                printf("\n\n\n");
            }
            if (compq3f == 1)
                printf("\n\n\tMolezinha - Complete o Quizzr Anime na dificuldade fácil.\n\n\n");
            if (compq3m == 1)
                printf("\tTá sabendo legal - Complete o Quizzr Anime na dificuldade média.\n\n\n");

            if (compq3d == 1)
                printf("\tUm verdadeiro otaku! - Complete o Quizzr Anime na dificuldade difícil.\n\n\n");
            system("pause");
            goto conquistas;
            break;

        case 4:
            goto menu;
            break;
        default:
            break;
        }
        break;
    }

fim:
    system("cls");
    printf("****************FIM*DO*JOGO****************");
    printf("\n\nObrigado por jogar!\n\n\n\n\n\n\n\n\n");
    system("pause");
}
