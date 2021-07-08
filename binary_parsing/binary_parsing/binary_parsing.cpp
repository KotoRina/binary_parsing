#include "setting.h"
#include "parser_data.h"
#include "print_data.h"

int main()
{
    std::list<Pakege> list;
    list = fillList(list);
    printList(list);

    return (0);
}
