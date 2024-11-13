#include <iostream>

#include "primitive_mock.hpp"


int main()
{
    bool false_evaluated = false;
    const primitive_mock mock(std::ref(false_evaluated));
    mock.evaluate();
    std::cout << std::boolalpha << false_evaluated << "\n";
}
