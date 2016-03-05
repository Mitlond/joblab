#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg;
    //Vvedi pervoe chislo
    cout << "Vvod dannyh pervogo chisla=  ";
    cin >> arg;
    //V kakuy stepen' vozvesti 
    cout << "Vvedite  v kakuy stepen' nuzhno vozvesti= ";
    double st;
    cin >> st;
    //Vy vveli chislo
    cout << "Vy vveli chislo=" << arg <<endl;
    res = sqrt(arg);
    //Rezul'tat vychislenya kvadrat.cornya
    cout <<"Rezultat' vychislenya kvadratnogo kornya=  "
         << res
         << endl;
         //Vozvedenie v stepen'
    cout << "Rezul'tat  vozveden'ya v stepen'" << pow(arg,st) <<endl;
    double fast;
    fast = rand();
    //Vvedi sluchainoe chislo
    cout <<" A teper' sluchainoe  chislo=" << fast <<endl;
      //Zagadka
    cout << "Zagadaite  chislo, ygadauy ego=";
    int aster;
    cin >> aster;
    switch(aster)
                {
                       case 0: cout << "Null" ;
                       break;
                       case 1: cout << "Odin";
                         break;
                       case 2: cout << "Dva";
                         break;
                       case 3: cout << "Three";
                         break;
                         default: cout << "Ya ne ugadal, you are  victory";
                 }      
                 // A teper' kai'kulyator
                 //Pervoe chislo
                   cout << "Vvedi pervoe chislo= " <<endl;
                   int we;
                   cin >> we;
                   //Vtoroe chislo
                   cout << "Vvdite vtoroe chislo= " ; 
                   int iop;
                   cin >> iop;
                   //Vopros
                   cout << "Chto s  nimi delat' =" << endl;
                   char fult;
                   cin >> fult;
                   switch (fult)
                          {
                                //Slozhenie i rzul'tat
         case '+' : cout << "Slozhit', i rezul'tat=" << (we+iop);
         break;
         case '-' : 
              {
                  //Vychitanie-proverka chisla
                  cout << "Vychitanie, nado ispravit' chisla" << endl;
                  int sum;
                  sum = we-iop;
                  //Rezul'tat
                  if (we>iop) cout << "All good:),i vot rezul'tat=" << sum << endl;
                  else
                  //Otvet
                  cout << "Voy rezu'tat otricatel'nyu, i vse=" << sum << endl;
                  }
        break;
              
}                   
system("pause");         
return 0;
}
//Nikitin A.A  
          
