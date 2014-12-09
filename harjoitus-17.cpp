//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream>
using namespace std;
struct data
{
	int kenka;
	char etu[20], suku[30], osoite[30], posti[9];
	float matka;
};

int main(){

	const int max = 3;
	int i, j, ind;
	
	data info[3] = 
	{
		{ 44, "Lauri", "Makinen", "Umpikuja 1", "00000", 4.5 },
		{ 69, "Mauri", "Laitinen", "Umpikuja 7", "00001", 6.66 }
	};
	cout << "Laita etunimi, sukunimi, kotiosoite, postinumero, kenkannumero ja koulumatka\n";
	cin >> info[2].etu >> info[2].suku >> info[2].osoite >> info[2].posti >> info[2].kenka >> info[2].matka;

	cout << "\nLaitetaan suuruus jarjestykseen koulumatkan mukaisesti pienimmästä isoimpaan...\n" << endl;
	for (i = 0; i < (max - 1); i++)
		for (j = i + 1; j < max; j++)
			if (info[j].matka<info[i].matka)
			{
		data apu = info[i];
		info[i] = info[j];
		info[j] = apu;
			}
	cout << "Sorting done\n";
	for (ind = 0; ind < max; ind++) {
		cout << info[ind].etu << endl << info[ind].suku << endl << info[ind].osoite << endl << info[ind].posti << endl << info[ind].kenka << endl << info[ind].matka << endl << endl;

	}


}