//
/*You are a fruit and vegetable merchant
 *You need a program that displays the total
 *price (including tax) of your fresh products.
 *Write a C++ program that asks the user to
 *enter the price excluding tax (HT) of
 *a kilogram of carrots, the number of kilograms
 *of carrots, and the VAT rate (e.g., 15%).
 *The program should display the total price (TTC)
 *of the given merchandise.
 */
#include <iostream>
int main() {
    std::cout << "Money rules this world! HT vs TTC" << std::endl;
    double ht_price, vat_rate, nbr_kilogram;
    std::cout << "Enter the HT price of 1 carrots kilogram: ";
    std::cin >> ht_price;
    std::cout << "Enter the VAT rate in %(e.g., 15 for 15%): ";
    std::cin >> vat_rate;
    std::cout << "Enter the number of carrots kilograms: ";
    std::cin >> nbr_kilogram;
    const double total_price = ht_price * nbr_kilogram;
    const double total_vat = total_price * (vat_rate / 100);
    const double total_price_ttc = total_vat +total_price;
    std::cout << "Total TTC price: " << total_price_ttc << std::endl;
    std::cout << "Eh, what's up, Doc?" << std::endl;
}
// Created by chris on 13/05/2025.
//
