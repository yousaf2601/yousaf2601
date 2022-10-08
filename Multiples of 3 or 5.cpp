#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//#include <stdexcept>

int inputNumber();
int solution(int);

int main()
{
    std::cout<<solution(inputNumber());
    return 0;
}

int inputNumber() {
    int d; std::cout << "Input number: " << std::endl; std::cin >> d;
    return d;
}

int solution(int number)
{
    if (number <= 2) return 0;
    int sum = 0;//suma liczb podzielnych przez 3 albo 5 poni�ej liczby 'number'
    for (int i = 3; i < number; i++) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }
    return sum;
}