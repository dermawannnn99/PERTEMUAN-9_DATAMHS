#include <iostream>
#include <vector>
using namespace std;

    int main () {
        vector <string> nama, npm, tanggalLahir;
        string n, np, tl;
        int pil, h;
        char t;
        bool tes;
        do{
            cout << "========input data mahasiswa========\n";
            cout << "1.    Input data mahasiswa\n";
            cout << "2.    Lihat data mahasiswa\n";
            cout << "3.    Hapus data mahasiswa\n";
            cout << "4.    Exit\n";
            cout << "Masukan nomor pilihan (1-4) : ";
            cin >> pil;
            system ("cls"); //biar input di setiap case tuh bersih

            switch (pil) {

            case 1:
                cin.ignore();
                cout << "Masukan nama mahasiswa : ";
                getline(cin, n);
                nama.push_back(n);
                cout << "Masukan NPM mahasiswa : ";
                cin >> np;
                cin.ignore();
                npm.push_back(np);
                cout << "Masukan tanggal lahir : ";
                getline (cin, tl);
                tanggalLahir.push_back(tl);
                cout << "\nData telah ditambahkan\n";
                cout << "Kembali ke menu utama? (y/n) : ";
                cin >> t;
                cin.ignore();

                if (t == 'y' || t == 'Y') { //jika y maka looping ke menu utama
                    tes = true;
                } else if (t == 'n' || t == 'N') { //program selesai
                    tes = false;
                }
                system("cls"); //biar input di setiap case tuh bersih
                break;

            case 2:
                for (int i = 0; i < nama.size(); i++) {
                    cout << "Data nama mahasiswa ke - " << i+1 << endl;
                    cout << "Nama          : " << nama[i] << endl;
                    cout << "NPM           : " << npm[i] << endl;
                    cout << "Tanggal lahir : " << tanggalLahir[i] << endl;
                    cout << endl;
                }
                    cout << "\nKembali ke menu utama? (y/n) : ";
                    cin >> t;

                    if (t == 'y' || t == 'N') { //jika y maka looping ke menu utama
                    tes = true;
                    } else if (t == 'n' || t == 'N') { //program selesai
                    tes = false;
                    }
                    system("cls"); //biar input di setiap case tuh bersih
                    break;

            case 3:
                for (int i = 0; i < nama.size(); i++) {
                    cout << "Data nama mahasiswa ke - " << i+1 << endl;
                    cout << "Nama          : " << nama[i] << endl;
                    cout << "NPM           : " << npm[i] << endl;
                    cout << "Tanggal lahir : " << tanggalLahir[i] << endl;
                    cout << endl;
                }
                    cout << "\nData mahasiswa ke berapa yang ingin dihapus? (masukan angka) : ";
                    cin >> h;

                    nama.erase(nama.begin()+h-1); //menghapus data sesuai array
                    npm.erase(npm.begin()+h-1);
                    tanggalLahir.erase(tanggalLahir.begin()+h-1);

                    cout << "\nData Mahasiswa ke - " << h << "telah dihapus" << endl;
                    cout << "\nKembali ke menu utama? (y/n) : ";
                    cin >> t;

                    if (t == 'y' || t == 'N') {
                    tes = true;
                    } else if (t == 'n' || t == 'N') {
                    tes = false;
                    }
                    system("cls");
                    break;

            case 4:
                tes = false; //jika exit
                break;
            default:
                cout << "\nPilihan yang anda pilih tidak tersedia, kembali ke menu utama? (y/n : ";
                cin >> t;

                if (t == 'y' || t == 'Y') {
                tes = true;
                } else if (t == 'n' || t == 'N') {
                tes = false;
                }
                system("cls");
                break;
            }
        } while(tes == true);

        cout << "Program selesai";
    }
