#include <iostream>
#include "Circle.cpp"

using namespace std;

int main(){

	Position pos;
    cout << "X da posicao antes: " << pos.getX() << endl;
    cout << "Y da posicao antes: " << pos.getY() << endl;
    pos.setX(13.5);
    pos.setY(12.2);
    cout << "X da posicao depois: " << pos.getX() << endl;
    cout << "Y da posicao depois: " << pos.getY() << endl;

    Circle circulo(20.1,pos);

	cout << "Raio do circulo: " << circulo.getRadius() << endl;
	cout << "Posicao x do circulo: " << circulo.getPosition().getX() << endl;
	cout << "Posicao y do circulo: " << circulo.getPosition().getY() << endl;


    return 0;
}
