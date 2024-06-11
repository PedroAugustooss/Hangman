#pragma once

#include "Assinaturas.hpp"

inline std::vector <std::string> Armazena_Palavras() {

    std::ifstream arquivo("Sorteio.txt");

    if (!arquivo.is_open()) {

        std::cout << "\nFalha ao abrir o Banco de Dados das palavras!" << std::endl;

        exit(0);
    }

    int qtd_palavras = 0;

    std::vector <std::string> aux;

    std::string palavra;

    arquivo >> qtd_palavras;

    for (int i = 0; i < qtd_palavras; i++) {

        arquivo >> palavra;

        aux.push_back(palavra);
    }

    arquivo.close();

    return aux;
}

inline std::string Escolhe_Palavra() {

    std::vector <std::string> palavras_arquivo = Armazena_Palavras();

    srand(time(NULL));

    return (palavras_arquivo[(rand() % palavras_arquivo.size())]);
}

inline void Salva_Novo_Arquivo(std::vector <std::string> nova_lista) {

    std::ofstream arquivo("Sorteio.txt");

    if (!arquivo.is_open()) {

        std::cout << "\nFalha ao abrir o Banco de Dados das palavras!" << std::endl;

        exit(0);
    }

    arquivo << nova_lista.size() << std::endl;

    for (std::string palavra : nova_lista) {

        arquivo << palavra << std::endl;
    }

    arquivo.close();

    system("cls");

    std::cout << "\nNova palavra adicionada com sucesso! Obrigado por jogar!" << std::endl;
}