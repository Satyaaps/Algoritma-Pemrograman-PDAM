#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void a(), b(), c(), d(), e(), f(), g(), h();
void a_1(), a_2(), a_3(), a_4();
void b_1(), b_2(), b_3(), b_4();
void c_1(), c_2(), c_3(), c_4();
void d_1(), d_2(), d_3(), d_4();
void e_1(), e_2(), e_3(), e_4();
void f_1(), f_2(), f_3(), f_4();
void g_1(), g_2(), g_3(), g_4();
void h_1(), h_2(), h_3(), h_4();
void jenis_fasilitas(), mengulang();


void cover(){
    system("cls");
    printf("\t\t\t======================================================\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
    printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t||__________________________________________________||\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t|| I Gede Satya Ariya Putra Sangjaya   2205551040   ||\n");
    printf("\t\t\t|| I Dewa Gd Dharma Pawitra            2205551041   ||\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t======================================================\n");
}

void notaTagihan(char *nama, char *alamat, char *golongan, char *jenis_pelanggan, float adm, float bpm, float denda, float pemakaian, float biaya, float total){
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                   NOTA TAGIHAN                   ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama            : %s\n", nama);
        printf("\t\t\t|| Alamat          : %s\n", alamat);
        printf("\t\t\t|| Kelompok        : %s\n", jenis_pelanggan);
        printf("\t\t\t|| Golongan        : %s\n", golongan);
        printf("\t\t\t|| Tanggal         : %d\n");
        printf("\t\t\t|| Pemakaian       : %.2f m3\n", pemakaian);
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Biaya Pemakaian : Rp. %.2f\n", total);
        printf("\t\t\t|| Administrasi    : RP. %.2f\n", adm);
        printf("\t\t\t|| Pemeliharaan    : Rp. %.2f\n", bpm);
        printf("\t\t\t|| Denda           : Rp. %.2f\n", denda);
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Total           : Rp. %.2f\n", biaya);
        printf("\t\t\t======================================================\n");
}
void listrik(){
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> : ");
}
int inputan(){
	char cek;
	int pilih;

	if(cek=scanf("%d%c", &pilih, &cek)!=2 || pilih<0 || pilih>2 || cek != '\n'){
		fflush(stdin);
		printf("\n\t\t\t____________________________________________");
		printf("\n\t\t\t|        Masukan Input Yang Benar!         |");
		printf("\n\t\t\t============================================");
		printf("\n\t\t\t == ");
		return inputan();
		system("cls");
	}else{
		return pilih;
	}
}

void mengulang(){
    int kondisi;
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Ingin Mengulang Program??                        ||\n");
        printf("\t\t\t|| 1. Mengulang program                             ||\n");
        printf("\t\t\t|| 2. Keluar dari program                           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);

            if(kondisi == 1){          
                jenis_fasilitas();        
            }
            else if(kondisi == 2){
                system("cls");
                printf("t\t\t                 Terimakasih...                    \n");
                exit (0);
            }
}
float valid(){
	char cek;
	float pilih;

	if (cek=scanf("%f%c", &pilih, &cek)!=2|| pilih == 0){
		fflush(stdin);
		printf("\n\t\t\t____________________________________________");
		printf("\n\t\t\t|        Masukan angka Yang Benar!         |");
		printf("\n\t\t\t============================================");
		printf("\n\t\t\t == ");
		return valid();
		system("cls");
	}else{
		return pilih;
	}
}
void jenis_rumahtangga(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                    RUMAH TANGGA                  ||\n");
        printf("\t\t\t||         Silahkan Masukan Lebar jalan anda        ||\n");
        printf("\t\t\t||              (Termasuk got dan berm)             ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1. 0 meter - 3,99 meter                          ||\n");
        printf("\t\t\t|| 2. 4 meter - 6,99 meter                          ||\n");
        printf("\t\t\t|| 3. 7 meter - 10 meter                            ||\n");
        printf("\t\t\t|| 4. > 10 meter                                    ||\n");
        printf("\t\t\t|| 5. Toko beserta kios                             ||\n");
        printf("\t\t\t||                                         0. keluar||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);

			if(kondisi == 1){
				a();
			}
			else if(kondisi == 2){
				b();
			}
			else if(kondisi == 3){
				c();
			}
			else if(kondisi == 4){
				d();
			}
			else if(kondisi == 5){
				e();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
    
}
void jenis_usaha(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                        USAHA                     ||\n");
        printf("\t\t\t||         Silahkan Masukan Lebar jalan anda        ||\n");
        printf("\t\t\t||              (Termasuk got dan berm)             ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1. 0 meter - 6,99 meter                          ||\n");
        printf("\t\t\t|| 2. 4 meter - 6,99 meter                          ||\n");
        printf("\t\t\t|| 3. > 10 meter                                    ||\n");
        printf("\t\t\t||                                         0. keluar||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);

			if(kondisi == 1){
				f();
			}
			else if(kondisi == 2){
				g();
			}
			else if(kondisi == 3){
				h();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void jenis_fasilitas(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                                                  ||\n");
        printf("\t\t\t|| 1. Rumah Tangga                                  ||\n");
        printf("\t\t\t|| 2. Usaha                                         ||\n");
        printf("\t\t\t||                                         0. keluar||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);


            if(kondisi == 1){
                jenis_rumahtangga();
            }
            else if(kondisi == 2){
                jenis_usaha();
            }
            else if(kondisi == 0){
                exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
        
}

void a(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            a_1();
            break;
        case 2:
            a_2();
            break;
        case 3:
            a_3();
            break;
        case 4:
            a_4();
            break;
        default:
            break;
        }
}
void b(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            b_1();
            break;
        case 2:
            b_2();
            break;
        case 3:
            b_3();
            break;
        case 4:
            b_4();
            break;
        default:
            break;
        }
}
void c(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            c_1();
            break;
        case 2:
            c_2();
            break;
        case 3:
            c_3();
            break;
        case 4:
            c_4();
            break;
        default:
            break;
        }
}
void d(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            d_1();
            break;
        case 2:
            d_2();
            break;
        case 3:
            d_3();
            break;
        case 4:
            d_4();
            break;
        default:
            break;
        }
}
void e(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            e_1();
            break;
        case 2:
            e_2();
            break;
        case 3:
            e_3();
            break;
        case 4:
            e_4();
            break;
        default:
            break;
        }
}
void f(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            f_1();
            break;
        case 2:
            f_2();
            break;
        case 3:
            f_3();
            break;
        case 4:
            f_4();
            break;
        default:
            break;
        }
}
void g(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            g_1();
            break;
        case 2:
            g_2();
            break;
        case 3:
            g_3();
            break;
        case 4:
            g_4();
            break;
        default:
            break;
        }
}
void h(){
    listrik();
    int kondisi = inputan();
    switch (kondisi)
    {
        case 1:
            h_1();
            break;
        case 2:
            h_2();
            break;
        case 3:
            h_3();
            break;
        case 4:
            h_4();
            break;
        default:
            break;
        }
}

void a_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 1780;
        }
        else if(pemakaian <=20){
            total = pemakaian * 2060;
        }
        else if(pemakaian >20){
            total = pemakaian * 5880;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void a_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 2060;
        }
        else if(pemakaian <=20){
            total = pemakaian * 2340;
        }
        else if(pemakaian >20){
            total = pemakaian * 5940;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void a_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6340;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9200;
        }
        else if(pemakaian >20){
            total = pemakaian * 9600;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);    
}
void a_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6420;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9350;
        }
        else if(pemakaian >20){
            total = pemakaian * 5650;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}

