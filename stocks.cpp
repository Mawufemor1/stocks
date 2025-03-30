#include <iostream>
using namespace std;

int main()
{ int nss;
  double sp, pp, ai,  tsc, tasp, tass, ag, al, ar ;


  cout << " Enter number of shares sold : " ;
  cin >> nss;
  cout << endl;

  cout << " Enter purchase price of each share :" ;
  cin >> pp;
  cout << endl;

  cout << " Enter selling price of each share : ";
  cin >> sp;
  cout << endl;

  
  tasp = nss * pp;
  cout << " Total amount of shares purchased : " << tasp << endl;
  tass = nss * sp;
  cout << " Total amount of shares sold : " << tass << endl;

  tsc = tasp * (1.5/100) + tass * (1.5/100);
  cout << " Total service charges : " << tsc << endl;
  ai = tasp + tsc;
  cout << " Amount invested : " 
  << ai << endl;

  ag = tass - ai ;
  cout << " Amount gained : " << ag << endl;
  al = ai - tass;
  cout << " Amount lost : " << al << endl;

  ar = tass - tass * (1.5/100);
  cout << " Amount received after selling the stock : " << ar << endl;


 return 0;
}
