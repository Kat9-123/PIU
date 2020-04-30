#include <iostream>
#include <windows.h>
using namespace std;

string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185";

string uinput;



int main() {
	system("title PIU");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	while (true) {
		int correct = 0;
		int wrong = 0;
		system("cls");
		cout << "Enter as many digits of Pi as you know!" << endl;
		cout << "\n";
		cout << "3.";
		cin >> uinput;
		system("cls");
		cout << "\n";
		cout << "3.";
		for (int i = 0; i < uinput.size(); i++){
    		
    		if (pi[i+2] == uinput[i]) {
    			SetConsoleTextAttribute(hConsole, 2);
				correct++;		
			}
			else {
				SetConsoleTextAttribute(hConsole, 4);
				wrong++;
			}
			cout << uinput[i];		
		}
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\n";
		cout << pi.substr(0, 12 + uinput.size()) << endl;
		cout << "\n";
		
		cout << "Entered: ";
		cout << uinput.size() << endl;
		
		SetConsoleTextAttribute(hConsole, 2);
		cout << "Correct: ";
		cout << correct << endl;
		
		SetConsoleTextAttribute(hConsole, 4);
		cout << "Wrong: ";
		cout << wrong << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\n";
		system("pause");
					
	}
	cout << pi;
	return 0;
}
