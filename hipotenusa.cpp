
// Calcular la hipotenusa de un triandulo
//Autor: Gustavo Lejardi


#include <iostream>
using namespace std;



int main()
{

	float hipotenusa;  //Definicion de hipotenusa en un triangulo.
	float A;
	float B;


	cout << "Coloque el angulo A" << endl;
	cin >> A,

		cout << "Coloque el angulo B" << endl;
	cin >> B;

	hipotenusa = sqrt((A * A) + (B * B)); //Computacion de la hipotenusa.


	cout << "La hipotenusa es" << hipotenusa << "de un triangolo" << endl;

	return 0;


}
