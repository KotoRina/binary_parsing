#ifndef SETTING_H
# define SETTING_H

#include <iostream>
#include <vector>

static std::string	NameFile = "input.txt";

struct InputData
{
	std::string					name;
	long						length;
	std::vector<std::string>	data;
};

enum EndBlock
{
	EndFF = 2,
	EndXX = 3
};

#endif