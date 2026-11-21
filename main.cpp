#include <iostream>
using namespace std;

int main() {
    string makanan[6] = {"bakso", "mie ayam", "nasi goreng", "matcha", "es teh","es jeruk"};
    int  harga [6] = {12000, 15000,16000, 25000,5000,5000};

    int i;
    int porsi [6];
    int total ;
    string ulang;
    do {
        total = 0;

        cout << "===== MENU MAKANAN DAN MINUMAN =====" << endl;

        for (i = 0; i < 6; i++)
        {
            cout << endl;
            cout << "Menu  : " << makanan[i] << endl;
            cout << "Harga : Rp" << harga[i] << endl;
            cout << "Porsi : ";
            cin >> porsi[i];

            int subtotal = harga[i] * porsi[i];

            total = total + subtotal;

            cout << "Total " << makanan[i] << " : Rp" 
                 << subtotal << endl;

            cout << "--------------------------------" << endl;
        }
        cout << endl;
        cout << "===== TOTAL PEMBAYARAN =====" << endl;
        cout << "Total keseluruhan : Rp" << total << endl;
        cout << "--------------------------------" << endl;

        cout << "pilih Y/y untuk mengulang : "<< endl;
        cin >> ulang;

    } while (ulang == "y" || ulang == "Y");

    cout << endl;
    cout << "Terima kasih sudah memesan!" << endl;

        
    return 0;
}
