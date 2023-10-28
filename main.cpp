#include <iostream>
#include "BrazoRobotico.h"

int main() {

	BrazoRobotico brazo1(0.0, 0.0, 0.0);
	brazo1.mover(100.0, 200.0, 300.0);		
	brazo1.coger();

	std::cout << "El brazo se ha movido a (" << brazo1.GetX() << ", " << brazo1.GetY() << ", " << brazo1.GetZ() << ")" 	<< std::endl;

	std::cout << "Objeto cogido? " << (brazo1.GetGrip() ? "SI" : "NO") << std::endl;	

	return 0;
}

