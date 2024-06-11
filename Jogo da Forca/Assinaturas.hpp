#pragma once

#define MAX_DE_ERROS 7
#define SAIR '#'

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

inline int Chutes_Errados(const std::string& palavra_secreta, const std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados, int& indice);

inline std::vector <std::string> Armazena_Palavras();

inline std::string Escolhe_Palavra();
inline std::string toUpper(std::string str);

inline void Menu();
inline void Desenha_Simbolo(const bool& op, const std::string& palavra_secreta);
inline void Pega_Chute(std::vector <char>& chutes_dados);
inline void Desenha_Forca(std::string& palavra_secreta, std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados);
inline void Loop_Jogo(std::string& palavra_secreta, std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados, int& indice);
inline void Estrutura_Forca(const int& erros);
inline void Nova_Palavra();
inline void Adiciona_Nova_Palavra();
inline void Salva_Novo_Arquivo(std::vector <std::string> nova_lista);

inline bool Letra_Repetida(char chute, const std::vector <char>& chutes_dados);
inline bool Letra_Existe(char letra, const std::vector <char>& chutes_dados);
inline bool Enforcou(std::string& palavra_secreta, std::vector <char>& chutes_dados, std::array <char, 7>& chutes_errados, int& indice);
inline bool Ganhou(const std::string& palavra_secreta, std::vector <char>& chutes_dados, bool& trofeu);
inline bool Palavra_Repetida(std::string str, std::vector <std::string> palavras);