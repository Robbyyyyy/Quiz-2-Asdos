#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>>

int main()
{
    fflush(stdin);
    int input;
    system("COLOR F8");
    system("cls");
    puts("================\n");
    puts("Tugas Kalkulator\n");
    puts("================");
    puts(" 1. PingPoroLanSudo");
    puts(" 2. SinCosTan");
    puts(" 3. Hitung Keliling dan Luas");
    puts(" 4. Hitung Akar Kuadrat");
    puts(" 5. Exit");
    puts(" ================");
    printf(" Masukkan Pilihan : ");
    scanf("%d", &input);
    switch(input)
    {
        case 1 : Pipolondo();break;
        case 2 : SinCosTan();break;
        case 3 : keliling();break;
        case 4 : akar();break;
        case 5 : keluar();break;
        default : goto*main();
    }
}

int Pipolondo()
{
    fflush(stdin);
    int menu;
    system("cls");
    puts(" ================");
    puts(" Ping Poro Lan Sudo");
    puts(" ================");
    printf(" Kalkulator\n");
    printf(" 1. Perkalian\n");
    printf(" 2. Pembagian\n");
    printf(" 3. Penjumlahan\n");
    printf(" 4. Pengurangan\n");
    printf(" 5. Return Menu Utama\n");
    puts(" ================");
    printf("Pilih : ");
    scanf("%d", &menu);
    switch(menu)
    {
        case 1 : perkalian();break;
        case 2 : pembagian();break;
        case 3 : penjumlahan();break;
        case 4 : pengurangan();break;
        case 5 : goto*main();
        default : goto*Pipolondo();
    }
}
int penjumlahan()
{
    fflush(stdin);
    float a, b;
    char c;
    system("cls");
    printf("Masukkan Input Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Input Kedua = ");
    scanf("%f", &b);
    float jml = a+b;
    printf("Hasil %.2f + %.2f = %.2f", a, b, jml);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Penjumlahan? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*penjumlahan();
    }
    else if(c=='n')
    {
        goto*Pipolondo();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int pengurangan()
{
    fflush(stdin);
    float a, b;
    char c;
    system("cls");
    printf("Masukkan Input Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Input Kedua = ");
    scanf("%f", &b);
    float jml = a-b;
    printf("Hasil %.2f - %.2f = %.2f", a, b, jml);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Pengurangan? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*pengurangan();
    }
    else if(c=='n')
    {
        goto*Pipolondo();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
    }

int perkalian()
{
    fflush(stdin);
    float a, b;
    char c;
    system("cls");
    printf("Masukkan Input Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Input Kedua = ");
    scanf("%f", &b);
    float jml = a*b;
    printf("Hasil %.2f x %.2f = %.2f\n", a, b, jml);
    printf("Press any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Perkalian? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*perkalian();
    }
    else if(c=='n')
    {
        goto*Pipolondo();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int pembagian()
{
    fflush(stdin);
    float a, b;
    char c;
    system("cls");
    printf("Masukkan Input Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Input Kedua = ");
    scanf("%f", &b);
    float jml = a/b;
    printf("Hasil %.2f : %.2f = %.2f", a, b, jml);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Pembagian? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*pembagian();
    }
    else if(c=='n')
    {
        goto*Pipolondo();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}


int SinCosTan()
{
    fflush(stdin);
    int a;
    system("cls");
    puts("================");
    puts(" Keliling Luas Volume");
    puts("================");
    puts(" 1. Sinus");
    puts(" 2. Cosinus");
    puts(" 3. Tangen");
    puts(" 4. Return Menu Utama");
    puts(" ================");
    printf("Pilih : ");
    scanf("%d", &a);
    switch(a)
    {
        case 1 : sinus();break;
        case 2 : cosinus(); break;
        case 3 : tangen();break;
        case 4 : goto*main();
        default : goto*SinCosTan();
    }
}
int sinus()
{
    fflush(stdin);
    float a1;
    char c;
    system("cls");
    printf("Masukkan derajat Sinus : ");
    scanf("%f", &a1);
    printf("Hasil Sinus adalah = %.2f", sin(a1*(3.1428571429/180)));
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Sinus? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*sinus();
    }
    else if(c=='n')
    {
        goto*SinCosTan();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int cosinus()
{
    fflush(stdin);
    float a1;
    char c;
    system("cls");
    printf("Masukkan derajat Cosinus : ");
    scanf("%f", &a1);
    printf("Hasil Cosinus adalah = %.2f", cos(a1*(3.1428571429/180)));
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Cosinus? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*cosinus();
    }
    else if(c=='n')
    {
        goto*SinCosTan();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int tangen()
{
    fflush(stdin);
    float a1;
    char c;
    system("cls");
    printf("Masukkan derajat Tangen: ");
    scanf("%f", &a1);
    printf("Hasil Tangen adalah = %.2f", tan(a1*(3.1428571429/180)));
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Tangen? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*tangen();
    }
    else if(c=='n')
    {
        goto*SinCosTan();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}


int keliling()
{
    fflush(stdin);
    int b;
    system("cls");
    puts("================");
    puts(" Keliling Luas Volume");
    puts("================");
    puts(" 1. Hitung Keliling Bangun Datar");
    puts(" 2. Hitung Luas Bangun Datar");
    puts(" 3. Hitung Volume Bangun Ruang");
    puts(" 4. Return Menu Utama");
    puts("================");
    printf("Pilih : ");
    scanf("%d", &b);
    switch(b)
    {
        case 1 : kelilingdatar();break;
        case 2 : luas();break;
        case 3 : volume();break;
        case 4 : goto*main();break;
        default : goto*keliling();
    }
}
int kelilingdatar()
{
    fflush(stdin);
    int b1;
    system("cls");
    puts("================");
    puts(" Keliling Bangun Datar");
    puts("================");
    puts(" 1. Keliling Persegi");
    puts(" 2. Keliling Trapesium");
    puts(" 3. Keliling Layang-Layang");
    puts(" 4. Keliling Lingkaran");
    puts(" 5. Kembali ke Menu Sebelumnya");
    puts("================");
    printf("Pilih : ");
    scanf("%d", &b1);
    switch(b1)
    {
        case 1 : persegi();break;
        case 2 : trapesium();break;
        case 3 : tatas();break;
        case 4 : bunder();break;
        case 5 : goto*keliling();
        default : goto*kelilingdatar();
    }
}
int persegi()
{
    fflush(stdin);
    float b1a, b1b;
    char c;
    system("cls");
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &b1a);
    printf("Masukkan Lebar Persegi : ");
    scanf("%f", &b1b);
    float hasila=(b1a+b1b)*2;
    printf("Keliling Persegi adalah = %.2f", hasila);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Keliling Persegi? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*persegi();
    }
    else if(c=='n')
    {
        goto*kelilingdatar();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int trapesium()
{
    fflush(stdin);
    float b2a, b2b, b2c;
    char c;
    system("cls");
    printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
    scanf("%f", &b2a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
    scanf("%f", &b2b);
    printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");
    scanf("%f", &b2c);
    float hasilb=(b2c*2)+b2a+b2b;
    printf("Keliling Trapesium Sama Kaki adalah = %.2f", hasilb);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Keliling Trapesium? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*trapesium();
    }
    else if(c=='n')
    {
        goto*kelilingdatar();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int tatas()
{
    fflush(stdin);
    float b3a, b3b;
    char c;
    system("cls");
    printf("Masukkan Diagonal Panjang : ");
    scanf("%f", &b3a);
    printf("Masukkan Diagonal Lebar : ");
    scanf("%f", &b3b);
    float hasilc=(b3a+b3b)*2;
    printf("Keliling Layang-Layang adalah = %.2f", hasilc);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Keliling Layang-Layang? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*tatas();
    }
    else if(c=='n')
    {
        goto*kelilingdatar();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int bunder()
{
    fflush(stdin);
    float b4a, b4b;
    char c;
    system("cls");
    printf("Masukkan Panjang Diameter : ");
    scanf("%f", &b4a);
    printf("Masukkan Panjang Jari-jari : ");
    scanf("%f", &b4b);
    float hasild1=(3.1428571429*b4a);
    float hasild2=(3.1428571429*b4b*2);
    printf("Keliling Lingkaran berdasar Jari-Jari = %.2f", hasild2);
    printf("\nKeliling Lingkaran berdasar Diameter = %.2f", hasild1);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Keliling Lingkaran? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*bunder();
    }
    else if(c=='n')
    {
        goto*kelilingdatar();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}

int luas()
{
    fflush(stdin);
    int b2;
    system("cls");
    puts("================");
    puts(" Luas Bangun Datar");
    puts("================");
    puts(" 1. Luas Persegi");
    puts(" 2. Luas Trapesium");
    puts(" 3. Luas Layang-Layang");
    puts(" 4. Luas Lingkaran");
    puts(" 5. Kembali ke Menu Sebelumnya");
    puts("================");
    printf("Pilih : ");
    scanf("%d", &b2);
    switch(b2)
    {
        case 1 : luas1();break;
        case 2 : luas2();break;
        case 3 : luas3();break;
        case 4 : luas4();break;
        case 5 : goto*keliling();
        default : goto*luas();
    }
}
int luas1()
{
    fflush(stdin);
    float b1a, b1b;
    char c;
    system("cls");
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &b1a);
    printf("Masukkan Lebar Persegi : ");
    scanf("%f", &b1b);
    float hasilpersegi=b1a*b1b;
    printf("Luas Persegi adalah = %.2f", hasilpersegi);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Luas Persegi? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*luas1();
    }
    else if(c=='n')
    {
        goto*luas();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int luas2()
{
    fflush(stdin);
    float b2a, b2b, b2c;
    char c;
    system("cls");
    printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
    scanf("%f", &b2a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
    scanf("%f", &b2b);
    printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");
    scanf("%f", &b2c);
    float hasiltrapesium=((b2a+b2b)*b2c)/2;
    printf("Luas Trapesium Sama Kaki adalah = %.2f", hasiltrapesium);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Luas Trapesium? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*luas2();
    }
    else if(c=='n')
    {
        goto*luas();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int luas3()
{
    fflush(stdin);
    float b3a, b3b;
    char c;
    system("cls");
    printf("Masukkan Panjang Sisi Atas : ");
    scanf("%f", &b3a);
    printf("Masukkan Panjang Sisi Bawah : ");
    scanf("%f", &b3b);
    float hasilc=(b3a*b3b)/2;
    printf("Luas Layang-Layang adalah = %.2f", hasilc);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Luas Layang-Layang? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*luas3();
    }
    else if(c=='n')
    {
        goto*luas();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int luas4()
{
    fflush(stdin);
    float b4a, b4b;
    char c;
    system("cls");
    printf("Masukkan Panjang Diameter : ");
    scanf("%f", &b4a);
    printf("Masukkan Panjang Jari-jari : ");
    scanf("%f", &b4b);
    float jari=b4a/2;
    float hasild1=(3.1428571429*(jari*jari));
    float hasild2=(3.1428571429*(b4b*b4b));
    printf("Luas Lingkaran berdasar Jari-Jari = %.2f", hasild2);
    printf("\nLuas Lingkaran berdasar Diameter = %.2f", hasild1);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Luas Lingkaran? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*luas3();
    }
    else if(c=='n')
    {
        goto*luas();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}

int volume()
{
    fflush(stdin);
    int b3;
    system("cls");
    puts("================");
    puts(" Volume Bangun Ruang");
    puts("================");
    puts(" 1. Volume Kubus");
    puts(" 2. Volume Prisma");
    puts(" 3. Volume Limas");
    puts(" 4. Volume Bola");
    puts(" 5. Kembali ke Menu Sebelumnya");
    puts("================");
    printf("Pilih : ");
    scanf("%d", &b3);
    switch(b3)
    {
        case 1 : kubus();break;
        case 2 : prisma();break;
        case 3 : limas();break;
        case 4 : bola();break;
        case 5 : goto*keliling();
        default : goto*volume();
    }
}
int kubus()
{
    fflush(stdin);
    float b1a;
    char c;
    system("cls");
    printf("Masukkan Panjang Sisi Kubus : ");
    scanf("%f", &b1a);
    float hasila=b1a*b1a*b1a;
    printf("Volume Kubus adalah = %.2f", hasila);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Volume Kubus? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*kubus();
    }
    else if(c=='n')
    {
        goto*volume();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int prisma()
{
    fflush(stdin);
    float persegi, segi3, ts, jari, dm, tp;
    char c;;
    system("cls");
    printf("Masukkan Sisi Persegi : ");
    scanf("%f", &persegi);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &segi3);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &ts);
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &jari);
    printf("Masukkan Diameter Lingkaran : ");
    scanf("%f", &dm);
    printf("Masukkan Tinggi Prisma : ");
    scanf("%f", &tp);
    float dn=dm/2;
    float hasil1=persegi*persegi*tp;
    float hasil2=segi3*ts*tp/2;
    float hasil3=jari*jari*3.1428571429*tp;
    float hasil4=dn*dn*3.1428571429*tp;
    printf("Volume Prisma Persegi adalah = %.2f", hasil1);
    printf("\nVolume Prisma Segitiga adalah = %.2f", hasil2);
    printf("\nVolume Silinder berdasar Jari-Jari adalah = %.2f", hasil3);
    printf("\nVolume Silinder berdasar Diameter adalah = %.2f", hasil4);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Volume Prisma? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*prisma();
    }
    else if(c=='n')
    {
        goto*volume();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int limas()
{
    fflush(stdin);
    float persegi, segi3, ts, jari, dm, tp;
    char c;
    system("cls");
    printf("Masukkan Sisi Persegi : ");
    scanf("%f", &persegi);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &segi3);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &ts);
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &jari);
    printf("Masukkan Diameter Lingkaran : ");
    scanf("%f", &dm);
    printf("Masukkan Tinggi Limas : ");
    scanf("%f", &tp);
    float dn=dm/2;
    float hasil1=(persegi*persegi*99/100)*tp/3;
    float hasil2=(segi3*ts*99/100)*tp/6;
    float hasil3=(jari*jari*90/100)*3.1428571429*tp/3;
    float hasil4=(dn*dn*90/100)*3.1428571429*tp/3;
    printf("Volume Limas Persegi adalah = %.2f", hasil1);
    printf("\nVolume Limas Segitiga adalah = %.2f", hasil2);
    printf("\nVolume Limas Silinder berdasar Jari-Jari adalah = %.2f", hasil3);
    printf("\nVolume Limas Silinder berdasar Diameter adalah = %.2f", hasil4);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Volume Limas? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*limas();
    }
    else if(c=='n')
    {
        goto*volume();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}
int bola()
{
    fflush(stdin);
    float b4a, b4b;
    char c;
    system("cls");
    printf("Masukkan Panjang Jari-jari : ");
    scanf("%f", &b4b);
    printf("Masukkan Panjang Diameter : ");
    scanf("%f", &b4a);
    float jari=b4a/2;
    float hasild1=((4*3.135*b4b*b4b*b4b)/3);
    float hasild2=((4*3.1428571429*jari*jari*jari)/3);
    printf("Volume Bola berdasar Jari-Jari = %.2f", hasild1);
    printf("\nVolume Bola berdasar Diameter = %.2f", hasild2);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Volume Bola? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*bola();
    }
    else if(c=='n')
    {
        goto*volume();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}


int akar()
{
    fflush(stdin);
    float z;
    char c;
    system("cls");
    printf("Masukkan bilangan yang akan diakar = ");
    scanf("%f", &z);
    float z1=sqrt(z);
    printf("Hasil akar dari %.2f adalah %.2f", z, z1);
    printf("\nPress any key to continue . . .");
    getch();
    ulang :
    printf("\nIngin mengulang Volume Bola? (y/n)");
    scanf("%d", &c);
    c=getchar();
    if(c=='y')
    {
        goto*akar();
    }
    else if(c=='n')
    {
        goto*main();
    }
    else
    {
        system("cls");
        puts("Pilihan tidak tersedia");
        goto ulang;
    }
}


int keluar()
{
    system("cls");
    puts("TERIMA KASIH ~ GOODLUCK");
    exit(0);
}
