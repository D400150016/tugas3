#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int salah();
int kerja();
int htgkembali();
int hitungcetak(double x, double y, double z);
main()
{
kerja();
}
int kerja()
{
int a, b, c, g, z, gel[3];
double g1,g2,x,y;
printf("PROGRAM MENGHITUNG NILAI SUATU RESISTOR DENGAN MEMBACA GELANG WARNANYA\n");
printf("[0] Hitam\n[1] Coklat\n[2] Merah\n[3] jingga\n[4] Kuning\n[5] Hijau\n");
printf("[6] Biru\n[7] Ungu\n[8] Abu-Abu\n[9] Putih\n");
printf("[10] Emas\n[11] Perak\n[12] Tak Berwarna\n\n");
printf("nb: ketik angka/hurufnya saja!\n\n");
for (g=0;g<=3;g++)
{
printf("Ketikkan warna gelang ke-%d : ", g+1);
scanf("%d",&gel[g]);
}
switch (gel[0])
{
case 0 : g1=0; break;
case 1 : g1=1; break;
case 2 : g1=2; break;
case 3 : g1=3; break;
case 4 : g1=4; break;
case 5 : g1=5; break;
case 6 : g1=6; break;
case 7 : g1=7; break;
case 8 : g1=8; break;
case 9 : g1=9; break;
default : {printf("Masukan gelang pertama salah!\n");}
}
switch (gel[1])
{
case 0 : g2=0; break;
case 1 : g2=1; break;
case 2 : g2=2; break;
case 3 : g2=3; break;
case 4 : g2=4; break;
case 5 : g2=5; break;
case 6 : g2=6; break;
case 7 : g2=7; break;
case 8 : g2=8; break;
case 9 : g2=9; break;
default : {printf("Masukan gelang kedua salah!\n");}
}
switch (gel[2])
{
case 0 : x=g1*(pow(10,1));y=g2*(pow(10,0));break;
case 1 : x=g1*(pow(10,2));y=g2*(pow(10,1));break;
case 2 : x=g1*(pow(10,3));y=g2*(pow(10,2));break;
case 3 : x=g1*(pow(10,4));y=g2*(pow(10,3));break;
case 4 : x=g1*(pow(10,5));y=g2*(pow(10,4));break;
case 5 : x=g1*(pow(10,6));y=g2*(pow(10,5));break;
case 6 : x=g1*(pow(10,7));y=g2*(pow(10,6));break;
case 7 : x=g1*(pow(10,8));y=g2*(pow(10,7));break;
case 8 : x=g1*(pow(10,9));y=g2*(pow(10,8));break;
case 9 : x=g1*(pow(10,10));y=g2*(pow(10,9));break;
case 10 : x=g1*(pow(10,0));y=g2*(pow(10,-1));break;
default : {printf("Masukan gelang ketiga salah!\n");}
}
switch (gel[3])
{
case 10 : z=5;break;
case 11 : z=10;break;
case 12 : z=20;break;
default : {}
}
if ((x<=0) || (y<=0) || (z<=0)) {salah();}
else
{
hitungcetak(x, y, z);
}
}
int hitungcetak(double x,double y, double z)
{
float res,tol, maks, min,w;
res=x+y;
tol=z;
maks=res+(tol/100*res);
min=res-(tol/100*res);
puts("\n\nBerikut hasil pengitungan:\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
printf("Nilai Resistor tersebut adalah       = %.0f OHM ", res);
printf("atau %.2f K.OHM\n", res/1000);
printf("Dengan toleransi                     = %.0f persen\n", tol);
printf("Maka nilai maksimumnya adalah        = %.0f Ohm\n", maks);
printf("dan nilai minimumnya adalah          = %.0f Ohm\n", min);
puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\nPenghitungan selesai!\n\n");
htgkembali();
}
int htgkembali()
{
char k;
scanf("%c",&k);
{
switch(k)
{
case 'y': kerja();break;
case 'Y': kerja();break;
case 'n': printf("\n\n\nTerima kasih atas penggunaan program ini.\nSemoga bermanfaat.\n");getche;exit(0);break;
case 'N': printf("\n\n\nTerima kasih atas penggunaan program ini.\nSemoga bermanfaat.\n");getche;exit(0);break;
default: {printf("Apakah anda ingin menghitung kembali?[jawab y atau n]");htgkembali();}
}
}
}
int salah()
{
char s;
printf("\nOopss!\nMasukan anda ternyata ada yang salah!\n");
scanf("%c",&s);
{
switch(s)
{
case 'y': htgkembali();break;
case 'Y': htgkembali();break;
case 'n': exit(0);break;
case 'N': exit(0);break;
default:{printf("Apakah anda ingin mengulanginya?");htgkembali();}
}
}
}
