#pragma once

#include "Assinaturas.hpp"

inline void Desenha_Simbolo(const bool& op, const std::string& palavra_secreta) {

    system("cls");

    if (op) {

        std::cout << "\nParabens, voce ganhou!\n" << std::endl;

        std::cout << "       ___________      " << std::endl;
        std::cout << "      '._==_==_=_.'     " << std::endl;
        std::cout << "      .-\\:      /-.    " << std::endl;
        std::cout << "     | (|:.     |) |    " << std::endl;
        std::cout << "      '-|:.     |-'     " << std::endl;
        std::cout << "        \\::.    /      " << std::endl;
        std::cout << "         '::. .'        " << std::endl;
        std::cout << "           ) (          " << std::endl;
        std::cout << "         _.' '._        " << std::endl;
        std::cout << "        '-------'       \n" << std::endl;

        std::cout << "\n\nA palavra secreta era: " << palavra_secreta << std::endl;

        Nova_Palavra();
    }
    else {

        std::cout << "\nPuxa, voce foi enforcado!" << std::endl;

        std::cout << "    _______________         " << std::endl;
        std::cout << "   /               \\       " << std::endl;
        std::cout << "  /                 \\      " << std::endl;
        std::cout << "//                   \\/\\  " << std::endl;
        std::cout << "\\|   XXXX     XXXX   | /   " << std::endl;
        std::cout << " |   XXXX     XXXX   |/     " << std::endl;
        std::cout << " |   XXX       XXX   |      " << std::endl;
        std::cout << " |                   |      " << std::endl;
        std::cout << " \\__      XXX      __/     " << std::endl;
        std::cout << "   |\\     XXX     /|       " << std::endl;
        std::cout << "   | |           | |        " << std::endl;
        std::cout << "   | I I I I I I I |        " << std::endl;
        std::cout << "   |  I I I I I I  |        " << std::endl;
        std::cout << "   \\_             _/       " << std::endl;
        std::cout << "     \\_         _/         " << std::endl;
        std::cout << "       \\_______/           " << std::endl;

        std::cout << "\n\nA palavra secreta era: " << palavra_secreta << std::endl;
    }
}