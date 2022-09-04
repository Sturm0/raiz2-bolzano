#include <iostream>
#include <cmath>

double funcion(double x){
	return std::pow(x,2) - 2;
}
int obtener_signo(double x){
	if (x > 0) return 1;
	if (x < 0) return -1;
	return 0;
}
int main(){
	double a = 0.0;
	double b = 2.0;
	double a_ant = 0.0;
	//a != b
	while(not(std::pow(10,-8) < funcion(a) and funcion(a) < std::pow(10,-6))) {
		if (obtener_signo(funcion(a)) != obtener_signo(funcion(b))) {
			a_ant = a;
			a = (a+b)/2;
			std::cout << "esto es a: " << a << '\n';
			std::cout << "esto es b: " << b << '\n';
		} else if (obtener_signo(funcion(a_ant)) != obtener_signo(funcion(a))){
			b = a;
			a = a_ant;
		}
	}
	std::cout << a << "<-- final \n";
}