#pragma once

#include "Assinaturas.hpp"

inline int Chutes_Errados(const std::string& palavra_secreta, const std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados, int& indice) {

    int erros = 0;

    for (char chute : chutes_dados) {

        bool existe = false;

        for (char letra : palavra_secreta) {

            if (chute == letra) {

                existe = true;

                break;
            }
        }

        if (!existe) {

            erros++;

            for (char caracter : chutes_errados) {

                if (caracter == chute) {

                    existe = true;

                    break;
                }
            }

            if (!existe) {

                chutes_errados[indice++] = chute;
            }
        }
    }

    return erros;
}