#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double xx, double yy, double zz) : x(xx), y(yy), z(zz), grip(false) {}

double BrazoRobotico::GetX() const {
	return x;
}

double BrazoRobotico::GetY() const {
	return y;
}

double BrazoRobotico::GetZ() const {
	return z;
}

bool BrazoRobotico::GetGrip() const {
	return grip;
}

void BrazoRobotico::coger() {
	if(!grip) {
		grip = true;
	}
}

void BrazoRobotico::soltar() {
	if(grip) {
		grip = false;
	}
}

void BrazoRobotico::mover(double newX, double newY, double newZ) {
	x = newX;
	y = newY;
	z = newZ;
}
