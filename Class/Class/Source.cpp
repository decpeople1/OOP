#include<iostream>
#include<string>
#include<math.h>
#include<time.h>
#include <locale.h>

class Drob {
	int x;
	int y;
public:
	int Getx() {
		return x;
	}
	int Gety() {
		return y;
	}
	void Setx(int x1)
	{
		if (x1 == 0) {
			x = 1;
		}
		x = x1;
	}
	void Sety(int y1)
	{
		if (y1 == 0) {
			y = 1;
		}
		y = y1;
	}
	void Decim() {
		double dec = (double)x / y;
		std::cout<<"Вывод:" << dec << std::endl;
	}
};
int main()
{
	setlocale(LC_ALL, "russian");
	Drob n;
	int a, b;
	std::cout << "Введите первое число:";
	std::cin >> a;
	std::cout << "Введите второе число:";
	std::cin >> b;
	n.Setx(a);
	n.Sety(b);
	n.Decim();
	system("pause");
	return 1997;
}