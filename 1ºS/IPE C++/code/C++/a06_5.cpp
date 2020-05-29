#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "pt-BR");
	int ped, qtde;
	float val;
	bool inv;
	
	cout << "\n       *** Card�pio *** \n";
	cout << "\n   100 � Hamb�rguer � R$5,50 \n";
	cout << "\n   101 � Cachorro-quente � R$4,50 \n";
	cout << "\n   102 � Milkshake � R$7,00 \n";
	cout << "\n   103 � Pizza brotinho � R$8,00 \n";
	cout << "\n   104 - Cheeseburguer � R$8,50 \n";
	cout << "\n   Informe o c�digo do seu pedido: \n";
	cin >> ped;
	
		if (ped != 100 || ped != 101 || ped != 102 || ped != 103 || ped != 104 ) {
			cout << "\n    C�digo inv�lido, informe o c�digo do seu pedido: \n";
			cin >> ped;
		}
	
	//switch (ped) {
	//	case 100: 
	//}
	
}
