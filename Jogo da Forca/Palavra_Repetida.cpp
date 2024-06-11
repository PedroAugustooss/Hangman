#pragma once

#include "Assinaturas.hpp"

inline bool Palavra_Repetida(std::string str, std::vector <std::string> palavras) {

    for (std::string aux : palavras) {

        if (aux == str) {

            std::cout << "\nEssa palavra ja consta no Banco de Dados! Tente outra..." << std::endl;

            return true;
        }
    }

    return false;
}