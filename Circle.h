#include "Position.cpp"
#include <cmath>
#include <cstdlib>

class Circle{
	//Atributos
private:
	Position position;
	float *radius;

	//Construtor
public:
	Circle();
	Circle(float);
	Circle(Position);
	Circle(float, Position);
	~Circle();
	Position getPosition();
	float getRadius();
	float getArea();
	float getDiameter();
	float getCircumference();
};
