#pragma once

#include "Assinaturas.hpp"

inline void Desenha_Forca(std::string& palavra_secreta, std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados) {

    for (char letra : palavra_secreta) {

        if (Letra_Existe(letra, chutes_dados)) {

            std::cout << letra << " ";

        }
        else {

            std::cout << "_ ";
        }
    }

    std::cout << "\n\nLetras erradas: ";

    for (char erros : chutes_errados) {

        std::cout << erros << " ";
    }
}