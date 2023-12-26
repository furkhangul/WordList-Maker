#include <iostream>
#include <clocale>
#include <windows.h>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include <cstdlib>

using namespace std;

// Fonksiyon bildirimleri
void special();
void numbers();
void words();
void mix();
void complex();
void miliar();
void specialnumber();
void tc();
void fastattack();


int main() {
	setlocale(LC_ALL,"Turkish");
    system("@echo off");
    system("title WordList Maker / FurOfTheWeak");
    //system("start https://bandirma.site");
    //system("mkdir WordLists");
    int color = 0;
    int person;
    
    cout << " _______           _______    ___ _______ _            _  _  _             _    \n";
    cout << "(_______)         (_______)  / __|_______) |          | || || |           | |    \n";
    cout << " _____ _   _  ____| |   | |_| |__    _   | |__  _____ | || || |_____ _____| |  _ \n";
    cout << "|  ___) | | |/ ___) |   | (_   __)  | |  |  _ \\| ___  | || || | ___ (____ | |_/ )\n";
    cout << "| |   | |_| | |   | |___| | | |     | |  | | | | ____ | || || | ____/ ___ |  _ ( \n";
    cout << "|_|   |____/|_|    \\_____/  |_|     |_|  |_| |_|_____) \\_____/|_____)_____|_| \\_)\n";
    cout <<"\n                             Created by FurOfTheWeak                                ";
    cout << "\n\n[UYARI]*Bu program illegal kullanımlar için kodlanmamış. Kötü amaçlı yazılımları desteklememektedir.\nProgramı amacı dışında kullanmak yasaktır." << endl;
    cout << "\nYükleniyor..." << endl;

     while (color < 5) {
        system("color 1");
        system("color 2");
        system("color 3");
        system("color 4");
        system("color 5");
        system("color 6");
        system("color 7");

        color++;
    }

    system("color 0");
    cout << "\n\n\nLütfen wordlist oluşturacağınız kişiyi seçiniz.\n" << endl;
    cout << "[1] Özel saldırı Wordlist Oluşturucu" << endl;
    cout << "[2] Sayı Wordlist Oluşturucu" << endl;
    cout << "[3] Kelime Wordlist Oluşturucu" << endl;
    cout << "[4] Sayı ve Kelime Karışık Wordlist Oluşturucu" << endl;
    cout << "[5] Kompleks Özel İfadeler Barndıran Wordlist Oluşturucu" << endl;
    cout << "\n\n\nWordlist Numarasını giriniz: " << endl;
    cin >> person;

    switch (person) {
        case 1: special(); break;
        case 2: numbers(); break;
        case 3: words(); break;
        case 4: mix(); break;
        case 5: complex(); break;
        default: cout << "\n\n\n\nLütfen geçerli sayı giriniz !\n\n\n" << endl;
    }

    return 0;
}
//diğer fonksiyonlar 

void special() {
    cout << "Deneme" << endl;
}

void numbers() {
	int list;
    cout<<"\n\n\nYalnızca sayılar ile wordlist oluşturucuya hoşgeldiniz. Burada sayılar ile sınırlarınızı zorlamanıza yardımcı olacağız. Lütfen ilginizi çeken wordlisti numarasını giriniz.\n";
    cout<<"[1] 1 Milyarlık Wordlist Oluşturucu\n";
    cout<<"[2] Özel Sayı Aralığında Wordlist Oluşturucu\n";
	cout<<"[3] TC Kimlik Numarası Üzerinden Wordlist Oluşturucu\n";
	cout<<"[4] Hızlı Tarama İçin Hazır Wordlist Oluşturucu\n";
	cout<<"Liste Numarası: ";
    cin>>list;
    switch(list){
    	case 1: miliar();
		 break;
		case 2: specialnumber();
		 break;
		case 3: tc();
		 break;
		case 4: fastattack();
		 break;
	}
}

void words() {

	}

	


