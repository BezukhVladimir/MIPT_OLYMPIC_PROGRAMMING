//Факториал
//В этой задаче вам требуется написать рекурсивную функцию, которая посчитает n! = n * (n - 1) * ... * 1.
//
//Входные данные
//Вам необходимо написать рекурсивную функцию factorial, входным параметром которой подается единственное целое число n.
//
//Выходные данные
//Функция должна вернуть единственное целое число - факториал данного числа n.

long unsigned factorial(unsigned n)
{
    return n > 1 ? n * factorial(--n) : 1;
}