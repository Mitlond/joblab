#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg;
    cout << "Vvedite dannye=  ";
    cin >> arg;
    cout << "Vvedite stepen' v kakuy vozvesti chislo= ";
    double st;
    cin >> st;
    cout << "Vy vveli chislo=" << arg <<endl;
    res = sqrt(arg);
    cout <<"Rezul'tat vychisleniya kvadratnogo cornya=  "
         << res
         << endl;
    cout << "Rezul'tat vozvedeniya v stepen'" << pow(arg,st) <<endl;
system("pause");         
return 0;
}
//Nikitin A.A  
          
