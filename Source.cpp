#include <iostream>
using namespace std;
int main() {
	setlocale (LC_ALL, "rus");
	//Array7◦.Дан массив размера N.Вывести его элементы в обратном порядке.
	/*const int size = 10;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << mas[i] << ' ';
	}*/

	//Array8.Дан целочисленный массив размера N.Вывести все содержащиеся в данном массиве нечетные числа в
	//порядке возрастания их индексов, а также их количество K
	/*const int size = 7;
	int mas[size];
	int k = 0;
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		if (i % 2 != 0) {
			cout << i << ' ';
			k++;
		}
	}
	cout << endl;
	cout << k;*/

	//Array9.Дан целочисленный массив размера N.Вывести все содержащиеся в данном массиве четные числа в порядке
	//убывания их индексов, а также их количество K
	/*const int size = 7;
	int mas[size];
	int k = 0;
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 7; i >= 0; i--) {
		if (i % 2 == 0) {
			cout << i << ' ';
			k++;
		}
	}
	cout << endl;
	cout << k;*/

	//Array10.Дан целочисленный массив размера N.Вывести вначале все содержащиеся в данном массиве четные числа
	//в порядке возрастания их индексов, а затем — все нечетные числа в порядке убывания их индексов.
	/*const int size = 8;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			cout << i << ' ';
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--) {
		if (i % 2 != 0) {
			cout << i << ' ';
		}
	}*/







	return 0;
}


