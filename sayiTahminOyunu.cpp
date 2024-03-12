#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));
	int rastgeleSayi = rand() % 9000 + 1000, tahmin, tahminSayisi = 0;
	while (true) {
		cout << "1000-9999 arasinda bir sayi belilendi sayiyi tahmin edin!" << endl;
		cin >> tahmin;
		tahminSayisi++;
		if (tahmin < rastgeleSayi) {
			cout << "Tahmin ettiginiz sayi belirlenen sayidan kucuk. Tekrar deneyin: ";
		}
		else if (tahmin > rastgeleSayi) {
			cout << "Tahmin ettiginiz sayi belirlenen sayidan buyuk. Tekrar deneyin: ";

		}
		else if (tahmin == rastgeleSayi) {
			cout << "Tebrikler dogru tahminde bulundunuz!" << tahminSayisi << " tahminde bulundunuz!" << endl;
			break;
		}
	}
	return 0;
}