#pragma once

#include "Assinaturas.hpp"

inline void Estrutura_Forca(const int& erros) {

    std::cout << "  _______       " << std::endl;
    std::cout << " |/      |      " << std::endl;
    std::cout << " |      " << (erros >= 1 ? '(' : ' ') << (erros >= 1 ? '_' : ' ') << (erros >= 1 ? ')' : ' ') << "  " << std::endl;
    std::cout << " |      " << (erros >= 4 ? '\\' : ' ') << (erros >= 2 ? '|' : ' ') << (erros >= 5 ? '/' : ' ') << "  " << std::endl;
    std::cout << " |       " << (erros >= 3 ? '|' : ' ') << "     " << std::endl;
    std::cout << " |      " << (erros >= 6 ? '/' : ' ') << " " << (erros >= 7 ? '\\' : ' ') << "   " << std::endl;
    std::cout << " |              " << std::endl;
    std::cout << "_|___           \n\n" << std::endl;
}