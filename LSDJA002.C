#include<stdio.h>
#include<conio.h>

main()
{
 char nim[3][10], namaMHS[15][10];  //array 2 dimensi
 int nilai[10],i,jmhs;              //array 1 dimensi

 clrscr();

 //validasi jumlah mahasiswa
 do{
    printf("Jumlah mahasiswa ? ");
    scanf("%d",&jmhs); fflush(stdin);

    if(jmhs>10){
     printf("Maksimal 10 siswa, silahkan ulangi tekan ENTER...!");
     getch();
    }

 }while(jmhs>10);

 //input data mahasiswa
 for(i=0;i<jmhs;i++){
  printf("Data nilai mahasiswa ke-%d\n",i+1);
  printf("Nomor induk 			= "); gets(nim[i]); fflush(stdin);
  printf("Nama mahasiswa			= "); scanf("%s",&namaMHS[i]); fflush(stdin);
  printf("Nilai Ujian			= "); scanf("%d",&nilai[i]); fflush(stdin);
 }

 i=0; //inisialisai mulai dari 0
 printf("\nData nilai mahasiswa tersebut : \n");
 printf("No 	Nim 	Nama 	Nilai\n");
 do{
  printf("%d. 	%s 	%s 	%d\n",i+1,nim[i],namaMHS[i],nilai[i]);
  i++;
 }while(i<jmhs);

 printf("\nTEKAN ENTER untuk kembali ke source code....!");
 getch();
 return 0;
}