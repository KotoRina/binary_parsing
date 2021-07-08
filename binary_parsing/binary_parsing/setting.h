#ifndef SETTING_H
# define SETTING_H

#include <iostream>
#include <vector>
#include <fstream>
#include <list>

static std::string	pathFile = "input.txt";

struct Pakege
{
	std::string					name = "";
	long						length = 0;
	std::vector<std::string>	data;
};

enum EndBlock
{
	EndFF = 2,
	EndXX = 3
};

#endif
