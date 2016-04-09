#include "Position.h"

Position::Position(void){
	x = (float*)malloc(sizeof(float));
	y = (float*)malloc(sizeof(float));
	*x = 0;
	*y = 0;
}

Position::Position(float z){
	x = (float*)malloc(sizeof(float));
	y = (float*)malloc(sizeof(float));
	*x = z;
	*y = z;
}

Position::Position(float posX, float posY){
	x = (float*)malloc(sizeof(float));
	y = (float*)malloc(sizeof(float));
	*x = posX;
	*y = posY;
}

Position::~Position(void){
    free(x);
    free(y);
}

float Position::getX(void){
	return *x;
}

float Position::getY(void){
	return *x;
}

void Position::setX(float posX){
	*x = posX;
}

void Position::setY(float posY){
	*y = posY;
}
