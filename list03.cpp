//// Задание 1
//#include <cmath>
//#include <iostream>
//#include <windows.h>
//#include <stdio.h>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int NOD, NOK,a,b,i;
//	cout << "введите числа от 100 до 1000" << endl;
//	cin >> a;
//	cin >> b;
//	for (i = 100; i <= 9999999999999; i++) {
//		if (i % a == 0 && i % b == 0) {
//			NOK = i;
//			cout << "наименьшее общее кратное =" << NOK << endl;
//			break;
//		}
//	}
//	for (i = 1000; i >= 1; i--) {
//		if (a % i == 0 && b % i == 0) {
//			NOD = i;
//			cout << "наибольший общий делитель =" << NOD << endl;
//			break;
//		}
//	}
//}
// Задание 2
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int chislo, n, menu;
	string res;
	cout << "\nВыберите опцию\n";
	cout << "\n[1] Преобразование из десятичной\n";
	cout << "\n[2] Преобразование в десятичную\n" << endl;
	cin >> menu;
	switch (menu) {
	case 1:
		cout << "Введите число" << endl;
		cin >> chislo;
		cout << "В какую систему счисления перевести?" << endl;
		cin >> n;
		while (chislo > 0) {
			res = to_string(chislo % n) + res;
			chislo = chislo / n;
		}
		cout << res << endl;
		break;
	case 2:
		cout << "Введите систему счисления" << endl;
		cin >> n;
		cout << "введите число" << endl;
		cin >> chislo;
		int order = 1, res = 0;
		while (chislo > 0) {
			int digit = chislo % 10;
			res = res + digit * order;
			order = order * n;
			chislo /= 10;
		}
		cout << res << endl;
		break;
	}
	return 0;
}
//Задание 3
//#include <vector>
//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "russian");
//
//    int n, min = 10000, max = 0, nomer, snomer = 0;
//
//    // Просим пользователя ввести чётное количество элементов
//    do {
//        cout << "введите чётное количество элементов" << endl;
//        cin >> n;
//    } while (n % 2 != 0 || n <= 0);
//
//    // Выделяем память для вектора
//    int* vec = (int*)malloc(n * sizeof(int));
//
//    // Вводим значения элементов вектора
//    cout << "введите значения элементов вектора" << endl;
//    for (int i = 0; i < n; i++) {
//        do {
//            cin >> vec[i];
//        } while (vec[i] < 1000 || vec[i] > 10000);
//    }
//
//    // Ищем минимальный элемент на чётных позициях (0, 2, 4,...)
//    for (int i = 0; i < n; i += 2) {  // Здесь i += 2
//        if (vec[i] < min) {
//            min = vec[i];
//        }
//    }
//
//    // Ищем максимальный элемент на нечётных позициях (1, 3, 5,...)
//    for (int i = 1; i < n; i += 2) {  // Здесь i += 2
//        if (vec[i] > max) {
//            max = vec[i];
//        }
//    }
//
//    // Проверяем условие STARKX
//    if (min > max) {
//        cout << "вектор является STARKX" << endl;
//    }
//    else {
//        cout << "вектор не является STARKX" << endl;
//    }
//
//    // Генерация номера на основе наибольших цифр каждого числа
//    for (int i = 0; i < n; i++) {
//        int maxdig = 0;
//        int temp = vec[i];
//
//        // Находим наибольшую цифру в числе
//        while (temp > 0) {
//            if (temp % 10 > maxdig) {
//                maxdig = temp % 10;
//            }
//            temp /= 10;
//        }
//
//        nomer = nomer * 10 + maxdig;
//    }
//
//    // Переворачиваем сгенерированный номер
//    snomer = 0;
//    while (nomer > 0) {
//        snomer = snomer * 10 + nomer % 10;
//        nomer /= 10;
//    }
//
//    cout << "сгенерированный номер = " << snomer << endl;
//
//    // Освобождаем выделенную память
//    free(vec);
//
//    return 0;
//}
















































