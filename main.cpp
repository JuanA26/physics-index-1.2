#include <iostream>
#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

//Copyright(C) <2021> <Juan A | Daniel C | Vincentius S.G | Jonathan P | Aeron T>

//dot product dua vektor
int size = 3;
int dot_product(int vector_a[], int vector_b[]) {
    int product = 0;
    for (int i = 0; i < size; i++)
        product = product + vector_a[i] * vector_b[i];
    return product;
}
//cross product dua vektor
void cross_product(int vector_a[], int vector_b[], int temp[]) {
    temp[0] = vector_a[1] * vector_b[2] - vector_a[2] * vector_b[1];
    temp[1] = -(vector_a[0] * vector_b[2] - vector_a[2] * vector_b[0]);
    temp[2] = vector_a[0] * vector_b[1] - vector_a[1] * vector_b[0];
}
//matriks_determinan
int determinant(int matrix[10][10], int n) {  
    int det = 0;
    int submatrix[10][10];
    if (n == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
        }
    }
    return det;
}

const char rocket[] =
"           _\n\
          /^\\\n\
          |-|\n\
          | |\n\
          |E|\n\
          |D|\n\
          |M|\n\
          |U|\n\
         /|N|\\\n\
        / | | \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";
string konstanta(int a);
float tgn(int a, float b);
float phy(float type, float a, float b, float c);

