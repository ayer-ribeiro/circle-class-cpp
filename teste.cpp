#include <iostream>
#include <cstdio>
#include "Circle.cpp"

using namespace std;

int main(){

    Position pos;
    pos.setX(13.5);
    pos.setY(12.2);
    cout << "X d'a posicao: " << pos.getX() << endl;
    cout << "Y da posicao: " << pos.getY() << endl;
    cout << endl;

    cout << "Criando circulo de raio 20.1 e na posicao acima." << endl;
    Circle circulo(20.1,pos);
    cout << endl;

    cout << "Raio do circulo: " << circulo.getRadius() << endl;
    cout << "Posicao x do circulo: " << circulo.getPosition().getX() << endl;
    cout << "Posicao y do circulo: " << circulo.getPosition().getY() << endl;
    cout << endl;

    return 0;
}
