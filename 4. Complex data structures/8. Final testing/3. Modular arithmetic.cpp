//Модулярная арифметика
//Как вы уже могли заметить, вычитание по модулю в C++ реализовано не то чтобы очень хорошо. Сегодня мы попробуем это исправить. От вас потребуется реализовать структуру, которая будет имитировать обычный тип данных int по данному модулю.
//
//Техническая часть
//Вам необходимо реализовать тип данных Int, в котором будет поле val. В этом поле будет хранится значение нашей переменной по модулю. В структуре необходимо реализовать конструктор, который принимает один аргумент -  изначальное значение val - целое число. Также есть глобальная переменная mod, по которой должны происходить все вычисления.
//
//Также вам необходимо будет реализовать операторы +, -, *. Они должны выполнять свои стандартные математические действия - складывать, вычитать и умножать Int.
//
//В каждый момент времени в поле val должно храниться корректное текущее значение числа по данному модулю.
//
//Sample Input:
//1 2 3 4 1000000000
//
//Sample Output:
//1 3 999999999 24 1

struct Int
{
    long long int val;

    Int(const long long int &val_)
            : val((val_ % mod + mod) % mod) {}

    Int operator+(const Int& right) const {
        return Int(val + right.val);
    }

    Int operator-(const Int& right) const {
        return Int(val - right.val);
    }

    Int operator*(const Int& right) const {
        return Int(val * right.val);
    }
};