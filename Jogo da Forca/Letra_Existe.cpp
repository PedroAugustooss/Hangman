#pragma once

#include "Assinaturas.hpp"

inline bool Letra_Existe(char letra, const std::vector <char>& chutes_dados) {

    for (char chutes : chutes_dados) {

        if (letra == chutes) {

            return true;
        }
    }

    return false;
}