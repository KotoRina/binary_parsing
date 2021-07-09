#ifndef PARSER_DATA
# define PARSER_DATA

# include "setting.h"

/*
* init or zeroing packege
*/
Pakege				initPack();

/*
* read character by character from the file and check
* the flag (space counter)
*
* until EndFF - name package
* after EndFF and until EndXX - length data in pakage
* after EndXX - data in pakage
*/
std::list<Pakege>	fillList(std::list<Pakege> listPack);

#endif