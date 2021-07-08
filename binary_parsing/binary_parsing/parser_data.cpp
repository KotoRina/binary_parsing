#include "parser_data.h"



std::list<Pakege>		fillList(std::list<Pakege> list)
{
	int				startLine;
	int				flag;
	char			chr;
	Pakege		input;
	std::string		countInStr;
	std::string		initData;
	std::ifstream	in;

	startLine = 0;
	flag = 0;
	countInStr = "";
	initData = "";
	in.open(pathFile);
	while ((chr = in.get()) != EOF)
	{
		if (chr != '\n')
		{
			if (startLine == 0 && flag == 0)
				startLine = 1;
			if (startLine == 1 && flag < EndFF && chr != ' ')
			{
				input.name += chr;
			}
			else if (startLine == 1 && flag < EndFF && chr == ' ')
				flag++;
			else if (flag == EndFF && startLine == 1 && chr != ' ')
				countInStr += chr;
			else if (flag == EndFF && startLine == 1 && chr == ' ')
			{
				flag++;
				input.length = atoi(countInStr.c_str());
				countInStr = "";
			}
			else if (flag < input.length + EndXX && chr != ' ')
				initData += chr;
			else if (flag <= input.length + EndXX && (chr == ' ' || chr == '\0'))
			{
				input.data.push_back(initData);
				initData = "";
				flag++;
				if (flag == input.length + EndXX)
				{
					flag = 0;
					list.push_back(input);
					input.data = {};
					input.length = 0;
					input.name = "";
				}
			}
		}
	}
	input.data.push_back(initData);
	list.push_back(input);
	in.close();
	return (list);
}
