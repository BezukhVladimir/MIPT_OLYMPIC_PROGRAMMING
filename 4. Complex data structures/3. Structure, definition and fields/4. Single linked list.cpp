//Односвязный список
//В шаблоне кода вы можете видеть реализацию структуры node. Ее единственное поле - указатель на структуру node. При помощи такой конструкции можно делать списки - достаточно организовать указатели так, чтобы для каждого экземпляра node его указатель указывал на следущий экземпляр node в списке. При этом указатель в последнем node в списке нулевой.
//
//Мы организовали такой список за вас и дали вам указатель на его начало. Ваша задача - найти длину такого списка.
//
//Техническая часть
//Вам необходимо реализовать функцию get, которая принимает один аргумент - указатель на структуру node. Возвращать эта функция должна количество элементов в списке. Гарантируется, что список не зациклен, а также что указатель в последнем элементе списка нулевой.
//
//Sample Input:
//5
//
//Sample Output:
//5

struct node {
    node *next;
};

int get(node *p)
{
    int n = 0;

    while (p) {
        n++;
        p = p->next;
    }

    return n;
}