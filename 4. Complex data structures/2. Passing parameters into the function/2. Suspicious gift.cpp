//Подозрительный подарок
//Недавно вы были в шаурмячной рядом с вокзалом, и в ней, в дополнение к шаурме, вам подарили указатель. Сама шаурма никаких подозрений вызывать не может, а вот с указателем может быть что-то нечисто. Вы решили его проверить. Для этого вам необходимо реализовать функцию, которая возвращает истину, если указатель нулевой, и ложь иначе.
//
//Техническая часть
//Вам необходимо реализовать функцию check, принимающую один указатель на переменную типа int, и возвращающую true, если этот указатель нулевой и ложь иначе.
//
//Sample Input:
//0
//
//Sample Output:
//1

bool check(int *p) {
    return p == nullptr;
}