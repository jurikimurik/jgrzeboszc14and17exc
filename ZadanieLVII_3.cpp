#include <iostream>
using namespace std;
//**********************************************************************************************************
int main()
{
    auto a{1};    // int
    auto b = {2}; // int
    auto c{1, 2}; // zle
    auto d = {1, 2, 3, 4}; // int
    auto e{1.1};           // double
    auto f = {3.5};        // double
    auto g{1.1, 4.5}; // zle
    auto h = {3.5, 6.2}; // double
    auto m = {3.5, 6}; // zle
    auto n{'c'}; // char
}
