#pragma once

#include "Assinaturas.hpp"

inline void Pega_Chute(std::vector <char>& chutes_dados) {

    char letra;

    do {

        std::cout << "\n\nEscolha uma letra: ";
        std::cin >> letra;

    } while (Letra_Repetida(toupper(letra), chutes_dados));

    chutes_dados.push_back(toupper(letra));

    if (letra == SAIR) {

        exit(0);
    }

    std::cout << std::endl;
}