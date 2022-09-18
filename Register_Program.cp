#include <iostream>
using namespace std;


int main() {
   double price1, price2, taxRate;
   double basePrice, discountPrice, totalPrice;
   char clubCard;

   cout << "Enter price of first item: ";
   cin >> price1;

   cout << "Enter price of second item: ";
   cin >> price2;

   cout << "Does customer have a club card? (Y/N): ";
   cin >> clubCard;

   if (clubCard )

   cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
   cin >> taxRate;

   basePrice = price1 + price2;
   cout << "Base Price: " << basePrice << endl;

   if (price1 < price2 || price1 == price2)
       discountPrice = (price1 / 2) + price2;
   else
       discountPrice = (price2 / 2) + price1;


   if (clubCard == 'y' || clubCard == 'Y')
       discountPrice = discountPrice * .9;

   cout << "Price after discounts: " << discountPrice << endl;

   totalPrice = discountPrice * (1 +  (taxRate/100)) ;
   cout << "Total price: " << totalPrice << endl;


    return 0;
}
