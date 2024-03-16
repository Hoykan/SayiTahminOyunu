#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void oyun(int _mindeger,int _maxdeger){
	srand(time(0));
	int rastgeleSayi = rand() % (_maxdeger - _mindeger + 1) + _mindeger, tahmin, tahminSayisi = 0;
	cout << _mindeger << " - " << _maxdeger << " arasinda bir sayi belilendi sayiyi tahmin edin: ";
	while (true) {
		cin >> tahmin;
		tahminSayisi++;
		if (tahmin < _mindeger || tahmin>_maxdeger)
		{
			cout << "Girdiginiz deger" << _mindeger << " - " << _maxdeger <<" arasinda degil, lutfen tekrar deneyiniz!" << endl;
			 continue;
		}

		if (tahmin < rastgeleSayi) {
			cout << "Tahmin ettiginiz sayi belirlenen sayidan kucuk. Tekrar deneyin: ";
		}
		else if (tahmin > rastgeleSayi) {
			cout << "Tahmin ettiginiz sayi belirlenen sayidan buyuk. Tekrar deneyin: ";

		}
		else if (tahmin == rastgeleSayi) {
			cout << "Dogru sayi: " << rastgeleSayi << endl;
			cout << "Tebrikler dogru tahminde bulundunuz!" << tahminSayisi << " tahminde bulundunuz!" << endl;
			break;
		}
	}
};
int main() {
	
	int zorluksecim, kolay=1,orta=2,zor=3;
	cout << "----------- SAYI TAHMIN OYUNUNA HOSGELDINIZ! -----------" << endl;
	while (true)
	{


		cout << "Lutfen zorluk secimi yapiniz!" << endl;
		cout << "KOLAY -- ORTA -- ZOR!" << endl;
		cout << "Kolay icin 1 -- Orta icin 2 -- Zor icin 3, secimini yapmalisiniz!" << endl;
		cin >> zorluksecim;
		system("cls");
		if (zorluksecim == 1) {
			oyun(0, 99);
			break;
		}
		else if (zorluksecim == 2) {
			oyun(100, 999);
			break;
		}
		else if (zorluksecim == 3) {
			oyun(1000, 9999);
			break;
		}
		else {
			cout << "Seciminiz hatali tekrar deneyiniz!"<< endl;

		}
	}
	return 0;
}