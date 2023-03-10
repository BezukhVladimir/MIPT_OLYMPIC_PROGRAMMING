//Арифметическая прогрессия
//Иван прятал числа на черный день, и вот этот черный день настал! За всю свою жизнь Иван накопил целых три целых числа, но за такой долгий срок последнее число немножко поели крысы. Иван точно помнить, что данные три числа образовывали арифметическую прогрессию. Помогите Ивану, напишите функцию, которая принимает три переменные и исправляет третью.
//
//Техническая часть
//Вам необходимо реализовать функцию f, принимающую три целых числа типа int. В результате работы функции числа в этих трех переменных должны образовывать арифметическую прогрессию в том порядке, в котором они были переданы в функцию. Обратите внимание - значения должны измениться в переданных переменных, а не в созданных для функции копиях.
//
//Sample Input:
//6 9 13
//
//Sample Output:
//6 9 12

void f(const int& a, const int& b, int& c) {
    c = b + (b - a);
}