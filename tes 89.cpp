#include <iostream>
using namespace std;
void bubbleSort(int data[], int n){
	int temp;
	for (int i = 0; i < n-1; i++)
	{
	for (int j = i+1; j < n; j++)
	{
		if(data[i] > data[j])
		{
			temp = data[i];
			data [i] = data[j];
			data [j] = temp;
}}}}
int main ()
	{
	int length;
	cout<<"PENILAIAN AKHIR TAHUN \n";
	cout<<"REKAYASA PERANGKAT LUNAK \n";
	cout<<"SMKN 5 KOTA BEKASI \n";
	cout<<"====================\n";
	cout<<"PROGRAM BUBBLE SORT \n";
	cout<<"Masukan jumlah data yang akan di urutkan : ";
	cin>>length;
	int data[length];
	for (int i = 0; i < length; i++)
	{
		cout<<"Data ke-"<<i<<" = ";
		cin>>data[i];
	}cout<<endl;
		
	cout<<"Data sebelum diurutkan : "<<endl;
	for (int i = 0; i < length; i++)
	{
		cout<<data[i]<<" ";
	}cout<<endl;
		
	bubbleSort(data,length);
	cout<<"Data setelah diurutkan : "<<endl;
	for (int i = 0; i < length; i++)
		{
		cout<<data[i]<<" ";
		}cout<<endl;
	}
