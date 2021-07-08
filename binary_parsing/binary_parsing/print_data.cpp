#include "print_data.h"

void	printPack(Pakege pack)
{
	std::cout << "Name - " << pack.name << std::endl;
	std::cout << "Count - " << pack.length << std::endl;
	std::cout << "Data - ";
	for (int i = 0; i < pack.data.size(); i++)
		std::cout << pack.data[i] << " ";
	std::cout << std::endl;
}

void	printList(std::list<Pakege> listPack)
{
	for (Pakege pack : listPack)
	{
		printPack(pack);
		std::cout << std::endl;
	}
}