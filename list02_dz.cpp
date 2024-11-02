//Задание 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int A, B, i, s,nb, sdelAB=0, sdelA=0, sdelB=0, pr = 1, kdA = 0, kdB=0,ncA=1,cB=0, od; //sdelA - сумма делителей А; sdelВ - сумма делителей В; pr - произведение колчеств делителей; kdA - количество делителей А; ncA - неч делит А; сВ - чёт дел В; od - общий делитель
//	cout << "введите число А в диапазоне [10;1000]" << endl;
//	cin >> A;
//	cout << "введите число B в диапазоне [10;1000]" << endl;
//	cin >> B;
//	for (i = 1; i <= A; i++){
//		if (A % i == 0) {
//			sdelA += i;
//		}
//	}
//	for (i = 1; i <= B; i++) {
//		if (B % i == 0) {
//			sdelB += i;
//		}
//	}
//	sdelAB = sdelA + sdelB;
//	cout<< "сумма делителей =" << sdelAB << endl;
//	for (i = 1; i <= A; i++) {
//		if (A % i == 0) {
//			kdA ++;
//		}
//	}
//	for (i = 1; i <= B; i++) {
//		if (B % i == 0) {
//			kdB ++;
//		}
//	}
//	pr = kdA * kdB;
//	cout << "произведение количеств делителей =" << pr << endl;
//	for (i = 1; i <= A; i++) {
//		if (A % i == 0) {
//			if (i % 2 != 0) {
//				ncA = ncA * i;
//			}
//		}
//	}
//	for (i = 1; i <= B; i++) {
//		if (B % i == 0) {
//			if (i % 2 == 0) {
//				cB = cB + i;
//			}
//		}
//	}
//	s = cB + ncA;
//	cout << "сумма произведения нечётных делителей А на чётные делители В =" << s << endl;
//	for (i = 1; i <= A and i <= B; i++) {
//		if (A % i == 0 and B % i == 0) {
//			if nb > i{
//				nb = i;
//		}
//	}
//	cout << " наибольший общий делитель =" << nb << endl;
//	return 0;
//}


// Задание 2
//#include <iostream>
//#include <cmath>
//#include <stdio.h>
//#include <windows.h>
//using namespace std;
//int main(){
//    setlocale(LC_ALL, "Russian");
//    int chislo,menu,count=0,mn=9,mx=0,pr = 1,s = 0,perev=0;
//    char vibor;
//    do {
//        cout << "введите число от 1000 до 999999999" << endl;
//        cin >> chislo;
//        if (chislo < 1000 || chislo > 999999999) {
//            cout << "введите число из указанного диапазона" << endl;
//        }
//    } while (chislo < 1000 || chislo > 999999999);
//    do {
//        cout << "выберите опцию "<< endl;
//        cout << "[2].Выведите цифры числа, начиная с наименьшего позиционного порядка и заканчивая наибольшим." << endl;
//        cout << "[3].Посчитайте, сколько цифр имеет число." << endl;
//        cout << "[4].Возвращает наименьшую и наибольшую цифру числа." << endl;
//        cout << "[5].Возвращает сумму цифр числа." << endl;
//        cout << "[6].Вернуть произведение нечетных цифр." << endl;
//        cout << "[7].Вычислите перевернутую версию числа." << endl;
//        cin >> menu;
//        switch (menu) {
//        case 2:
//            while (chislo > 0) {
//                cout << chislo % 10;
//                chislo = chislo / 10;
//            }
//            cout << endl;
//            break;
//        case 3:
//            while (chislo > 0) {
//                chislo = chislo / 10;
//                count++;
//            }
//            cout << count << endl;
//            break;
//        case 4:
//            while (chislo > 0) {
//                if (chislo % 10 >= mx) {
//                    mx = chislo % 10;
//                    chislo = chislo / 10;
//                }
//                else if (chislo % 10 <= mn) {
//                    mn = chislo % 10;
//                }
//            }
//            cout << mn << endl;
//            cout << mx << endl;
//            break;
//        case 5:
//            while (chislo > 0) {
//                s = s + chislo % 10;
//                chislo = chislo / 10;
//            }
//        case 6:
//            while (chislo > 0) {
//                if ((chislo % 10) % 2 != 0) { ///////// ИСПРАВИТЬ!!!!!
//                    pr = pr * (chislo%10);
//                }
//            }
//            cout << pr << endl;
//            break;
//        case 7:
//            while (chislo > 0) {
//                perev = perev * 10 + chislo % 10;
//                chislo /= 10;
//            }
//            cout << perev << endl;
//            break;
//        default:
//            cout << "Нет такой опции. Выберите ещё раз" << endl;
//            continue;
//        }
//        cout << "Хотите продолжить [Y|N]?" << endl;
//        cin >> vibor;
//        if (vibor == 'Y') {
//            do {
//                cout << "введите число от 1000 до 999999999" << endl;
//                cin >> chislo;
//            } while (chislo < 1000 || chislo > 999999999);
//        }
//    }while (vibor == 'Y');
//    return 0;
//}


 //Задание 3
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <windows.h>
using namespace std;
int fact(int n){
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}
int main() {
    double x;
    char choice;
    int n, menu;
    double ln,e = 1,sin,cos = 1,rf= 1;
    setlocale(LC_ALL, "Russian");
    do {
        cout << "введите значение x, где 0<= x < 1" << endl;
        cin >> x;
        while (x < 0 || x >= 1) {
            cout << "попробуйте ещё раз" << endl;
            cin >> x;
        }
        cout << "введите кол-во членов n от 2 до 20" << endl;
        cin >> n;
        while (n < 2 || n > 20) {
            cout << "попробуйте ещё раз" << endl;
            cin >> n;
        }
        cout << "выберите опцию\n" << endl;
        cout << "[2] Рассчитать Ряд Маклорена для показательной функции\n" << endl;
        cout << "[3] Рассчитать Ряд Маклорена для функции натурального логарифма\n" << endl;
        cout << "[4] Рассчитать Ряд Маклорена для синусоидальной функции\n" << endl;
        cout << "[5] Рассчитать Ряд Маклорена для функции косинуса\n" << endl;
        cout << "[6] Рассчитать Ряд Маклорена для рациональной функции:\n" << endl;
        cin >> menu;
        switch (menu) {
        case 2:
            for (int i = 1; i <= n; i++) {
                e = e + pow(x, i) / fact(i);
            }
            cout << e << endl;
            break;
        case 3:
            ln = x;
            for (int i = 2; i <= n; i++) {
                if (i % 2 == 0) {
                    ln = ln - pow(x, i) / i;
                }
                else {
                    ln = ln + pow(x, i) / i;
                }
            }
            cout << ln << endl;
            break;
        case 4:
            sin = x;
            for (int i = 3; i <= n; i + 2) {
                sin = sin - ((i % 2 != 0 ? 1 : -1) * pow(x, i) / fact(i));
            }
            cout << sin << endl;
            break;
        case 5:
            for (int i = 2; i <= n; i + 2) {
                cos = cos - ((i % 2 == 0 ? 1 : -1) * pow(x, i) / fact(i));
            }
            cout << cos << endl;
            break;
        case 6:
            for (int i = 2; i <= n; i++) {
                rf = rf + i * pow(x, i - 1);
            }
            cout << rf << endl;
            break;
        default:
            cout << "Нет такой опции.Выберите ещё раз" << endl;
            continue;
        }
        cout << "Хотите продолжить[Y|N)?" << endl;
        cin >> choice;
    } while (choice == 'Y');
    return 0;
}




























