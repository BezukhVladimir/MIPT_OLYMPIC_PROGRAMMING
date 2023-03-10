//Время разбрасывать единицы
//Вам дано целое положительное число. Необходимо во всех его значащих битах, находящихся в четных позициях, и в которых записан 0 поменять его на 1.
//
//Входные данные
//Входные данные содержат единственное целое число n.
//
//Выходные данные
//Выведите число, полученное заменой всех нулевых значащих битов на четных позициях на 1 в данном числе.
//
//Примечание
//Значащими битами в этой задаче называются все биты, кроме ведущих нулей. Нумерация битов начинается с 0 с младших разрядов.
//
//Sample Input 1:
//5
//
//Sample Output 1:
//5
//
//Sample Input 2:
//8
//
//Sample Output 2:
//13

#include <iostream>

int main()
{
    unsigned a, t1, t2, t3, result;
    std::cin >> a;

    // __builtin_clz return CLZ (count leading zero)
    t1 = 1 << (a ? 32 - __builtin_clz(a) : 0);    // 00010000
    t2 = t1 - 1U;                                 // 00001111
    t3 = t2 & 0b01010101010101010101010101010101; // 00000101
    result = a | t3;                              // 00001101

    std::cout << result;
}