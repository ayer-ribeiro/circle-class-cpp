#include "Circle.h"

Circle::Circle(void){
	radius = (float*)malloc(sizeof(float));
	(*radius) = 0.0;
}

Circle::Circle(float r){
	radius = (float*)malloc(sizeof(float));
	*radius = r;
}

Circle::Circle(Position p){
    radius = (float*)malloc(sizeof(float));
    position = p;
    *radius = 0.0;
}

Circle::Circle(float r, Position p){
	radius = (float*)malloc(sizeof(float));
	*radius = r;
	position = p;
}

Circle::~Circle(void){
    free(radius);
    position.~Position();
}

Position Circle::getPosition(void){
    return position;
}

float Circle::getRadius(void){
    return *radius;
}

float Circle::getArea(void){
    return M_PI * (*radius)*(*radius);
}

float Circle::getDiameter(void){
    return 2 * (*radius);
}

float Circle::getCircumference(void){
    return 2 * M_PI * (*radius);
}
