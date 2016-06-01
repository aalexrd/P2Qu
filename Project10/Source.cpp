#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

int main()
{
	Queue<int> intStack;
	cout << "Cargando bateria...\n";
	for (int i = 0; i < 100; i++) // Charge battery
		intStack.push(i);
	cin.get();
	while (!intStack.empty())
		cout << "Nivel de Bateria: " << intStack.front()->getData() << endl;
	cout << "La carga residual es de: " << intStack.size() << endl;
	cin.get();
	return 0;
}