void b_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 2340;
        }
        else if(pemakaian <=20){
            total = pemakaian * 2620;
        }
        else if(pemakaian >20){
            total = pemakaian * 6000;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void b_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 2620;
        }
        else if(pemakaian <=20){
            total = pemakaian * 2900;
        }
        else if(pemakaian >20){
            total = pemakaian * 6060;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void b_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6490;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9500;
        }
        else if(pemakaian >20){
            total = pemakaian * 9800;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}
void b_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6570;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9650;
        }
        else if(pemakaian >20){
            total = pemakaian * 9950;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}

void c_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 2900;
        }
        else if(pemakaian <=20){
            total = pemakaian * 3180;
        }
        else if(pemakaian >20){
            total = pemakaian * 6120;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void c_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 3180;
        }
        else if(pemakaian <=20){
            total = pemakaian * 3460;
        }
        else if(pemakaian >20){
            total = pemakaian * 6180;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void c_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6640;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9800;
        }
        else if(pemakaian >20){
            total = pemakaian * 10100;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}
void c_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6720;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9950;
        }
        else if(pemakaian >20){
            total = pemakaian * 10250;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}

void d_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 3460;
        }
        else if(pemakaian <=20){
            total = pemakaian * 3740;
        }
        else if(pemakaian >20){
            total = pemakaian * 6240;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void d_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 3740;
        }
        else if(pemakaian <=20){
            total = pemakaian * 4020;
        }
        else if(pemakaian >20){
            total = pemakaian * 6300;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void d_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6790;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10100;
        }
        else if(pemakaian >20){
            total = pemakaian * 10400;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}
