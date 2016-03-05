#include <iostream.h>
#include <string>
#include <locale.h>
#include <clocale>
using namespace std;
int main()
    {
          int age,tr;
          setlocale(LC_ALL,"Russian");
          // Vvodit soobschenie
          cout <<"Hello, World!\n";
          cin >> age;
          //Vvodit chislo
          cout << "Vashe chislo" << age;
          cin >> age;
          system("pause");
          return 0;
}
//Nikitin A.A          
