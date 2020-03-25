#include<iostream>


int main() 
{
	int opc = 0, tam = 0;
	std::cout << "Selecciona el tipo de figura que quieres \n";
	std::cout << "1- Piramide  2- Diamante \n";
	std::cin >> opc;

	if (opc == 1) 
	{

		std::cout << "Inserta el tamano que quieres de la piramide \n";
		std::cin >> tam;
		for (int x = 0; x < tam; x++) 
		{
			for (int i = 0; i < x; i++) 
			{
				std::cout << "@";
				std::cout << " ";
			}
			std::cout << "\n";
		}
		for (int x = tam; x > 0; x--) 
		{
			for (int i = x; i > 0; i--) 
			{
				std::cout << "@";
				std::cout << " ";
			}
			std::cout << "\n";
		}


	}
	else 
	{

		std::cout << "Inserta el tamaño que quieres del diamante \n";
		std::cin >> tam;
		for (int x = 0; x < tam; x++)
		{
			for (int i = x; i < tam; i++) 
			{
				std::cout << " ";
			}
			for (int f = 0; f < x; f++)
			{
				std::cout << "@";
				for (int g = 0; g < 1; g++) 
				{
					std::cout << " ";
				}
			}


			std::cout << "\n";
		}
		for (int s = tam; s > 0; s--)
		{

			for (int i = tam; i > s; i--)
			{
				std::cout << " ";
			}
			for (int f = s; f > 0; f--) 
			{
				std::cout << "@";
				std::cout << " ";
			}
			std::cout << "\n";
		}

	}
}
