#pragma once

#include "Assinaturas.hpp"

inline void Nova_Palavra() {

    std::string op;

    std::cout << "\n\nDeseja adicionar uma nova palavra ao jogo?\n(Sim/Nao): ";
    std::cin >> op;

    if (toUpper(op) == "SIM") {

        Adiciona_Nova_Palavra();
    }
    else {

        std::cout << "\nObrigado por jogar!" << std::endl;
    }
}

inline void Adiciona_Nova_Palavra() {

    std::vector <std::string> palavras_arquivo = Armazena_Palavras();

    std::string str;

    do {

        std::cout << "\nDigite a nova palavra: ";
        std::cin >> str;
        str = toUpper(str);

    } while (Palavra_Repetida(str, palavras_arquivo));

    palavras_arquivo.push_back(str);

    Salva_Novo_Arquivo(palavras_arquivo);
}