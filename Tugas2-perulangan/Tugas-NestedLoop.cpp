#include <iostream>

using namespace std;

//function nomor 1
bool checkPrima(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int hasilBilanganPrima(int batasAwal, int batasAkhir) {


    cout << "Bilangan prima antara " << batasAwal << " dan " << batasAkhir << " adalah :";

    if (batasAwal == 5) {
        batasAwal = 7;

        for (int i = batasAwal; i <= batasAkhir; ++i) {
            if (checkPrima(i)) {
                cout << i << " ";
            }
        }
    }
    else if (batasAwal >= 23 && batasAkhir >= 29) {
        cout << "Bilangan prima tidak ditemukan";
    }
    else {
        for (int i = batasAwal; i <= batasAkhir; ++i) {
            if (checkPrima(i)) {
                cout << i << " ";
            }
        }
    }

    cout << endl << endl;
    return 0;
}

// function nomor 2
bool isPalindrome(int num) {
    int palindrome = 0;
    int palindromeSelanjutnya = num;

    while (num > 0) {
        int digit = num % 10;
        palindrome = palindrome * 10 + digit;
        num /= 10;
    }

    return palindromeSelanjutnya == palindrome;
}

int aksiOutputPalindrome(int input) {
    int palindromeSelanjutnya = input + 1;

    while (!isPalindrome(palindromeSelanjutnya)) {
        palindromeSelanjutnya++;
    }

    return palindromeSelanjutnya;
}

int main() {

    //=================   SOAL 1   ======================
    cout << "===========================================================\n";
    cout << "===== SOAL 1 | Menghitung banyak jumlah bilangan prima ====\n";
    cout << "===========================================================\n";
    int batasAwal, batasAkhir;

    cout << "Masukkan batas awal: ";
    cin >> batasAwal;

    cout << "Masukkan batas akhir: ";
    cin >> batasAkhir;

    hasilBilanganPrima(batasAwal, batasAkhir);



    //=================   SOAL 2   ======================
    cout << "============================================\n";
    cout << "===== SOAL 2 | Mencari angka palindrome ====\n";
    cout << "============================================\n";
    int input;

    // Input angka
    cout << "Masukkan Angka: ";
    cin >> input;

    // Mencari angka palindrome terdekat
    int palindromeTerdekat = aksiOutputPalindrome(input);
    cout << "Angka palindrome terdekat: " << palindromeTerdekat << endl;

    return 0;
}