//------------------------------------------------------------------------------------------------
int main()
{
   int z = 0;
   int a;
   char load[26];
   cout<<" -------SYSTEM START-------"<<endl;
   sleep_until(system_clock::now() + seconds(1));
   cout<<" ----------Loading---------";
   sleep_until(system_clock::now() + seconds(1));
   cout<<"\n\n [                         ]";
   while(z<25) {
       load[z++] = '|';
       load[z] = '\0';
       printf("\n\n [%-25s]", load);
       usleep(100000);
   }
   cout<<"\n\n";
   cout<<"----System load complete----"<<endl;
   sleep_until(system_clock::now() + seconds(1));
   cout<<"----------Welcome-----------"<<endl;
   sleep_until(system_clock::now() + seconds(1));
   for (int i = 0; i < 10; i ++) {
    cout<<"\n"; 
     }
    cout<<("%s", rocket);
    sleep_until(system_clock::now() + seconds(2));
    int j = 300000;
    for (int i = 0; i < 10; i ++) {
        usleep(j); // move faster and faster,
        j = (int)(j * 0.9); // so sleep less each time
        cout<<"\n           |||"; 
        cout<<"\n          |||";
        cout<<"\n         |||";
        cout<<"\n          |||";
        cout<<"\n           |||";
    }
    cout<<"\n\n";
    cout<<"|_______________________________________________________________________|"<<endl;
    cout<<"\n\n";
    
    //-------------------------------------------------------------------------------------------------
    
    back:
    cout<<"*************************************************************************"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                         Asisten Belajar V1.1                          *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*************************************************************************"<<endl;
    cout<<"\n\n";
    
    //------------------------------------------------------------------------------------------------
    
    int Jsoal = 0;
    int Bfisik = 0;
    cout << "1. Index Fisika" << endl; cout << "2. Konstanta Fisika" << endl;
    cout << "3. Kalkulator" << endl; cout << "4. Stop program" << endl;
    cout << "masukan angka : "; cin >> Jsoal;
    cout << "\n\n";
    //----------------------------------------------------
    if (Jsoal == 1) {
        back2:
        cout << "Mau belajar fisika?, bab apa?" << endl;
        cout << "1. Besaran/dimensi/vektor" << endl;
        cout << "2. Kinematika gerak lurus dan melingkar" << endl;
        cout << "3. Dinamika gerak lurus" << endl;
        cout << "4. Kembali" << endl;
        cout << "Bab(masukan angka) : "; cin >> Bfisik;
        cout << "\n\n";
        //-----------------------------------------------------------------------------------------------
        if (Bfisik == 1) {
        back1:
            int a, b;
            cout << "materi apa?" << endl;
            cout << "1. Konversi satuan" << endl;
            cout << "2. dimensi turunan" << endl;
            cout << "3. resultan vektor" << endl;
            cout << "4. perkalian vektor(dot dan cross product)" << endl;
            cout << "5. kembali" << endl;
            cout << "nomor mana yang mau dikerjakan? : "; cin >> a;
            cout << "\n\n";
            if (a == 1) {
            konversi:
                int k;
                cout << "pilihan koversi : " << endl;
                cout << "1. meter ke kilometer" << endl;
                cout << "2. milimeter ke centimeter" << endl;
                cout << "3. centimeter ke meter" << endl;
                cout << "4. gram ke kilogram" << endl;
                cout << "5. miligram ke gram" << endl;
                cout << "6. jam ke detik" << endl;
                cout << "7. menit ke detik" << endl;
                cout << "8. fahrenheit ke celcius" << endl;
                cout << "9. reamur ke celcius" << endl;
                cout << "10. kelvin ke celcius" << endl;
                cout << "11. miliampere ke ampere" << endl;
                cout << "12. milimol ke mol" << endl;
                cout << "13. kembali" << endl;
                cout << "konversi yang diinginkan : "; cin >> k;
                cout << "\n\n";
                if (k == 1) {
                    float a;
                    cout << "masukan panjang meter : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (meter/1000) = kilometer" << endl;
                    cout << a << " meter dalam kilometer adalah " << (a / 1000) << " kilometer";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 2) {
                    float a;
                    cout << "masukan panjang milimeter : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (milimeter/10) = centimeter" << endl;
                    cout << a << " milimeter dalam centimeter adalah " << (a / 10) << " centimeter";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 3) {
                    float a;
                    cout << "masukan panjang centimeter : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (centimeter/100) = meter" << endl;
                    cout << a << " centimeter dalam meter adalah " << (a / 100) << " meter";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 4) {
                    float a;
                    cout << "masukan berat (gram) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (gram/1000) = kilogram" << endl;
                    cout << a << " gram dalam kilogram adalah " << (a / 1000) << " kilogram";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 5) {
                    float a;
                    cout << "masukan berat (miligram) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (miligram/1000) = gram" << endl;
                    cout << a << " miligram dalam gram adalah " << (a / 1000) << " gram";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 6) {
                    float a;
                    cout << "masukan jumlah jam : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (jam * 3600) = detik" << endl;
                    cout << a << " jam dalam detik adalah " << (a * 3600) << " detik";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 7) {
                    float a;
                    cout << "masukan jumlah menit : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (menit * 60) = detik" << endl;
                    cout << a << " menit dalam detik adalah " << (a * 60) << " detik";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 8) {
                    float a;
                    cout << "masukan suhu (fahrenheit) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: (F-32)/1.8 = Celcius " << endl;
                    cout << a << " Fahrenheit dalam Celcius adalah " << ((a - 32) / 1.8) << " Celcius";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 9) {
                    float a;
                    cout << "masukan suhu (reamur) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: R/0.8 = Celcius " << endl;
                    cout << a << " Reamur dalam Celcius adalah " << (a / 0.8) << " Celcius";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 10) {
                    float a;
                    cout << "masukan suhu (kelvin) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: K-273 = Celcius " << endl;
                    cout << a << " Kelvin dalam Celcius adalah " << (a - 273) << " Celcius";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 11) {
                    float a;
                    cout << "masukan arus (miliampere) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: miliamper/1000 = Ampere " << endl;
                    cout << a << " Miliampere dalam Ampere adalah " << (a / 1000) << " Ampere";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 12) {
                    float a;
                    cout << "masukan jumlah zat (milimol) : "; cin >> a;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cout << "Masukan nilai yang benar : "; cin >> a;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid" << endl;
                            cout << "\n";
                            goto konversi;
                        }
                    }
                    cout << "\n\n";
                    cout << "rumus: milimol/1000 = mol " << endl;
                    cout << a << " Milimol dalam mol adalah " << (a / 1000) << " mol";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
                else if (k == 13) {
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back1;
                }
                else {
                    cout << "input tidak valid";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    cin.clear();
                    cin.ignore(100, '\n');
                    goto back;
                }
            }
            else if (a == 2) {
                cout << "Dimensi Turunan adalah sebagai berikut : " << endl;
                cout << "Gaya = Kg m/s^2 (MLT^-2)" << endl;
                cout << "Percepatan = m/s^2 (LT^-2)" << endl;
                cout << "Daya = Kd m^2/s^3 (ML^2T^-3)" << endl;
                cout << "Momentum = Kg m/s (MLT^-1)" << endl;
                cout << "Energi Kinetik = Kg (m/s)^2 (ML^-2T^-2)" << endl;
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto back;
            }
            else if (a == 3) {
            vektor1:
                float a, b, c, rad;
                cout << "masukan gaya vektor-vektor : " << endl;
                cout << "gaya vektor 1 : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto vektor1;
                }
                else {
                    cout << "gaya vektor 2 : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto vektor1;
                    }
                    else {
                        cout << "sudut antara kedua vektor (derajat) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto vektor1;
                        }
                        else {
                            rad = (c * (3.1415926535 / 180));
                            cout << "\n";
                            cout << "Resultan Vektor adalah : " << (sqrt(pow(a, 2) + pow(b, 2) + (2 * a * b * cos(rad)))) << " newton" << endl;
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }


                    }

                }
            }
            else if (a == 4) {
            vektor2:
                int a, b, c, d, e, f;
                cout << "masukan nilai vektor 1 : " << endl;
                cout << "x vektor 1 :"; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto vektor2;
                }
                else {
                    cout << "y vektor 1 :"; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto vektor2;
                    }
                    else {
                        cout << "z vektor 1 :"; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto vektor2;
                        }
                        else {
                            cout << "masukan nilai vektor 2 : " << endl;
                            cout << "x vektor 2 :"; cin >> d;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(100, '\n');
                                cout << "\n";
                                cout << "input tidak valid";
                                cout << "\n";
                                cout << "|_______________________________________________________________________|";
                                cout << "\n\n";
                                goto vektor2;
                            }
                            else {
                                cout << "y vektor 2 :"; cin >> e;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(100, '\n');
                                    cout << "\n";
                                    cout << "input tidak valid";
                                    cout << "\n";
                                    cout << "|_______________________________________________________________________|";
                                    cout << "\n\n";
                                    goto vektor2;
                                }
                                else {
                                    cout << "z vektor 2 :"; cin >> f;
                                    if (cin.fail()) {
                                        cin.clear();
                                        cin.ignore(100, '\n');
                                        cout << "\n";
                                        cout << "input tidak valid";
                                        cout << "\n";
                                        cout << "|_______________________________________________________________________|";
                                        cout << "\n\n";
                                        goto vektor2;
                                    }
                                    else {
                                        int vector_a[] = { a, b, c };
                                        int vector_b[] = { d, e, f };
                                        int temp[size];
                                        cout << "\n";
                                        cout << "Dot product: ";
                                        cout << dot_product(vector_a, vector_b) << endl;
                                        cout << "Cross product: ";
                                        cross_product(vector_a, vector_b, temp);
                                        for (int i = 0; i < size; i++)
                                            cout << temp[i] << " ";
                                        cout << "\n\n";
                                        cout << "|_______________________________________________________________________|";
                                        cout << "\n\n";
                                        goto back;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (a == 5) {
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto back2;
            }
            else {
                cout << "input tidak valid";
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                cin.clear();
                cin.ignore(100, '\n');
                goto back;
            }
        }
        //----------------------------------------------------------------------------
        else if (Bfisik == 2) {
            int k;
            cout << "materi apa?" << endl;
            cout << "1. Menentukan kecepatan" << endl;
            cout << "2. Menentukan kelajuan" << endl;
            cout << "3. Menentukan jarak tempuh" << endl;
            cout << "4. jarak tempuh GLBB" << endl;
            cout << "5. Kecepatan akhir GLBB(diketahui jarak)" << endl;
            cout << "6. Kecepatan akhir GLBB(diketahui waktu)" << endl;
            cout << "7. Gerak vertikal jatuh" << endl;
            cout << "8. Gerak vertikal lempar ke atas" << endl;
            cout << "9. Jarak tempuh menyamping perahu menyeberangi sungai" << endl;
            cout << "10. Jarak tempuh gerak parabola" << endl;
            cout << "11. Kecepatan sudut gerak melingkar" << endl;
            cout << "12. Gaya sentripetal" << endl;
            cout << "13. perpindahan sudut  GMBB" << endl;
            cout << "14. kembali" << endl;
            cout << "nomor mana yang mau dikerjakan? : "; cin >> k;
            cout << "\n\n";
            if (k == 1) {
            perp1:
                float a, b;
                cout << "Masukan jarak Perpindahan objek(meter) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto perp1;
                }
                else {
                    cout << "Masukan waktu yang ditempuh objek(detik) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto perp1;
                    }
                    else {
                        cout << "\n";
                        cout << "rumus => (perpindahan)/waktu = kecepatan" << endl;
                        cout << "kecepatan objek adalah : " << (a / b) << " meter/s";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
            else if (k == 2) {
            jar1:
                float a, b;
                cout << "Masukan jarak tempuh objek(meter) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto jar1;
                }
                else {
                    cout << "Masukan waktu yang ditempuh objek(detik) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto jar1;
                    }
                    else {
                        cout << "\n";
                        cout << "rumus => (jarak tempuh)/waktu = kelajuan" << endl;
                        cout << "kelajuan objek adalah : " << (a / b) << " meter/s";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
            else if (k == 3) {
            kec1:
                float a, b;
                cout << "Masukan kecepatan objek(m/s) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto kec1;
                }
                else {
                    cout << "Masukan waktu objek bergerak(detik) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto kec1;
                    }
                    else {
                        cout << "\n";
                        cout << "rumus => kecepatan*waktu bergerak = jarak" << endl;
                        cout << "jarak yang ditempuh objek adalah : " << (a * b) << " meter";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
            else if (k == 4) {
            jar2:
                float a, b, c, d;
                cout << "Masukan jarak awal objek(m) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto jar2;
                }
                else {
                    cout << "Masukan kecepatan awal objek(m/s) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto jar2;
                    }
                    else {
                        cout << "Masukan percepatan gerak objek(m/s^2) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto jar2;
                        }
                        else {
                            cout << "Masukan waktu gerak objek(detik) : "; cin >> d;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(100, '\n');
                                cout << "\n";
                                cout << "input tidak valid";
                                cout << "\n";
                                cout << "|_______________________________________________________________________|";
                                cout << "\n\n";
                                goto jar2;
                            }
                            else {
                                cout << "\n";
                                cout << "rumus => jarak awal + (kecepatan awal*waktu gerak) + (0,5*percepatan*waktu gerak^2) = Jarak tempuh " << endl;
                                cout << "jarak yang ditempuh objek adalah : " << (a + (b * d) + (0.5 * c * d * d)) << " meter";
                                cout << "\n\n";
                                cout << "|_______________________________________________________________________|";
                                cout << "\n\n";
                                goto back;
                            }
                        }
                    }
                }
            }
            else if (k == 5) {
                kec2:
                float a, b, c;
                cout << "Masukan kecepatan awal objek(m/s) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto kec2;
                }
                else {
                    cout << "Masukan percepatan objek(m/s^2) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto kec2;
                    }
                    else {
                        cout << "Masukan jarak tempuh objek(m) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto kec2;
                        }
                        else {
                            cout << "\n";
                            cout << "rumus => kecepatan awal^2 + (2*percepatan*jarak tempuh) = kecepatan akhir^2" << endl;
                            cout << "kecepatan akhir objek adalah : " << (sqrt(pow(a, 2) + (2 * b * c))) << " m/s";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 6) {
            kec3:
                float a, b, c;
                cout << "Masukan kecepatan awal objek(m/s) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto kec3;
                }
                else {
                    cout << "Masukan percepatan objek(m/s^2) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto kec3;
                    }
                    else {
                        cout << "Waktu objek dipercepat : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto kec3;
                        }
                        else {
                            cout << "\n";
                            cout << "rumus => kecepatan awal + (percepatan*waktu objek) = kecepatan akhir" << endl;
                            cout << "kecepatan akhir objek adalah : " << (a + (b * c)) << " m/s";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 7) {
                ting1:
                float a, b, c, d;
                cout << "Masukan tinggi awal objek relatif ke tanah(m) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto ting1;
                }
                else {
                    cout << "Masukan kecepatan awal objek(m/s)(positif ke arah tanah) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto ting1;
                    }
                    else {
                        cout << "Masukan percepatan gerak objek/Gravitasi(m/s^2) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto ting1;
                        }
                        else {
                            cout << "\n";
                            cout << "rumus => (akar(kecepatan awal^2 + 2*gravitasi*tinggi)-kecepatan awal)/gravitasi = waktu dari atas ke tanah" << endl;
                            cout << "waktu objek jatuh adalah : " << ((sqrt(pow(b, 2) + 2 * c * a) - b) / c) << " detik";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 8) {
                ting2:
                float a, b, c, d;
                cout << "Masukan tinggi awal objek relatif ke tanah(m) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto ting2;
                }
                else {
                    cout << "Masukan kecepatan awal objek(m/s)(positif ke arah udara) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto ting2;
                    }
                    else {
                        cout << "Masukan percepatan gerak objek/Gravitasi(m/s^2) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto ting2;
                        }
                        else {
                            cout << "\n";
                            cout << "rumus => ((2*kecepatan awal)/gravitasi)+((akar(kecepatan awal^2 + 2*gravitas*tinggi)-kecepatan awal)/gravitasi) = waktu dari atas ke tanah" << endl;
                            cout << "waktu objek jatuh adalah : " << (((2 * b) / c) + ((sqrt(pow(b, 2) + 2 * c * a) - b) / c)) << " detik";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 9) {
            leb1:
                float a, b, c;
                cout << "Masukan lebar sungai yang diseberangi(m) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto leb1;
                }
                else {
                    cout << "Masukan kecepatan kapal(m/s) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto leb1;
                    }
                    else {
                        cout << "Masukan kecepatan sungai(ke kanan positif)(m/s) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto leb1;
                        }
                        else {
                            cout << "\n";
                            cout << "rumus => (lebar sungai/kecepatan kapal)*kecepatan sungai = jarak deviasi" << endl;
                            cout << "jarak deviasi kapal adalah : " << ((a / b) * c) << " meter";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 10) {
                kec4:
                float a, b, c, rad;
                cout << "Masukan kecepatan proyektil (m/s) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto kec4;
                }
                else {
                    cout << "Masukan sudut proyektil (derajat) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto kec4;
                    }
                    else {
                        cout << "Masukan percepatan gravitasi (m/s^2) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto kec4;
                        }
                        else {
                            rad = 2 * (b * (3.1415926535 / 180));
                            cout << "\n";
                            cout << "rumus => (kecepatan awal^2 * sin(2*sudut))/gravitasi = jarak tempuh" << endl;
                            cout << "Jarak tempuh proyektil adalah : " << ((pow(a, 2) * sin(rad)) / c) << " meter";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 11) {
                fre1:
                float a;
                cout << "Masukan frekuensi gerakan melingkar (Hz) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto fre1;
                }
                else {
                    cout << "\n";
                    cout << "Rumus => 2*pi*frekuensi" << endl;
                    cout << "Kecepatan sudut adalah : " << (2 * 3.1415926535 * a) << " rad/s";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
            }
            else if (k == 12) {
                kec5:
                float a, b, c;
                cout << "Masukan kecepatan sudut partikel (rad/s) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto kec5;
                }
                else {
                    cout << "Masukan jari-jari gerakan melingkar (m) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto kec5;
                    }
                    else {
                        cout << "Masukan massa partikel (kg) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto kec5;
                        }
                        else {
                            cout << "\n";
                            cout << "Rumus => massa*Kecepatan sudut^2*jari-jari partikel = gaya sentripetal" << endl;
                            cout << "Gaya sentripetal adalah : " << (c * pow(a, 2) * b) << " Newton";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
            else if (k == 13) {
            sud1:
                float a, b, c, d;
                cout << "Masukan sudut awal (radian) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto sud1;
                }
                else {
                    cout << "Masukan kecepatan sudut (rad/s) : "; cin >> b;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto sud1;
                    }
                    else {
                        cout << "Masukan percepatan sudut(rad/s^2) : "; cin >> c;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto sud1;
                        }
                        else {
                            cout << "Masukan waktu percepatan(detik) : "; cin >> d;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(100, '\n');
                                cout << "\n";
                                cout << "input tidak valid";
                                cout << "\n";
                                cout << "|_______________________________________________________________________|";
                                cout << "\n\n";
                                goto sud1;
                            }
                            else {
                                cout << "\n";
                                cout << "Rumus => Sudut awal + (kecepatan sudut*waktu) + (0.5*percepatan sudut*waktu^2)  = Sudut akhir" << endl;
                                cout << "Sudut akhir adalah : " << (a + (b * d) + (0.5 * c * pow(d, 2))) << " radian";
                                cout << "\n\n";
                                cout << "|_______________________________________________________________________|";
                                cout << "\n\n";
                                goto back;
                            }
                        }
                    }
                }
            }
            else if (k == 14) {
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto back2;
            }
            else {
                cout << "input tidak valid";
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                cin.clear();
                cin.ignore(100, '\n');
                goto back;
            }
        }
        else if (Bfisik == 3) {
        int k;
        cout << "materi apa?" << endl;
        cout << "1. Percepatan benda bidang datar" << endl;
        cout << "2. Gaya normal (bidang datar) " << endl;
        cout << "3. Gaya normal (bidang miring)" << endl;
        cout << "4. Percepatan benda bidang miring" << endl;
        cout << "5. Percepatan sistem katrol" << endl;
        cout << "6. Gaya gesek bidang datar" << endl;
        cout << "7. Gaya gesek bidang miring" << endl;
        cout << "8. Percepatan benda dengan gaya non linear(memiliki sudut terhadap horizontal)" << endl;
        cout << "9. kembali" << endl;
        cout << "Bab(masukan angka) : "; cin >> k;
        cout << "\n\n";
        if (k == 1) {
            gay1:
            float a, b;
            cout << "Masukan gaya yang diberikan pada benda (newton) : "; cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto gay1;
            }
            else {
                cout << "Masukan Massa benda(kg) : "; cin >> b;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto gay1;
                }
                else {
                    cout << "\n";
                    cout << "rumus => Percepatan (m/s^2) = gaya / massa" << endl;
                    cout << "percepatan objek adalah : " << (a / b) << " meter/s^2";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
            }
        }
        else if (k == 2) {
            mas1:
            float a, b;
            cout << "Masukan massa benda di lantai (kg) : "; cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto mas1;
            }
            else {
                cout << "Masukan percepatan lokal/gravitasi (m/s^2) : "; cin >> b;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto mas1;
                }
                else {
                    cout << "\n";
                    cout << "rumus => Gaya normal (newton) = massa * percepatan gravitasi" << endl;
                    cout << "gaya normal objek adalah : " << (a * b) << " newton";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
            }
        }
        else if (k == 3) {
            mas2:
            float a, b, c, rad;
            cout << "Masukan massa benda di bidang miring (kg) : "; cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto mas2;
            }
            else {
                cout << "Masukan percepatan lokal/gravitasi (m/s^2) : "; cin >> b;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto mas2;
                }
                else {
                    cout << "Masukan sudut bidang miring (derajat) : "; cin >> c;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto mas2;
                    }
                    else {
                        rad = (c * (3.1415926535 / 180));
                        cout << "\n";
                        cout << "rumus => Gaya normal (newton) = massa * percepatan * cos(sudut bidang miring)" << endl;
                        cout << "gaya normal objek adalah : " << (a * b * cos(rad)) << " newton";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
        }
        else if (k == 4) {
            per1:
            float b, c, rad;
            cout << "Masukan percepatan lokal/gravitasi (m/s^2) : "; cin >> b;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto per1;
            }
            else {
                cout << "Masukan sudut bidang miring (derajat) : "; cin >> c;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto per1;
                }
                else {
                    rad = (c * (3.1415926535 / 180));
                    cout << "\n";
                    cout << "rumus => percepatan benda (m/s^2) = percepatan gravitasi * sin(sudut bidang)" << endl;
                    cout << "Percepatan objek adalah : " << (b * sin(rad)) << " m/s^2";
                    cout << "\n\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto back;
                }
            }
        }
        else if (k == 5) {
        mas3:
            float a, b, c;
            cout << "Masukan massa benda 1 (yg lebih besar) : "; cin >> b;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto mas3;
            }
            else {
                cout << "Masukan massa benda 2 (yg lebih kecil) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto mas3;
                }
                else {
                    cout << "Masukan percepatan lokal/gravitasi (m/s^2) : "; cin >> c;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto mas3;
                    }
                    else {
                        cout << "\n";
                        cout << "rumus => percepatan sistem (m/s^2) = ((massa 2 - massa 1) * gravitasi) / (massa 2 + massa 1)" << endl;
                        cout << "Percepatan sistem adalah : " << (((b - a) * c) / (a + b)) << " m/s^2";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
        }
        else if (k == 6) {
            mas4:
            float a, b, c;
            cout << "Masukan massa benda di lantai (kg) : "; cin >> b;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto mas4;
            }
            else {
                cout << "Masukan percepatan gravitasi (m/s^2) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto mas4;
                }
                else {
                    cout << "Masukan koefisien gesek lantai (kontanta) : "; cin >> c;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto mas4;
                    }
                    else {
                        cout << "\n";
                        cout << "rumus => Gaya gesek(newton) = massa benda * percepatan * koefisien" << endl;
                        cout << "Gaya gesek yang dialami benda adalah " << (a * b * c) << " newton";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
        }
        else if (k == 7) {
        mas5:
            float a, b, c, d, rad;
            cout << "Masukan massa benda (kg) : "; cin >> b;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto mas5;
            }
            else {
                cout << "Masukan percepatan gravitasi (m/s^2) : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto mas5;
                }
                else {
                    cout << "Masukan koefisien gesek bidang (kontanta) : "; cin >> c;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto mas5;
                    }
                    else {
                        cout << "Masukan sudut bidang miring (derajat) : "; cin >> d;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\n";
                            cout << "input tidak valid";
                            cout << "\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto mas5;
                        }
                        else {
                            rad = (d * (3.1415926535 / 180));
                            cout << "\n";
                            cout << "rumus => Gaya gesek(newton) = massa benda * percepatan * cos(sudut) * koefisien" << endl;
                            cout << "Gaya gesek yang dialami benda adalah " << (a * b * c * cos(rad)) << " newton";
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                    }
                }
            }
        }
        else if (k == 8) {
        mas6:
            float a, b, c, rad;
            cout << "Masukan massa benda di lantai (kg) : "; cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto mas6;
            }
            else {
                cout << "Masukan gaya terhadap benda (newton) : "; cin >> b;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto mas6;
                }
                else {
                    cout << "Masukan sudut gaya (derajat) : "; cin >> c;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "\n";
                        cout << "input tidak valid";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto mas6;
                    }
                    else {
                        rad = (c * (3.1415926535 / 180));
                        cout << "\n";
                        cout << "rumus => percepatan (m/s^2) = (gaya * cos(sudut)) / massa " << endl;
                        cout << "percepatan objek adalah : " << ((b * cos(rad)) / a) << " m/s^2";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
            }
        }
        else if (k == 9) {
            cout << "\n\n";
            cout << "|_______________________________________________________________________|";
            cout << "\n\n";
            goto back2;
        } 
            else {
                cout << "input tidak valid";
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                cin.clear();
                cin.ignore(100, '\n');
                goto back;
            }
        }
        else if (Bfisik == 4) {
            goto back;
        }
        else {
            cout << "input tidak valid";
            cout << "\n\n";
            cout << "|_______________________________________________________________________|";
            cout << "\n\n";
            cin.clear();
            cin.ignore(100, '\n');
            goto back;
        }
    }
    //----------------------------------------------------
    else if (Jsoal == 2) {
        int a = 1;
        cout << konstanta(a);
        cout << "\n\n";
        cout << "|_______________________________________________________________________|";
        cout << "\n\n";
        goto back;
    }
    //----------------------------------------------------
    else if (Jsoal == 3) {
        j3:
        int a;
        cout << "Mau ngapain? : " << endl; cout << "1. Kalkulator" << endl; cout << "2. Rata2 data" << endl;
        cout << "3. Nilai trigonometri" << endl; cout << "4. Determinan matriks" << endl; cout << "5. Phytagoras" << endl; cout<< "6. kembali"<<endl;
        cout << "Masukan angka : "; cin >> a;
        cout << "\n";
        if (a == 1) {
            tin1:
            float a, b, c;
            cout << "tindakan : " << endl;
            cout << "1. tambah" << endl;
            cout << "2. kurang" << endl;
            cout << "3. kali" << endl;
            cout << "4. Bagi" << endl;
            cout << "5. pangkat(angka pertama pangkat kedua)" << endl;
            cout << "6. logaritma (angka 1 Log (angka 2)" << endl;
            cout << "7. kembali"<<endl;
            cout << "Apa yang ingin dilakukan : "; cin >> c;
            if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto tin1;
                    }
            else{
                if (c == 7)
		         {
    	            cout << "\n";
		            cout << "|_______________________________________________________________________|";
		            cout << "\n\n";
		            goto j3;
		         }
		        else{
                cout << "\n\n";
                cout << "masukan angka pertama : "; cin >> a;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto tin1;
                    }
                else{
                    cout << "masukan angka kedua : "; cin >> b;
                    if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto tin1;
                    }
                    else{
                        if (c == 1) {
                        cout << a << " + " << b << endl;
                        cout << "Hasilnya adalah : ";
                        cout << (a + b);
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                        }
                        else if (c == 2) {
                        cout << a << " - " << b << endl;
                        cout << "Hasilnya adalah : ";
                        cout << (a - b);
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                        }
                        else if (c == 3) {
                        cout << a << " x " << b << endl;
                        cout << "Hasilnya adalah : ";
                        cout << (a * b);
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                        }
                        else if (c == 4) {
                        cout << a << " / " << b << endl;
                        cout << "Hasilnya adalah : ";
                        cout << (a / b);
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                        }
                        else if (c == 5) {
                        cout << a << " ^ " << b << endl;
                        cout << "Hasilnya adalah : ";
                        cout << (pow(a, b));
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                        }
                        else if (c == 6)
        			    {
    			        cout << a << " log(" << b << ")" << endl;
    			        cout << "Hasilnya adalah : ";
    			        cout << (log (b) / log (a));
    			        cout << "\n\n";
    			        cout << "|_______________________________________________________________________|";
    			        cout << "\n\n";
    			        goto back;
        			    }
                        else {
                        cout << "-" << endl;
                        cout << "input tidak valid";
                        cout << "\n\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        cin.clear();
                        cin.ignore(100, '\n');
                        goto back;
                        }   
                    }
                    }
                }
            }
        }
        else if (a == 2) {
            int n, i;
            float num[100], jum = 0.0, rata;
            cout << "Masukan jumlah data (diantara 0 sampai 100): ";
            cin >> n;
            while (n > 100 || n <= 0)
            {
                cout << "Input tidak valid (jumlah data seharusnya diantara 0 sampai 100)" << endl;
                cout << "Masukan jumlah data yang benar : ";
                cin.clear();
                cin.ignore(100, '\n');
                cin >> n;
            }

            for (i = 0; i < n; i++)
            {
                cout << i + 1 << ". Masukan data: ";
                cin >> num[i];
                jum += num[i];
            }

            rata = jum / n;
            cout << "Rata-rata data adalah = " << rata;
            cout << "\n\n";
            cout << "|_______________________________________________________________________|";
            cout << "\n\n";
            goto back;

        }


        else if (a == 3) {
            tri1:;
            float a, b, c, d;
            c = 2;
            d = 0;
            cout << "Apa yang ingin kamu hitung?" << endl;
            cout << "1. Sinus" << endl;
            cout << "2. Cosinus" << endl;
            cout << "3. Tangen" << endl;
            cout << "4. Sec" << endl;
            cout << "5. Cosec" << endl;
            cout << "6. Cotan" << endl;
            cout << "7. Arcsin" << endl;
            cout << "8. Arccos" << endl;
            cout << "9. Arctan" << endl;
            cout << "Masukan nomor : "; cin >> a;
            if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto tri1;
                    }
            else{
                while (a > 9 || a < 1){
                    cout<<"Input tidak valid"<<endl;
                    goto tri1;
                }
                while (a <= 9 || a > 0)
                {
                cout << "Masukan sudut (derajat / konstanta untuk arc-) : "; cin >> b;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto tri1;
                    }
                else{
                    cout << "Hasilnya adalah: " << phy(c, a, b, d);
                    if (a > 6){
                        cout << " derajat";
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                    else{
                        cout << "\n";
                        cout << "|_______________________________________________________________________|";
                        cout << "\n\n";
                        goto back;
                    }
                }
                }
            }
        }
        else if (a == 4) {
            int n, i, j;
            int matrix[10][10];
            cout << "Masukan ukuran matriks:\n";
            cin >> n;
            while (n > 10 || n <= 0)
            {
                cout << "Input tidak valid (ukuran matriks seharusnya diantara 0 sampai 10)" << endl;
                cout << "Masukan ukuran matriks yang benar : ";
                cin.clear();
                cin.ignore(100, '\n');
                cin >> n;
            }
            while (n > 0 || n <= 10) {
                cout << "Tuliskan elemen-elemen matriks sesuai dengan ukuran :\n";
                cout << "(cth = 1 4 5 atau 4 7 3 untuk matriks 3*3 | 2 1 atau 4 6 untuk matriks 2*2, dst) " << endl;
                cout << "(      6 6 4      2 7 4                   | 3 8      5 9 ) " << endl;
                cout << "(      0 5 7      9 2 5                    " << endl;
                cout << " Tuliskan Matriks yang ingin dihitung : " << endl;
                for (i = 0; i < n; i++)
                    for (j = 0; j < n; j++)
                        cin >> matrix[i][j];
                cout << "Matriks yang dimasukan adalah:" << endl;
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++)
                        cout << matrix[i][j] << " ";
                    cout << endl;
                }
                cout << "Determinan matriks adalah " << determinant(matrix, n);
                cout << "\n\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto back;
            }
        }
        else if(a == 5){
            phy1:
            float a, b, c, d;
            d = 1;
            cout << "Apa yang diketahui dari segitiga? (jika tidak diketahui tulis 0) " << endl;
            cout << "1. Masukan panjang tinggi segitiga : "; cin >> a;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto phy1;
                }
            else{
                cout << "2. Masukan panjang alas segitiga : "; cin >> b;
                if (cin.fail()) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\n";
                cout << "input tidak valid";
                cout << "\n";
                cout << "|_______________________________________________________________________|";
                cout << "\n\n";
                goto phy1;
                }
                else{
                    cout << "3. Masukan panjang bidang miring segitiga : "; cin >> c;
                    if (cin.fail()) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\n";
                    cout << "input tidak valid";
                    cout << "\n";
                    cout << "|_______________________________________________________________________|";
                    cout << "\n\n";
                    goto phy1;
                    }
                    else{
                        if(a == 0){
                            cout << "\n";
                            cout << "Panjang tinggi segitiga adalah : " << phy(d, a, b, c);
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                        else if(b == 0){
                            cout << "\n";
                            cout << "Panjang alas segitiga adalah : " << phy(d, a, b, c);
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                        else if(c == 0){
                            cout << "\n";
                            cout << "Panjang bidang miring segitiga adalah : " << phy(d, a, b, c);
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto back;
                        }
                        else{
                            cout << "Input tidak dapat diproses " << endl;
                            cout << "\n\n";
                            cout << "|_______________________________________________________________________|";
                            cout << "\n\n";
                            goto phy1;
                        }
                    }
                }
            }
        }
        else if (a == 6){
            cout << "\n\n";
            cout << "|_______________________________________________________________________|";
            cout << "\n\n";
            goto back;
        }
        else {
            cout << "input tidak valid";
            cout << "\n\n";
            cout << "|_______________________________________________________________________|";
            cout << "\n\n";
            cin.clear();
            cin.ignore(100, '\n');
            goto back;
        }
    }
    else if (Jsoal == 4) {
        cout << "program dihentikan" << endl;
        cout << "|_______________________________________________________________________|";
        cout << "\n\n";

    }
    //:V
    else if (Jsoal == 69) {
        int a, c, b;
        b = 100;
        a = 2;
        for (c = 0; c < b; c++) {
            cout << konstanta(a);
        }
        cout << "\n\n";
        cout << "all hail edmund our lord and saviour";
        cout << "\n\n";
        cout << "|_______________________________________________________________________|";
        cout << "\n\n";
        goto back;
    }
    else if (Jsoal == 213571) {
      
    }
    else {
        cout << "input tidak valid";
        cout << "\n\n";
        cout << "|_______________________________________________________________________|";
        cout << "\n\n";
        cin.clear();
        cin.ignore(100, '\n');
        goto back;
    }
}
