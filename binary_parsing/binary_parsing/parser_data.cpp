#include "parser_data.h"

Pakege					initPack()
{
	Pakege			init;

	init.length = 0;
	init.name = "";
	init.data = {};

	return (init);
}

std::list<Pakege>		fillList(std::list<Pakege> list)
{
	int				flag;
	char			chr;
	Pakege			pack;
	std::string		temp;
	std::ifstream	in;

	flag = 0;
	temp = "";
	in.open(pathFile);
	while ((chr = in.get()) != EOF)
	{
		if (chr != '\n')
		{
			if (flag < EndFF)
			{
				if (chr != ' ')
					pack.name += chr;
				else
					flag++;
			}
			else if (flag == EndFF)
			{
				if (chr != ' ')
					temp += chr;
				else
				{
					flag++;
					pack.length = atoi(temp.c_str());
					temp = "";
				}
			}
			else if (flag <= pack.length + EndXX)
			{
				if (chr != ' ')
					temp += chr;
				else
				{
					pack.data.push_back(temp);
					temp = "";
					flag++;
					if (flag == pack.length + EndXX)
					{
						flag = 0;
						list.push_back(pack);
						pack = initPack();
					}
				}
			}
		}
	}
	pack.data.push_back(temp);
	list.push_back(pack);
	in.close();
	return (list);
}
