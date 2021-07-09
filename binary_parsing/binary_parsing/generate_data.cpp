# include "generate_data.h"

void		genData()
{
	int				countPack;
	char			tempChr;
	int				tempInt;
	std::ofstream	out;

	out.open(pathFile);
	srand(time(0));
	countPack = 1 + rand() % 20;
	for (int i = 0; i < countPack; i++)
	{
		tempChr = 65 + rand() % 25;
		out << tempChr << tempChr << ' ' << tempChr << tempChr << ' ';
		tempInt = 1 + rand() % 20;
		out << tempInt << ' ';
		tempChr = 65 + rand() % 25;
		for (int l = 0; l < tempInt - 1; l++)
		{
			out << tempChr << l << ' ';
		}
		if (i == countPack - 1)
			out << tempChr << tempInt;
		else
			out << tempChr << tempInt << ' ';
	}
	out.close();
}