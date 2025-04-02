#include <iostream>
using namespace std;

 int main ()
 { double originalprice , percentage, salestaxrate, mark_up_amount, sellingprice, salestax, finalprice ;

    cout << " Enter the original price of the item sold. " << endl;
    cin >> originalprice;

    cout << " Enter percentage of the marked-up price. " << endl;
    cin >> percentage;
    

    cout << " Enter sales tax rate. " << endl;
    cin >> salestaxrate;

    cout << " Origional price of the item = " << originalprice << endl;
    cout << " Percentage of mark-up = " << percentage << endl;
    
    
    mark_up_amount = originalprice * (percentage/100);
    sellingprice = originalprice + mark_up_amount;
    cout << "  Stores selling price of the item = " << sellingprice << endl;
 
    
    salestax = sellingprice * (salestaxrate/100);
    cout << " Sales tax = " << salestax << endl;

    finalprice = sellingprice + salestax;
    cout << " Final price of the item = " << finalprice << endl;
  




return 0;
 }
