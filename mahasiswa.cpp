#include <iostream>
using namespace std;
struct datadiri{
    string nama;
    int nim;
    char kom;
};
void bubble(datadiri get[],int m){
    int i,j;
    for (i = 0; i < m-1; i++)
    {
        for (j = 0; j < m-1; j++)
        {
            if (get[j].nim >get[j+1].nim)
            {
                swap(get[j].nama,get[j+1].nama);
                swap(get[j].nim,get[j+1].nim);
                swap(get[j].kom,get[j+1].kom);
            }
            
        }
        
    }
    
}
int main(){
    int n;
    system("clear");
    cout<<"Program Data Mahasiswa"<<endl;
    cout<<"Banyak data yang ingin di masukkan : ";
    cin>>n;
    datadiri siswa[n];
    int i=0;
    for ( i = 0; i < n; i++)
    {
        cout<<" "<<i+1<<".) Masukkan nama siswa : ";
        cin.ignore();
        getline(cin,siswa[i].nama);
        cout<<"     Masukkan NIM siswa : ";
        cin>>siswa[i].nim;
        cout<<"     Masukkan Kom : ";
        cin>> siswa[i].kom;
    }
    bubble(siswa,n);
    for  (i = 0; i < n; i++)
    {
        cout<<" "<<i+1<<".) Nama : "<<siswa[i].nama<<endl;
        cout<<"     NIM : "<<siswa[i].nim<<endl;
        cout<<"     Kom : "<<siswa[i].kom<<endl;
    }
    
}