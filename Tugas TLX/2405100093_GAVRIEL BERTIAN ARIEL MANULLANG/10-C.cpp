#include <iostream> // Menyertakan library input-output standar C++
using namespace std; // Memungkinkan penggunaan elemen dari namespace std tanpa prefiks 'std::'

// Fungsi rekursif untuk menghitung faktorial
long long faktorial(int n) { 
    if (n == 1) { // Basis: jika n sama dengan 1
        return 1; // Mengembalikan 1, karena faktorial 1 adalah 1
    } else {
        return faktorial(n - 1) * n; // Rekursi: n * faktorial(n-1)
    }
}

int main() { // Fungsi utama tempat eksekusi program dimulai
    int n = 10, m = 20; // Mendeklarasikan dua variabel integer n dan m

    // Menghitung faktorial dari n dan m, lalu menjumlahkannya
    cout << faktorial(n) + faktorial(m) << endl; // Mencetak hasil penjumlahan faktorial(n) dan faktorial(m)
}