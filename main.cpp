#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Samochod
{
	public:
		string nazwa;
		int x;
		int y;
		Samochod(string n, int poz_x, int poz_y)
		{
			nazwa = n;
			x = poz_x;
			y = poz_y;
		}
		void przesun(string kierunek, int kroki)
		{
			if(kierunek == "prawa")
			{
				x = x + kroki;
			}
			else if(kierunek == "lewa")
			{
				x = x - kroki;
			}
			else if(kierunek == "gora")
			{
				y = y - kroki;
			}
			else if (kierunek == "dol")
			{
				y = y + kroki;
			}
			cout<<"Pozycja samochodu "<<nazwa<<" to x:"<<x<<" y:"<<y<<endl;
		}
		void daj_lokalizacje()
		{
			cout<<"Pozycja samochodu "<<nazwa<<" to x:"<<x<<" y:"<<y<<endl;
		}
};


int main(int argc, char** argv) {
	Samochod *s1 = new Samochod("maly",20, 20);
	Samochod *s2 = new Samochod("duzy", 50,70);
	s1 -> daj_lokalizacje();
}