void mix() {
   	setlocale(LC_ALL,"Turkish");
	int born;
	int age;
	char name[20];
	char surname[20];
	char mother[20];
	char father[20];
	char team[20];
	char teamshort[20];
	
	cout<<"Lüfen adınızı giriniz: ";
	cin>>name;
	cout<<"Lütfen soyadınızı giriniz: ";
	cin>>surname;
    cout<<"Lüfen  babanızın adını giriniz: ";
	cin>>father;
	cout<<"Lüfen annenizin adını giriniz: ";
	cin>>mother;
	cout<<"Lütfen doğum yılınızı giriniz: ";
	cin>>born;
	cout<<"Lütfen tuttuğunuz takımı giriniz: ";
	cin>>team;
	cout<<"Lütfen tuttuğunuz takımın kısaltmasını giriniz:" ;
	cin>>teamshort;
	cout<<"Lütfen yaşınızı giriniz: ";
	cin>>age;
	cout<<"\n\n\n WordList Oluşturuluyor...";
	for(int color=0;color<5;color++){
	system("color 0");
    system("color 1");
    system("color 2");
    system("color 3");
	}
	system("cls");
	system("color 0");
	std::ofstream dosya("kendilistemdetayli.txt");
	 if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    }

	for(int i=1900;i<=2030;i++){
		dosya<<name<<i<<endl;
		dosya<<surname<<i<<endl;
		dosya<<born<<i<<endl;
		dosya<<age<<i<<endl;
		dosya<<father<<i<<endl;
		dosya<<mother<<i<<endl;
		dosya<<team<<i<<endl;
		dosya<<teamshort<<i<<endl;
		dosya<<i<<name<<endl;
		dosya<<i<<surname<<endl;
		dosya<<i<<born<<endl;
		dosya<<i<<age<<endl;
		dosya<<i<<mother<<endl;
		dosya<<i<<father<<endl;
		dosya<<i<<team<<endl;
		dosya<<i<<teamshort<<endl;
	}
	for(int k=0;k<=100;k++){
		dosya<<name<<k<<endl;
		dosya<<surname<<k<<endl;
		dosya<<born<<k<<endl;
		dosya<<age<<k<<endl;
		dosya<<father<<k<<endl;
		dosya<<mother<<k<<endl;
		dosya<<team<<k<<endl;
		dosya<<teamshort<<k<<endl;
		dosya<<k<<name<<endl;
		dosya<<k<<surname<<endl;
		dosya<<k<<born<<endl;
		dosya<<k<<age<<endl;
		dosya<<k<<mother<<endl;
		dosya<<k<<father<<endl;
		dosya<<k<<team<<endl;
		dosya<<k<<teamshort<<endl;
		
		
		
		
	}
	dosya.close();
	cout<<"\n\n\n\n\nLütfen bilgisayarınızda kendilistemdetayli.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde kendilistemdetayli.txt dosyasında oluşturuldu.\n\n\n\n ";

}

void complex() {
    cout << "Deneme" << endl;
    

}
void miliar(){
	system("cls");
	cout<<"\n\n\n\nÇok fazla girdi girildiğinden bu işlem yaklaşık olarak 5 dakika sürecek(opsiyonel):)\n\n\n\n1 milyarlık sayı listesi oluşturuluyor... \n\n\n\n";
	std::ofstream dosya("milyar.txt");
	 if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    }
    for(int i=0;i<10000000000;i++){
    	dosya<<i<<endl;
	}
	dosya.close();
	cout<<"\n\n\n\n\nLütfen bilgisayarınızda milyar.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde milyar.txt dosyasında oluşturuldu.\n\n\n\n ";
}
void specialnumber() {
    system("cls");
    int max, min;
    cout << "Özel aralıkta sayı wordlisti oluşturucusuna hoşgeldiniz. Lütfen girilecek sayının hangi aralıkta olacağını giriniz.";
    cout << "\n\nMinimum değer: ";
    cin >> min;
    cout << "\nMaksimum değer: ";
    cin >> max;
    std::ofstream dosya("ozelnumaralar.txt");
    if (!dosya.is_open()) {
        std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    } else {
        while (min <= max) {
            dosya << min << endl;
            min++;
        }
        dosya.close();
        cout << "\n\n\n\n\nLütfen bilgisayarınızda ozelnumaralar.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde ozelnumaralar.txt dosyasında oluşturuldu.\n\n\n\n ";
    }
}


void tc() {
    system("cls");
    cout <<"TC  wordlisti oluşturucusuna hoşgeldiniz. (5 Dakika sürebilir)";
    std::ofstream dosya("tcler.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    } 
    else{
	for(long long i=10000000000;i<=99999999999;i++){
    	dosya<<i<<endl;
	}

    dosya.close();
    cout << "\n\n\n\n\nLütfen bilgisayarınızda tcler.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde tcler.txt dosyasında oluşturuldu.\n\n\n\n ";
    }
}



void fastattack() {
    system("cls");
    cout <<"Özel derleme  wordlist oluşturucusuna hoşgeldiniz. Hızlı saldırılarda en kullanışlı sayıları derledik.";
    std::ofstream dosya("hizli.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    } 
    else{
	for(int i=0;i<=100;i++){
    	dosya<<i<<endl;
	}
	for(int k=1800;k<=2030;k++){
		dosya<<k<<endl;
	}


    dosya.close();
    cout << "\n\n\n\n\nLütfen bilgisayarınızda hizli.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde hizli.txt dosyasında oluşturuldu.\n\n\n\n ";
    }
}
