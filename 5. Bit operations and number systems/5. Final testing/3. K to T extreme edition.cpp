//To the interesting part
//В этой задаче требуется перевести число из K-ичной системы счисления в T-ичную.
//
//Входные данные
//В первой строке в десятичной системе счисления записано два целых числа K, T - основание системы счисления, из которой надо перевести число и в какую соответственно.
//
//Во второй строке содержатся несколько целых неотрицательных чисел, каждое представляет из себя цифру в K-ичной системе счисления. Поскольку для записи чисел в системах счисления в достаточно большими основаниями не хватит символов латинского алфавита, мы заменили их на соответствующие числа в десятичной системе счисления. Так, цифра A поменялась на число 10, цифра B на 11 и так далее. Например, числу 113 179 2 в системе счисления с основанием 666 соответствует 113 * 666^2 + 179 * 666 + 2 = 50241044 в десятичной системе счисления.
//
//Числа во второй строке образуют число в K-ичной системе счисления, которое вам необходимо перевести в T-ичную. Числа упорядочены от старших разрядов к младшим, гарантируется, что их количество не превосходит 100, а также что первое число не равно 0.
//
//Выходные данные
//Выведите представление данного числа в T-ичной системе счисления без ведущих нулей. Цифры следует разделять пробелами.
//
//Sample Input 1:
//10 16
//2 5 0
//
//Sample Output 1:
//15 10
//
//Sample Input 2:
//16 10
//15 10
//
//Sample Output 2:
//2 5 0

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a, k, t, mod;
    vector<unsigned long long> v;
    deque<unsigned long long> result;

    cin >> k >> t;
    while (cin >> a) {
        v.emplace_back(a);
    }

    bool flag = true;
    while(flag)
    {
        mod = 0;
        flag = false;
        for (auto &input : v)
        {
            mod = mod * k + input;
            input = mod / t;
            mod %= t;

            flag |= input;
        }

        result.push_front(mod);
    }

    for (const auto &digit : result)
        cout << digit << ' ';
}