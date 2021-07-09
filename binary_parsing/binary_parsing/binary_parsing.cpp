#include "setting.h"
#include "parser_data.h"
#include "print_data.h"
#include "generate_data.h"

int main()
{
    genData();
    std::list<Pakege> list;
    list = fillList(list);
    printList(list);

    return (0);
}
