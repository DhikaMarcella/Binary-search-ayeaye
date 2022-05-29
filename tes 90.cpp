#include <iostream>
using namespace std;
main (){
	int i;
	int cari, ketemu;
	int A[100];
	cout<<"PENILAIAN AKHIR TAHUN \n";
	cout<<"REKAYASA PERANGKAT LUNAK \n";
	cout<<"SMK NEGERI 5  KOTA BEKASI \n";
	cout<<"===========================\n";
	cout<<"PROGRAM BINARY SEARCH \n";
	cout<<"DENGAN 8 BUAH DATA: \n\n";
	for(i=1; i <=8; i++)
	{
		cout<<"Masukan data ke-"<<i<<" = ";
		cin>>A[i];
	}
	cout<<endl;
	cout<<"Input data yang di cari:";cin>>cari;
	cout<<endl;
	
	ketemu = 0;
	for(i=0; i<=8; i++)
	{
		if (A[i]==cari)
		{
			ketemu=1;
			cout<<"Data berhasil di temukan di barisan data ke-"<<i<<endl;
		}
	}
	if (ketemu==0)
	{
		cout<<"Data tidak berhasil di temukan"<<endl;
}}
