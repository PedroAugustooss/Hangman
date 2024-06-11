#include "Assinaturas.hpp"
#include "ToUpper.cpp"
#include "Letra_Existe.cpp"
#include "Condicoes.cpp"
#include "Banco_Palavras.cpp"
#include "Nova_Palavra.cpp"
#include "Palavra_Repetida.cpp"
#include "Menu.cpp"
#include "Estrutura_Forca.cpp"
#include "Desenha_Simbolo.cpp"
#include "Letra_Repetida.cpp"
#include "Chutes_Errados.cpp"
#include "Desenha_Forca.cpp"
#include "Game_Engine.cpp"
#include "Pega_Chute.cpp"

using namespace std;

int main() {

    vector <char> chutes_dados;
    array <char, 7> chutes_errados = {};

    int indice = 0;

    string palavra_secreta = Escolhe_Palavra();

    Menu();

    Loop_Jogo(palavra_secreta, chutes_dados, chutes_errados, indice);

    return 0;
}