void d_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6870;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10250;
        }
        else if(pemakaian >20){
            total = pemakaian * 10555;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}

void e_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 6940;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10400;
        }
        else if(pemakaian >20){
            total = pemakaian * 10700;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void e_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 7020;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10550;
        }
        else if(pemakaian >20){
            total = pemakaian * 10850;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void e_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 7090;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10700;
        }
        else if(pemakaian >20){
            total = pemakaian * 11000;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}
void e_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 7170;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10850;
        }
        else if(pemakaian >20){
            total = pemakaian * 11150;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total); 
}
//
void f_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 1 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 9200;
        }
        else if(pemakaian <=20){
            total = pemakaian * 9850;
        }
        else if(pemakaian >20){
            total = pemakaian * 10950;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void f_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 2 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 9500;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10150;
        }
        else if(pemakaian >20){
            total = pemakaian * 11250;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void f_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 3 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 9800;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10450;
        }
        else if(pemakaian >20){
            total = pemakaian * 11550;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void f_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 4 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 10100;
        }
        else if(pemakaian <=20){
            total = pemakaian * 10750;
        }
        else if(pemakaian >20){
            total = pemakaian * 11850;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}

void g_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 1 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 10400;
        }
        else if(pemakaian <=20){
            total = pemakaian * 11050;
        }
        else if(pemakaian >20){
            total = pemakaian * 12150;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void g_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 2 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 10700;
        }
        else if(pemakaian <=20){
            total = pemakaian * 11350;
        }
        else if(pemakaian >20){
            total = pemakaian * 12550;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void g_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 3 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 11000;
        }
        else if(pemakaian <=20){
            total = pemakaian * 11650;
        }
        else if(pemakaian >20){
            total = pemakaian * 13150;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void g_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 4 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 11300;
        }
        else if(pemakaian <=20){
            total = pemakaian * 11950;
        }
        else if(pemakaian >20){
            total = pemakaian * 13950;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}

void h_1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 1 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 11600;
        }
        else if(pemakaian <=20){
            total = pemakaian * 12250;
        }
        else if(pemakaian >20){
            total = pemakaian * 14750;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void h_2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 2 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 11900;
        }
        else if(pemakaian <=20){
            total = pemakaian * 12550;
        }
        else if(pemakaian >20){
            total = pemakaian * 15050;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void h_3(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 3 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 12200;
        }
        else if(pemakaian <=20){
            total = pemakaian * 12850;
        }
        else if(pemakaian >20){
            total = pemakaian * 15850;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}
void h_4(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 4 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        denda = 0;
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if(pemakaian<=10){
            total = pemakaian * 12500;
        }
        else if(pemakaian <=20){
            total = pemakaian * 13150;
        }
        else if(pemakaian >20){
            total = pemakaian * 16650;
        }
        biaya = total + denda + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, denda, pemakaian, biaya, total);
}

int main(){
    
    cover();
    system("pause");
    system("cls");

    jenis_fasilitas();
    system("pause");
    system("cls");

    mengulang();
    system("pause");
    system("cls");
    return 0;
}
