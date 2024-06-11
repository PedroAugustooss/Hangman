#pragma once

#include "Assinaturas.hpp"

inline bool Enforcou(std::string& palavra_secreta, std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados, int& indice) {

    int erros = Chutes_Errados(palavra_secreta, chutes_dados, chutes_errados, indice);

    Estrutura_Forca(erros);

    //std::cout << "\nQuantidade de Erros: " << indice << "\n" << std::endl;

    if (indice == MAX_DE_ERROS) {

        return true;
    }

    return false;
}

inline bool Ganhou(const std::string& palavra_secreta, std::vector <char>& chutes_dados, bool& trofeu) {

    for (char letra : palavra_secreta) {

        if (!Letra_Existe(letra, chutes_dados)) {

            return false;
        }
    }

    trofeu = true;

    return true;
}