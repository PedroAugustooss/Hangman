#pragma once

#include "Assinaturas.hpp"

inline bool Letra_Repetida(char chute, const std::vector <char>& chutes_dados) {

    for (char chutes : chutes_dados) {

        if (chute == chutes) {

            std::cout << "\nEssa letra ja foi chutada, tente outra..." << std::endl;

            return true;
        }
    }

    return false;
}