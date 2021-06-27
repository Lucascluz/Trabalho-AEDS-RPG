#include "Bibliotecas/accessdata.h"
#include "Bibliotecas/armas.h"
#include "Bibliotecas/character.h"

Armas::Armas(int idArma)
{
    string nomeArma;
    srand(time(0));

    int qtdAtributos = 2;
    Accessdata *arma = new Accessdata(qtdAtributos);

    switch(idArma){
        case 1:
            nomeArma = "besta.txt";
            this->nome = "Besta";
        break;
        case 2:
            nomeArma = "cajado.txt";
            this->nome = "Cajado";
        break;
        case 3:
            nomeArma = "esferaDeAtaque.txt";
            this->nome = "Esfera De Ataque";
        break;
        case 4:
            nomeArma = "espadaBarroca.txt";
            this->nome = "Espada Barroca";
        break;
        case 5:
            nomeArma = "garraLetal.txt";
            this->nome = "Garra Letal";
        break;
        case 6:
            nomeArma = "porrete.txt";
            this->nome = "Porrete";
        break;
        case 7:
            nomeArma = "tridenteSagrado.txt";
            this->nome = "Tridente Sagrado";
        break;
    }

    int *atributos = arma->obtemAtributos(nomeArma);
/*
    cout << atributos[0] << "\n";
    cout << atributos[1];
    cout << "\n--------------------------------------------\n";
*/
    this->armaMax = atributos[0];
    this->armaMin = atributos[1];
/*
    cout << this->armaMax;
    cout << this->armaMin;
*/
    delete arma;
    delete atributos;
};

int Armas::retornaDanoMax(){
    return this->armaMax;
}

int Armas::danoFisico()
{ 
    return this->armaMin + (rand() % this->armaMax - this->armaMin + 1);
};

void Armas::retornaValores(){
    cout << "\n--------------------------------------------\n"
         << "Max: " << this->armaMax << "\n"
         << "Min: " << this->armaMin << "\n";
};

/*
main {
    Pers *player
    player = f()
    int a = player.f();
    cout << io;
}

personagem.cpp 
    outro{
    int f(){
        gam *io
        cout <<"Vida:" << 
        return io
    }
}
*/