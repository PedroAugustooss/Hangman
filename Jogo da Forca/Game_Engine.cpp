#pragma once

#include "Assinaturas.hpp"

inline void Loop_Jogo(std::string& palavra_secreta, std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados, int& indice) {

    bool trofeu = false;

    std::cout << "\nDigite '#' para sair.\n" << std::endl;

    while ((!Ganhou(palavra_secreta, chutes_dados, trofeu)) && (!Enforcou(palavra_secreta, chutes_dados, chutes_errados, indice))) {

        Desenha_Forca(palavra_secreta, chutes_dados, chutes_errados);

        Pega_Chute(chutes_dados);

        system("cls");
    }

    Desenha_Forca(palavra_secreta, chutes_dados, chutes_errados);

    Desenha_Simbolo(trofeu, palavra_secreta);
}