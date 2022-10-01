#include <iostream>
using namespace std;

int main(){
    int UangMasuk;
    int Kebutuhan, Keinginan, Tabungan;
    int UangBensin, UangMakan, UangJajan, BelanjaKeinginan, Investasi, DanaDarurat, KebutuhanPokok;
    
    cout << "✨  Halo, Selamat Datang Di Salah Satu Program Karya Barbara✨ ";
    cout << "\n Kali ini, Barbara akan membantu kamu untuk Mengatur keuangan bulanan dengan Metode 50/30/20. Selamat Mencoba!\n\n";
    
    cout << "Masukkan Pendapatan Bulanan Kamu    : Rp.   ";
    cin >> UangMasuk;
    
    Kebutuhan = UangMasuk*50/100;
    cout << "\n Alokasi Kebutuhan Hidup Kamu : Rp.   " << Kebutuhan;
        cout << "\n Rincian :";
        UangBensin = Kebutuhan*10/100;
        cout << "\n     Uang Bensin              : Rp.   " << UangBensin;
        UangMakan = Kebutuhan*80/100;
        cout << "\n     Uang Makan               : Rp.   " << UangMakan;
        KebutuhanPokok = Kebutuhan*10/100;
        cout << "\n     Belanja Kebutuhan Pokok  : Rp.   " << KebutuhanPokok;
    
    Keinginan = UangMasuk*30/100;
    cout << "\n\n Alokasi Keinginan Kamu  : Rp.   " << Keinginan; 
        cout << "\n Rincian :";
        UangJajan = Keinginan*30/100;
        cout << "\n     Alokasi Uang Jajan  : Rp.   " << UangJajan;
        BelanjaKeinginan = Keinginan*70/100;
        cout << "\n     Belanja Keinginan   : Rp.   " << BelanjaKeinginan;
        
    Tabungan = UangMasuk*20/100;
    cout << "\n\n Alokasi Tabungan Kamu  : Rp.   " << Tabungan;
        cout << "\n Rincian :";
        Investasi = Tabungan*50/100;
        cout << "\n     Dana Investasi      : Rp.   " << Investasi;
        DanaDarurat = Tabungan*50/100;
        cout << "\n     Dana Darurat        : Rp.   " << DanaDarurat;
    
    cout << "\n\n Tetap Semangat dan Konsisten Dalam Mengatur Keuangan Bulanan ya!";
    
}

