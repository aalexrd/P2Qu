#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

int main()
{
	Queue<int> intQueue;
	cout << "Cargando bateria...\n";
	for (int i = 0; i < 100; i++) // Charge battery
		intQueue.push(i);
	cin.get();
	while (!intQueue.empty())
		cout << "Nivel de Bateria: " << intQueue.front()->getData() << endl;
	cout << "La carga residual es de: " << intQueue.size() << endl;
	cin.get();
	return 0;
}
